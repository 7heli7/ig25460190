#include <iostream>	
#include <fstream>
using namespace std;

int main()
{ 
    fstream fails;  
    int a;
    fails.open("dati3b.txt", ios::in); 
    fails >> a;
    while (fails.good())
    {
        cout << a << endl;
        fails >> a;
    }
    fails.close();
  
    system("pause");
    return 0;
}
