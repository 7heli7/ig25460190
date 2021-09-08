#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   int t;
   fstream fails; 
   
   fails.open("intmas.dat", ios::in | ios::binary);  
   fails.read ((char*)&t, sizeof(int));
   while(!fails.eof())
   {      
       cout << t << " " << endl;
       fails.read ((char*)&t, sizeof(int));
   }   
   cout << endl;
   fails.close();
   system("Pause");
   return 0;
}
