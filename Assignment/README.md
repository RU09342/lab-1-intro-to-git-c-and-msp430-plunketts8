# Lab 1: Intro to Git and MSP430
The goal of this lab was to be introduced to Github as well as the MSP430. This was to be accomplished by 
* Create a math function that would have the ability to add, subtract, multiply, divide, and modulus two integers.
* Create this README file
*Get started running code on the MSP430

The math function was written in Notepad++ and tested in an online C compiler.

## Function
The math function takes in two integers as well as one char. The char will determine which operation is applied to the two integers.
*For addition use: +
*For subtraction use: -
*For multiplication use: x
*For division use: /
*For modulus use: %

The function itself is a series of if/else statements that determine which operand was selected and then performs the desired operation.


## Main Function
Included in the math.c file is a main function that showcases the ability of the math function. The user is asked to input the two integers and operand and those three variables are put into the math function.

### Header Files
The header file was provided for us and gives the outline of what the math function should accomplish.