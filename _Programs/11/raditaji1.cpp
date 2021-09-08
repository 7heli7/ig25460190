#include <iostream>
using namespace std;

int main()
{      
   int z = 10;
   int *x; // norada uz neinicializetu atminas apgabalu ar izmeru int

   x = &z; //*x inicializacija, atminas pagabala tagad 10
   cout << *x << endl;
   
   system("pause");
   return 0;
}
