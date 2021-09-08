#include <iostream>	
#include <fstream>
using namespace std;

int main()
{ 
    fstream fails_no("original_1.txt", ios::in);
    fstream fails_uz("copy_1.txt", ios::out);
    char symbol;
    fails_no.get(symbol);
    while (fails_no)
    {
        fails_uz.put(symbol);
        fails_no.get(symbol);
    };
    fails_uz.close();
    fails_no.close();
  
    system("pause");
    return 0;
}
