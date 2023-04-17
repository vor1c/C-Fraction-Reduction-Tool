# Fraction Reduction Tool
This is a simple C program that provides functions to calculate the greatest common divisor (gcd) of two integers and reduce a given fraction to its lowest terms using the gcd.

# How to Use
To use this program, simply include the reduce() and ggt() functions in your own C program, and call them as needed.

The reduce() function takes two integer pointers as arguments representing the numerator and denominator of a fraction. It reduces the fraction to its lowest terms by calculating the gcd using the ggt() function, and dividing both the numerator and denominator by the gcd.

The ggt() function takes two integers as arguments, and returns their gcd using the Euclidean algorithm.

# Example
Here is an example usage of the reduce() and ggt() functions:

#include <stdio.h>

void reduce(int*,int*);
int ggt(int,int);

int main() {
    int n = 24;
    int d = 12;

    printf("Vor der Kurzung: %d/%d\n", n, d);

    reduce(&n, &d);

    printf("Nach der Kurzung: %d/%d\n", n, d);

    return 0;
}

# This program will output:

Vor der Kurzung: 24/12
Nach der Kurzung: 2/1

In this example, the reduce() function is used to reduce the fraction 24/12 to its lowest terms, which is 2/1.
