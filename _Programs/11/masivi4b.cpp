#include <iostream>
#include <ctime>
using namespace std;

void Init_Array (int *a, int N, int M)
{
    for(int i=0; i<N*M; i++)
        *(a+i) = rand()%10;
}

void Print_Array(int *a, int N, int M)
{
    for(int i=0; i<N*M; i++)
    {
        cout << *(a+i) << " ";
        if ((i+1)%M==0) cout << endl;
    }
    cout << endl;
}

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    const int N=3;
    const int M=4;
    int a[N][M];
    Init_Array(*a,N,M);
    Print_Array(*a,N,M);
    system("pause");
    return 0;
}
