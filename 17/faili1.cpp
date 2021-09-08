#include <iostream>	
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{ 
    time_t t;
    srand((unsigned) time(&t));
    
    fstream f;  
    f.open("uzd_1_1.txt", ios::in); 
    
    for (int i=0; i<100; i++)
        //fails >> ((int)(rand()%101 - 50));
        f >> 5 >> endl;
        
    fails.close();

    system("pause");
    return 0;
}

