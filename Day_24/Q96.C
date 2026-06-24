#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    int visited[256] = {0};

    // Traverse string
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (visited[(int)str[i]] == 0)
        {
            printf("%c", str[i]);
            visited[(int)str[i]] = 1;
        }
    }

    return 0;
}