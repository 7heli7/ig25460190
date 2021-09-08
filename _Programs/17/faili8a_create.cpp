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
   clientData blankClient = {0, "", "", 0.0};
   fstream fails; 
   
   fails.open("credit.dat", ios::out | ios::binary);  
   for (i=1; i<=100; i++)
      fails.write((char*)&blankClient, sizeof(clientData));
   
   fails.close();
   system("Pause");
   return 0;
}
