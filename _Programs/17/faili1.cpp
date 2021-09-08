#include <iostream>	
#include <fstream>
using namespace std;

int main()
{ 
    fstream fails;  
    int a, b, sum;
    fails.open("dati1.txt", ios::in); 
    fails >> a >> b; 
    fails.close();
    sum = a + b;
    fails.open("result1.txt", ios::out);   
    fails << sum; 
    fails.close();
  
    //system("pause");
    return 0;
}

