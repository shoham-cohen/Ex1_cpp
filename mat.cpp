#include "mat.hpp"
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;
/* 
for the first implementation we will just cover 
the edge cases for the inputs and if the input is valid
we will print somthing
we are assuming that its ok to insert the same sign
*/

namespace ariel
{
    string mat(int rows, int coloms, char first, char second)
    {
        const int min = 33;
        const int max = 126;
        if(rows <= 0){
            throw runtime_error("rows need to be a positive integer");
        }
        if(coloms <= 0){
            throw runtime_error("coloms  need to be a positive integer");
        }
        if(rows % 2 == 0){
            throw runtime_error("Mat size is always odd");
        }
        if(coloms % 2 == 0){
            throw runtime_error("Mat size is always odd");
        }
        if(first < min || first > max){
            throw runtime_error("first char is not vallid");
        }
        if (second < min || second > max){
            throw runtime_error("second char is not vallid");
        }
        return "somthing";
        
    }

}