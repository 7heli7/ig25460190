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


void create()
{
   int i;
   fstream fails; 
   clientData blankClient = {0, "", "", 0.0};
   
   fails.open("credit.dat", ios::out | ios::binary);  
   for (i=1; i<=100; i++)
      fails.write((char*)&blankClient, sizeof(clientData));
   
   fails.close();
}


void fill()
{
   int i;
   clientData client;
   fstream fails; 
   
   fails.open("credit.dat", ios::in | ios::out | ios::binary);  
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
}


void read()
{
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
}

int main()
{   
    int x;
    while (x!=4)
    {
    cout << "Operacija?: " << endl;
    cout << "1 - Izveidot no jauna" << endl;
    cout << "2 - Aizpildit" << endl;
    cout << "3 - Izvadit visu" << endl;
    cout << "4 - Iziet" << endl;
    cin >> x;
          
    switch (x)
    {
        case 1:
                create();
                break;
        case 2:
                fill();
                break;
        case 3:
                read();
                break;
        case 4:
                break;
        default:
                cout << "Illegal operation" << endl;
                break;
    }
    
    }
    
   system("Pause");
   return 0;
}
