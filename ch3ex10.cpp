/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution ch 3 ex 10
 *  Copyright 2021 kirsten blair
 */

#include "std_lib_facilities.h"

int main()
{
    cout << "Write an operation followed by two numbers: \n";

    string operation;
    double x, y;

    cin >> operation >> x >> y;

    if (operation == "+"|| operation == "plus")
    cout << x << " + " << y << " = " << x+y;
    else if (operation == "-" || operation == "minus")
    cout << x << " - " << y << " = " << x-y;
    else if (operation == "*" || operation == "mul")
    cout << x << " * " << y << " = " << x*y;
    else if (operation == "/" || operation == "div")
    cout << x << " / " << y << " = " << x/y;

    else 

    cout << "Operation " << operation << " is unsolvable";

    return 0;


}
