#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   int t;
   fstream fails; 
   
   fails.open("intmas.dat", ios::in | ios::binary);  
   fails.read((char*)&t, sizeof(int));
   for (int i=0; i<5; i++)
   {      
       cout << t << endl;
       fails.read((char*)&t, sizeof(int));
   }   
   
   cout << "Biidam atpakal uz 3" << endl;
   fails.seekg(-3*sizeof(int), ios::cur);
   
   fails.read((char*)&t, sizeof(int));
   while(!fails.eof())
   {      
       cout << t << endl;
       fails.read((char*)&t, sizeof(int));
   }   
   fails.close();
   
   system("Pause");
   return 0;
}
