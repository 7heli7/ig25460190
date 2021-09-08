#include <iostream>	
#include <fstream>
using namespace std;

int main()
{ 
    fstream fails;  
    int a;
    fails.open("dati3a.txt", ios::in); 
    fails >> a;
    while (!fails.eof())
    {
        cout << a << endl;
        fails >> a;
        system("pause");
    }
    fails.close();
  
    system("pause");
    return 0;
}
