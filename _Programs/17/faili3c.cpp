#include <iostream>	
#include <fstream>
using namespace std;

int main()
{ 
    fstream fails;  
    int a;
    fails.open("dati3c.txt", ios::in); 
    fails >> a;
    while (fails)
    {
        cout << a << endl;
        fails >> a;
        while (!fails.good() && !fails.eof())
        {
            fails.clear ();
            fails.ignore (1, ' ');
            fails >> a; 
        }
    }
    fails.close();
  
    system("pause");
    return 0;
}
