#include <iostream>
#include <string>
using namespace std;

union izglitiba
{  
    char D_nos[30]; // 30 baiti
    int gadi;		// 4 baiti
};  

int main()
{
    izglitiba izglitibas[5];
    
    strcpy (izglitibas[0].D_nos, "Augstaka izglitiba");
    izglitibas[1].gadi = 2;
    strcpy (izglitibas[2].D_nos, "Augstaka izglitiba");
    izglitibas[3].gadi = 3;
    izglitibas[4].gadi = 1;
    strcpy (izglitibas[4].D_nos, "Augstaka izglitiba");
    
    for (int i=0; i<5; i++)
        cout << i << ": " << izglitibas[i].D_nos << " " << izglitibas[i].gadi << endl;
            
    system("pause");
    return 0;
}
