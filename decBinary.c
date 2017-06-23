/*****************************************************************
* decBinary.c
*
* A program to convert a whole number (number in base 10)
* to binary.
*
* Author: Richard T. Ahuakli
*
* Email: tsaatey@gmail.com
*
* Index Num: 5131040294
*
*****************************************************************/

//Include all necessary libraries
#include <stdio.h>

int main()
{
    //Variable definitions
    int n;   //n is a positive integer.
    int digits[100];   //An array to store the figures being converted.
    int counter = 0;
    
    //Accept user input. User cannot enter a non-positive integer
    do
    {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    }
    while (n < 1);
    
    //Do when n is larger than zero, go ahead and process the input.
    while (n >= 1)
    {
        counter++;
        digits[counter] = n%2;
        n = n/2;  //Update the value of n.
    }
    
    //Display converted figures to the user.
    for (int j = counter; j > 0; j--)
    {
        printf("%d", digits[j]);
    }
    
    //Print new line.   
    printf("\n");
    
    return 0;
}
