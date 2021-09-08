#include <iostream>
using namespace std;

int glb_i = 42;

void Inc()
{
    ++glb_i;
}

void Dec()
{
    --glb_i;
}

int main()
{
    cout << "Initial value:" << glb_i << endl;//42
    Inc();
    cout << "After Inc():" << glb_i << endl;//43
    Dec();
    cout << "After Dec():" << glb_i << endl;//42
    system("pause");
    return 0;
}
