#include <iostream>
using namespace std;
int main()
{
    int i=5;
    int &ref_i=i;
    
    cout << "i:" << i << endl;
    cout << "ref_i:" << ref_i << endl << endl;
    
    cout << "i mainigas adrese:" << &i << endl;
    cout << "ref_i saturs:" << &ref_i << endl << endl;
    
    system("pause");
    return 0;
}
