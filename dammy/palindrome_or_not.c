#include <stdio.h>
int reverse(int n, int rem);
int main()
{
    int n, result;
    printf("Enter a number :");
    scanf("%d", &n);
    result = reverse(n, 0);
    if (n == result)
        printf("Number is a palindrome.");
    else
        printf("Number is not palindrome.");
        return 0;
}
int reverse(int n, int rem)
{
    if (n == 0)
        return rem;
    else
        return reverse(n / 10, rem * 10 + (n % 10));
}