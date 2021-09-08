#include <iostream >
using namespace std;

int main()
{
    int a, b;
    
    cout << "Ievadiet a:" << endl;
    cin >> a;
    cout << "Ievadiet b:" << endl;
    cin >> b;
 
    int temp = a;
    a = b;
    b = temp; 
    
    cout << "a=" << a << endl << "b=" << b << endl;
    
    system ("pause");
    return 0; 
}
