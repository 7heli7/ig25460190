#include <iostream>
using namespace std;

int main ()
{
    int n ;
    cout << "Input n: ";
    cin >> n;

    int i = 1;
    while(i*i <= n)
    {
        cout << (i*i) << " ";
        ++i;
    }

    cout << endl;
    system ("pause");
    return 0;
}
