/* Write a program to create three functions , static functions , inline function and constant function,
static functions will calculate factorial of number by making result variable as static member and initilize with 1,
inline function will print hello message,
constant function will create constant variable pi=3.17
and calculate the area of the circle*/

#include <iostream>

using namespace std;

class Factorial
{
public:
    int n;
    cout << "Enter The Size of Factorial:";
    cin >> n;
    static int fact(int a)
    {
        int i = 1;
        int a = n;
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        cout << "Factorial: " << fact << endl;
    }
};

class inlinefunc
{
    inline msg()
    {
        std::cout << "Hello User!" << std::endl;
    }
};

class area
{
    int rad;
    cout << "Enter The Radius: " << ;
    cin >> rad;
    int rad(int b)
    {
        float pi = 3.14;
        int area = 0;
        int b = rad;
        area = pi * b * b;
    }
};

int main()
{
}
