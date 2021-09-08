#include <iostream>
#include <fstream>
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
   
   fails.open("credit.dat", ios::out | ios::binary);  
   cout << "Enter account number (1 to 100, 0 to end input)" << endl;
   cin >> client.accNum;
   while (client.accNum != 0)
   {
      cout << "Enter lastname, firstname, balance" << endl;
      cin >> client.Sur >> client.Name >> client.balance;
      fails.seekp((client.accNum-1) * sizeof(clientData), ios::beg);
      fails.write((char*)&client, sizeof(clientData));
      cout << "Enter account number" << endl;
      cin >> client.accNum;
   }
   
   fails.close();
   system("Pause");
   return 0;
}
