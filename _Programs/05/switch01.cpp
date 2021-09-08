#include <iostream>
using namespace std;

int main()
{
    double a, b;

    cout << "Input a: ";
    cin >> a;

    cout << "Input b: ";
    cin >> b;
    
    int x;
    cout << "Choose one of math operations: 1(+), 2(-), 3(*), 4(/)." << endl;
    cin >> x;
    
    switch (x)
    {
        case 1:
                cout << a+b << endl;
                break;
        case 2:
                cout << a-b << endl;
                break;
        case 3:
                cout << a*b << endl;
                break;
        case 4:
                cout << a/b << endl;
                break;
        default:
                cout << "Illegal operation" << endl;
                break;
    }
    system ("pause");
    return 0;
}
