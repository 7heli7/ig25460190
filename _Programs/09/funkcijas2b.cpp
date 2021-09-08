#include <iostream>
#include <cmath>
using namespace std;

double Square(double);
double Dist(double, double, double, double);

double Dist(double x1, double y1, double x2, double y2)
{
    return sqrt( Square(x1-x2) + Square(y1-y2) );
}

double Square(double x) 
{
    return x*x;
}

int main()
{  
    cout << Dist(3,0,0,4) << endl;
    
    system("pause");
    return 0;
}
