/*
Program: Print Character Pyramid

Output:
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/

#include <stdio.h>

int main()
{
    int i, j, rows = 5;

    // Loop through rows
    for(i = 1; i <= rows; i++)
    {
        // Print spaces
        for(j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        // Print ascending characters
        for(j = 0; j < i; j++)
        {
            printf("%c", 'A' + j);
        }
        // Print descending characters
        for(j = i - 2; j >= 0; j--)
        {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}