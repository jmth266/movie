/* 
 * File: Movie.cpp
 * 
 * Project: Movie Ranking Database
 * Purpose: provide the implementation of the member functions of the class named Movie
 *
 * Author: Quinn Brandt
 *
 */
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "Movie.h"

// default constructor
Movie::Movie(){
    Movie movie;
    name;
    genre;
    int year; 
    int duration;
    int rank;
}

// constructor: give the initial value to the private data members name, genre, year, duration, and rank 
// to pass-in parameters in_name, in_genre, in_year, in_duration, in_rank
Movie::Movie(string in_name, string in_genre, int in_year, int in_duration, int in_rank){
    name = in_name;
    genre = in_genre;
    year = in_year;
    duration = in_duration;
    rank = in_rank;
}

// set the private data member: name
// to pass-in parameter in_name
void Movie::setName(string in_name){
    name = in_name;
}

// set the private data member: genre
// to pass-in parameter in_genre
void Movie::setGenre(string in_genre){
    genre = in_genre;
}

// set the private data member: year
// to pass-in parameter in_year
void Movie::setYear(int in_year){
    year = in_year;
}

// set the private data member: duration
// to pass-in parameter in_duration
void Movie::setDuration(int in_duration){
    duration = in_duration;
}

void Movie::setRank(int in_rank){
    rank = in_rank;
}

// return the value of the data member: name
string Movie::getName() const{
    return name;
}

// return the value of the data member: genre
string Movie::getGenre() const{
    return genre;
}

// return the value of the data member: year
int Movie::getYear() const{
    return year;
}

// return the value of the data member: duration
int Movie::getDuration() const{
    return duration;
}

// return the value of the data member: rank
int Movie::getRank() const{
    return rank;
}

// print the formatted movie information - for example:
// Movie: Aladdin   Genre: Kids    Year: 1992   Duration: 90 mins   Rank: 12
void Movie::write() const{
    // Write to Text File for User Friendly Viewing
    ofstream movieFile;
    movieFile.open("movieBank.txt", ios::app);
    movieFile << "Movie: " << setw(40) << left << name;
    movieFile << "Genre: " << setw(10) << left << genre;
    movieFile << "Release: " << setw(6) << left << year;
    movieFile << "Duration: " << setw(3) << left << duration << "mins. ";
    movieFile << "Rank: " << rank;
    movieFile << "\n";
    movieFile.close();
    // Write to CSV File for easy access to Movie Fields
    fstream fout;
    fout.open("movieBank.csv", ios::app);
    // Insert the data to file
    fout << name << ", "
            << genre << ", "
            << to_string(year) << ", "
            << to_string(duration) << ", "
            << to_string(rank)
            << "\n";
}