/* 
 * File: MovieRank.h
 * 
 * Project: Movie Ranking Database
 * Purpose: provide the declaration of the class named MovieRank
 *
 * Author: Quinn Brandt
 *
 */
#ifndef MOVIERANK_H
#define MOVIERANK_H

#include <string>
#include <vector>
#include "Movie.h"

using namespace std;

class MovieRank
{
    public:
        // default constructor
        MovieRank();

        int getSize() const;

        void populateMovies();

        Movie adjustRank(Movie movie);

        Movie makeSuggestion();

    vector<Movie> movies;
};

#endif /* MOVIERANK_H */