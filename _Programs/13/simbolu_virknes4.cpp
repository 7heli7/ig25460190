#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "Hello";
    string s2 = "World";
    string s = s1 + "," + s2 + "!";
    cout << s << endl;
    for(int i=0; i < s.length(); i++)
        cout << s[i];
    cout << endl;
    
    system("pause");
    return 0;
}
