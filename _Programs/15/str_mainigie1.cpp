#include <iostream>
#include <string>
using namespace std;

struct cilveks
{
    char name[25];
    int age;
};

int main()
{
    cilveks cilveki[5];
    
    for (int i=0; i<5; i++)
    {
        cout << "Ievadiet cilveka vardu un vecumu: " << endl;
        cin >> cilveki[i].name >> cilveki[i].age;
    }
    
    for (int i=0; i<5; i++)
        cout << cilveki[i].name << " " << cilveki[i].age << endl;
            
    system("pause");
    return 0;
}
