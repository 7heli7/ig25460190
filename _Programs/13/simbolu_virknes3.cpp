#include <iostream>
using namespace std;

int main(){
    char str[13] = "Hello, world";
    cout << str << endl;
    for(int i=0; i<12; i++)
        cout << str[i];
    cout << endl;
    
    system("pause");
    return 0;
}
