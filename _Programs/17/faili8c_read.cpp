#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct clientData{
   int accNum;
   char Sur[15];
   char Name[10];
   float balance;
};

int main(){

   int i;
   clientData client;
   fstream fails; 
   
   fails.open("credit.dat", ios::in | ios::binary);  
     
   cout << setw(10) << "Account" << setw(10) << "Surname"  << setw(10) << "Name" << setw(10) << "Ballance" << endl;
   fails.read((char*)&client, sizeof(clientData));
   while(fails)
   {      
       if (client.accNum !=0)
			cout << setw(10) << client.accNum << setw(10) << client.Sur << setw(10) << client.Name << setw(10) << client.balance << endl; 
       fails.read((char*)&client, sizeof(clientData));
   } 
   
   fails.close();
   system("Pause");
   return 0;
}
