#include <iostream>
using namespace std;

int main()
{
    int sum=0, n;

    do
    {
        cout << "Input n: ";
        cin >> n;
        sum += n;
    }
    while(n!=0);

    cout << "Sum: " << sum << endl;
    system ("pause");
    return 0 ;
}
