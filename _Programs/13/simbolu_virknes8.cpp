#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "World!";
    cout << s1 << endl;
    s1.insert(0, "Hello, ");
    cout << s1 << endl;
    system("pause");
    return 0;
}
