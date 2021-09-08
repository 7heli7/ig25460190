#include <iostream>
using namespace std;

int main(){
    char str[] = "Hello, world";
    cout << str << endl;
    for(int i=0; str[i] != '\0'; i++)
        cout << str[i];
    cout << endl;
    
    system("pause");
    return 0;
}
