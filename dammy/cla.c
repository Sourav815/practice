#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a;
    a = atoi(argv[1]);
    if (argc == 2)
    {
        if (a % 2 == 0)
        {
            printf("This is even number.");
        }
        else
        {
            printf("This is odd number.");
        }
    }
    else
    {
        printf("oh! somthing went worng.");
    }
    return 0;
}
