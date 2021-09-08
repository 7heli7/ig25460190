#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cout << "Ievadiet Damas X koordinati: " << endl;
    cin >> x1;
    cout << "Ievadiet Damas Y koordinati: " << endl;
    cin >> y1;
    cout << "Ievadiet pretinieka fig. pozicijas X koordinati: " << endl;
    cin >> x2;
    cout << "Ievadiet pretinieka fig. pozicijas Y koordinati: " << endl;
    cin >> y2;
    
    if ( (x1==x2) || (y1==y2) || abs(x1-x2)==abs(y1-y2) )
        cout << "Apdraud" << endl;
    else
        cout << "Neapdraud" << endl;

    system("pause");
}
