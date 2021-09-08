#include <iostream>
#include <ctime>
using namespace std;

int main() 
{  
    time_t t;
    srand((unsigned) time(&t));
    
    for(long i=0; i<10; i++) 
        cout << rand() % 100<< endl; 

   system("pause");
   return 0;
}
