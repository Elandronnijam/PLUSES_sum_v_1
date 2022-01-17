//This program counts the sum of the numbers until  u enter the "0"

#include <iostream>

int cin (int a)
{
    std :: cout << "Enter " << a << " number: ";
    int number = 0;
    std :: cin >> number;
    return number;
}

int sum (int a, int b)
{
    return a + b;
}

int main()
{
    int A = 666, B = 0;
    for (int i = 1; A != 0; i++)
    {
        A = cin (i);
        B = sum (B, A);
    }
    std :: cout << "The sum is " << B;
    return 0;
}