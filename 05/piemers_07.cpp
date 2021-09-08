#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cout << "Ievadiet 1.laucina X koordinati: " << endl;
    cin >> x1;
    cout << "Ievadiet 1.laucina Y koordinati: " << endl;
    cin >> y1;
    cout << "Ievadiet 2.laucina X koordinati: " << endl;
    cin >> x2;
    cout << "Ievadiet 2.laucina Y koordinati: " << endl;
    cin >> y2;
    
    if ( ((x1-x2) + (y1-y2)) % 2 == 0)
        cout << "Vienadas" << endl;
    else
        cout << "Nav vienadas" << endl;

    system("pause");
}
