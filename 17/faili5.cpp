#include <iostream>	
#include <fstream>
using namespace std;

int main()
{ 
    string s;
    fstream fails_no("original_1.txt", ios::in);

    getline (fails_no, s);
    while (fails_no)
    {
        cout << s << endl;
        getline (fails_no, s);
    };
    fails_no.close ();
  
    system("pause");
    return 0;
}
