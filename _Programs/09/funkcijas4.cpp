#include <iostream>
using namespace std;

void inc(int &a, const int b) 
{
    //b = b+2; // Te bus KLUDA!!!
    a = a+b;
}

int main()
{  
    int m=5, n=8;
    inc(m,n);
    cout << "m: " << m << endl;
    
    system("pause");
    return 0;
}
