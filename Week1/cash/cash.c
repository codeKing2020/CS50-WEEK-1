#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    //Welcome to greedy algorithm program! (AKA G.A.P)
    printf("Welcome to greedy algorithm program! (AKA G.A.P)\n");
    
    // Prompts cashier to input ammount owed
    float owed;
    
    do
    {
        owed = get_float("How much is owed? ");
    }
    while (owed <= 0.00);
   
    // Changes cents and dollars to just cents
    int cents = round(owed * 100);
    
    // Declare cents
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    int count = 0;
    
    // Does the math
    while (cents > 0)
    {
        if (cents - quarter > -1)
        {
            cents = cents - quarter;
            count++;
        }
        else if (cents - dime > -1)
        {
            cents = cents - dime;
            count++;
        }
        else if (cents - nickel > -1)
        {
            cents = cents - nickel;
            count++;
        }
        else if (cents - penny > -1)
        {
            cents = cents - penny;
            count++;
        }
        else
        {
            printf("I don't know bro, try it yourself!");
        }
    }
    
    //Print out work
    printf("%i\n", count);
}