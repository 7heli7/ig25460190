#include <iostream>
#include <ctime>
using namespace std;

void Init_Array (double a[], int N)
{
    for(int i=0; i<N; i++)
        a[i] = rand()%10;
}

void Print_Array(double a[], int N)
{
    for(int i=0; i<N; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    const int N=10;
    double a[N];
    Init_Array(a,N);
    Print_Array(a,N);
    system("pause");
    return 0;
}
