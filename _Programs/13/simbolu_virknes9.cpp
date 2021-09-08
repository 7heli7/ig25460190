#include <iostream>
#include <string>
using namespace std;

int main()
{
    string vardi[3] = {"pirmais", "otrais", "tresais"}; 
    for(int i=0; i < 3; i++)
        cout << vardi[i] << endl;
    cout << endl;
    cout << "Pirmie burti: " << vardi[0][0] << vardi[1][0] << vardi[2][0] << endl;
    
    system("pause");
    return 0;
}
