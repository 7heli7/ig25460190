#include <iostream>
using namespace std;

void swap(int a, int b) 
{
    cout << "a adrese: " << &a << "   b adrese: " << &b << endl;
    int temp = a;
    a = b;
    b = temp;
}

int main()
{  
    int m=5, n=8;
    cout << "m adrese: " << &m << "   n adrese: " << &n << endl;
    swap(m,n);
    cout << "m: " << m << endl;
    cout << "n: " << n << endl;
    
    system("pause");
    return 0;
}
