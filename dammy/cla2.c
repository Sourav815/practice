#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, count;
    a = atoi(argv[1]);
    if (argc == 2)
    {
        count = 0;
        for (int i = 1; i <= a ; i++)
        {
            if (a % i == 0)
            {
                count++;
            }
        }
        if (count != 2)
        {
            printf("\nThis is not a prime number.\n");
        }
        else if (count == 2)
        {
            printf("\nThis is  a prime number.\n");
        }
    }
    else
    {
        printf("oh! Something went worng.");
    }

    return 0;
}
