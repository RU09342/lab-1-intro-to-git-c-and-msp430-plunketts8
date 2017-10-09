/*
 * math.c
 *
 *  Created on: Sept 11, 2017
 * 	Last Edited: Sept 11, 2017
 *      Author: Seamus Plunkett
 */

#include <stdio.h>
#include <math.h>


//The math function is capable to add, substract, multiply, integer divide, and modulus.
//It takes in two intgers and based on the operator decided which operation.

int math(int num1, int num2, char Operator)

{

//If statments to determine which operator was chosen
if (Operator == '+') {
         return num1 + num2; //Addition
    }

    else if (Operator =='-'){
        return num1 - num2; //Subtraction
    }

    else if (Operator =='x'){
        return num1 * num2; //Multiplication
    }

    else if (Operator =='/'){
        return num1 / num2; //Division
    }

    else if (Operator =='%'){
        return num1 % num2; //Modulation
    }

    return 0;
}



//The main function is the application of the of the math function. It showcases all the functionality of the math function.

int main()

{

    int num1;
    int num2;
    char Operator;
    
    printf("Enter the desired operation: "); 
    scanf("%c" , &Operator); //Scan and assign to operator variable

    printf("Enter first number: ");
    scanf("%d" , &num1);

    printf("Enter second number: ");
    scanf("%d" , &num2);

    
    //User inputs are then put in math function
    int a = math(num1,num2,Operator); 

    printf("Result: %d", a);

    return 0;
}