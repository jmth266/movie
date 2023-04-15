/* 
 * File: Movie.h
 * 
 * Project: Movie Ranking Database
 * Purpose: provide the declaration of the class named Movie
 *
 * Author: Quinn Brandt
 *
 */
#ifndef MOVIE_H
#define MOVIE_H

#include <string>

using namespace std;

class Movie
{
    public:
        // default constructor
        Movie();

        // constructor: give the initial value to the private data members name, genre, year, duration, and rank 
        // to pass-in parameters in_name, in_genre, in_year, in_duration, in_rank
        Movie(string in_name, string in_genre, int in_year, int in_duration, int in_rank);

        // set the private data member: name
        // to pass-in parameter in_name
        void setName(string in_name);

        // set the private data member: genre
        // to pass-in parameter in_genre
        void setGenre(string in_genre);

        // set the private data member: year
        // to pass-in parameter in_year
        void setYear(int in_year);

        // set the private data member: duration
        // to pass-in parameter in_duration
        void setDuration(int in_duration);
        
        // set the private data member: rank
        // to pass-in parameter in_rank
        void setRank(int in_Rank);

        // return the value of the data member: name
        string getName() const;

        // return the value of the data member: genre
        string getGenre() const;

        // return the value of the data member: year
        int getYear() const;

        // return the value of the data member: duration
        int getDuration() const;

        // return the value of the data member: rank
        int getRank() const;

        // print the formatted movie information - for example:
        // Movie: Aladdin   Genre: Kids    Year: 1992   Duration: 90 mins   Rank: 12
        void write() const;

    private:
        string name;
        string genre;
        int year;
        int duration;
        int rank;
};

#endif /* MOVIE_H */