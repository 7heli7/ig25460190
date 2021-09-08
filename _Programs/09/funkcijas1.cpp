#include <iostream>
using namespace std;

int Min(int a,int b)
{
    if (a<b) return a;
    else return b;
}

double Cube(double a)
{
    return a*a*a;
}

int main()
{
    cout << Min(5,8) << endl;
    
    cout << "Input number: " << endl;
    double x;
    cin >> x;
    double rez = Cube(x);
    cout << rez << endl;
    
    system("pause");
    return 0;
}
