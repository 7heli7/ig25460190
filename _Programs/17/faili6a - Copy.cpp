#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   int n[10] = {1,2,3,44,5,6,77,8,9,10};
   fstream fails; 
   
   fails.open("intmas.dat", ios::out | ios::binary);  
   //for (int i=0; i<10; i++)
      fails.write((char*)&n, sizeof(int)*10);
   
   fails.close();
   system("Pause");
   return 0;
}
