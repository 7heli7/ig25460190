#include <iostream>
using namespace std;

int main ()
{
    int n;

    cout << "Input n: ";
    cin >> n;

    int sum = 0;

    for ( int i = 1; i <= n; i = i + 1)
        sum = sum + i ;
        
    cout << "By for sum: " << sum << endl;
    cout << "By formula n*(n+1)/2 sum: " << n*(n+1)/2 << endl;
    
    system ("pause");
    return 0;
}
