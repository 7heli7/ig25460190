#include <iostream>	
#include <fstream>
using namespace std;

int main()
{ 
    fstream fails;  
    int a=3, b=9, sum;
    fails.open("dati2.dat", ios::out | ios::binary); 
    fails << a << endl << b; 
    fails.close();
    fails.open("dati2.dat", ios::in | ios::binary);   
    fails >> a >> b; 
    sum = a + b;
    fails.close();
    cout << sum << endl;
  
    system("pause");
    return 0;
}

