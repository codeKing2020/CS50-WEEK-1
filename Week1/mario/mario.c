#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Welcomes user to program
    printf("Hello! It's a mea, Mario!\n");
    printf("Welcome to Mario Brick Builder!\n");
    
    // Prompts the user to enter a value
    int blocknum;
    do 
    {
        blocknum = get_int("Enter an integer between 1 and 8! ");
    }
    while (blocknum <= 0 || blocknum > 8);
    
    // Build based on what the user gave us
     for (int i = 0; i < blocknum; i++)
    {
        for (int j = blocknum; j > i + 1; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
      
        printf("\n");
    } 
}