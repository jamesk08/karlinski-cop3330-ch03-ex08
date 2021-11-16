/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 James Karlinski
 */

#include "std_lib_facilities.h"

int main()
{
    int num = 0;
    cout << "Please type an integer number and press enter: ";

    cin >> num;
    if ((num % 2) == 0) 
    {
        cout << "The value " << num << " is an even number.";
    }
    else 
    {
        cout << "The value " << num << " is an odd number.";
    }

    return 0;
}