#include <iostream>
using namespace std;

int counter ()
{
    static int cnt=0;
    cnt++;
    return cnt;
};

int main ()
{
    for (int i=0; i<5; i++)
        cout << counter() << endl;
    system("pause");
    return 0;
}
