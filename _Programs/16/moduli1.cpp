#include <iostream>
using namespace std;

float Reiz (float a, float b)
{return a*b;}

float Dal (float a, float b)
{return a/b;}

float Sum (float a, float b)
{return a+b;}

float Atn (float a, float b)
{return a-b;}

int main()
{
    int x=20, y=2;
    cout << Reiz(x,y) << endl;
    cout << Dal(x,y) << endl;
    cout << Sum(x,y) << endl;
    cout << Atn(x,y) << endl;
    system("pause");
    return 0;
}
