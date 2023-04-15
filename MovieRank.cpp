/* 
 * File: MovieRank.cpp
 * 
 * Project: Movie Ranking Database
 * Purpose: implement functions to recieve input, perform "rank tournament", 
 *          and make suggestions of movies based on desired genre, year, and highest rank
 *
 * Author: Quinn Brandt
 *
 */
#include <iostream>     // std::cout, std::fixed
#include <iomanip>      // std::setprecision
#include <istream>
#include <fstream>
#include <sstream>
#include <string>
#include <random>
#include "Movie.h"
#include "MovieRank.h"

// default constructor
MovieRank::MovieRank(){

}

int MovieRank::getSize() const{
    return movies.size();
}

void MovieRank::populateMovies(){
    string myFilePath = "movieBank.csv";
    ifstream mfile;

    mfile.open(myFilePath);

    if (mfile.fail()) {
        cerr << "Unable to open the file " << myFilePath << endl;
        return;
        vector<string> row;
        while(mfile.peek() != EOF){
            row.clear();
            for(int i = 0; i < 5; i++){
                string word;
                getline(mfile, word, ',');
                row.push_back(word);
            }
            string name = row[0];
            string genre = row[1];
            int year = stoi(row[2]);
            int dur = stoi(row[3]);
            int rank = stoi(row[4]);
            Movie m(name, genre, year, dur, rank);
            movies.push_back(m);
        }
        mfile.close();
    }
}

Movie MovieRank::adjustRank(Movie movie){
    vector<Movie> forCompare;
    //generates a collection of movies with the same genre 
    //as most recent input
    for(int i = 0; i < movies.size(); i++){
        if(movie.getGenre()==(movies[i].getGenre())){
            forCompare.push_back(movies[i]);
        }
    }
    int r = rand()%forCompare.size();
    //return random Movie to be compared with the most
    //recent input
    return movies[r];
}

Movie MovieRank::makeSuggestion(){
    for(int i = 0; i < movies.size(); i++){
        
    }
}

