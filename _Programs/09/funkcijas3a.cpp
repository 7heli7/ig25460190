#include <iostream>
using namespace std;

void swap(int a, int b) 
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{  
    int m=5, n=8;
    swap(m,n);
    cout << "m: " << m << endl;
    cout << "n: " << n << endl;
    
    system("pause");
    return 0;
}
