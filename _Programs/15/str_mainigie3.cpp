#include <iostream>
using namespace std;

typedef int Fun_t(int x);

void Print(Fun_t f, int n)
{cout << f(n) << endl;}

int Square(int i)
{return i*i;}

int Cube(int i)
{return i*i*i;}

int main()
{
    Print(Square, 5);
    Print(Cube, 5);
    system("pause");
    return 0;
}
