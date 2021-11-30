/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Avery Reyna
 */

#include <iostream>
using namespace std;

int main()
{
    // initialize the variables needed for the program, including a double named "answer" that would be used to store the result
    double first_number, second_number;
    string operation;
    double answer;
    
    // prompt the user for the numbers and operand they want to use, storing it in their respective variables
    cout << "Enter your first number: ";
    cin >> first_number;
    cout << "Enter your second number: ";
    cin >> second_number;
    cout << "Enter your operator: ";
    cin >> operation;
    
    // if they want to add, add the numbers
    if (operation == "+")
    {
        answer = first_number + second_number;
        printf("Your answer is %f", answer);
    }
    // if they want to subtract, subtract the numbers
    else if (operation == "-")
    {
        answer = first_number - second_number;
        printf("Your answer is %f", answer);
    }
    // if they want to multiply, multiply the numbers
    else if (operation == "*")
    {
        answer = first_number * second_number;
        printf("Your answer is %f", answer);
    }
    // if they want to divide, divide the numbers
    else if (operation == "/")
    {
        // if the second number is 0, then the answer would be unidefined — this catches that error
        if (second_number == 0)
        {
            printf("Error! Division by 0.");
        }
        else
        {
            answer = first_number / second_number;
            printf("Your answer is %f", answer); 
        }
    }

    return 0;

}