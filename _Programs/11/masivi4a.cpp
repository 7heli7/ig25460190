#include <iostream>
#include <ctime>
using namespace std;

void Init_Array (double a[][4], int N)
{
    for(int i=0; i<N; i++)
        for(int j=0; j<4; j++)
                a[i][j] = rand()%10;
}

void Print_Array(double a[][4], int N)
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<4; j++)
                cout << a[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    const int N=3;
    const int M=4;
    double a[N][M];
    Init_Array(a,N);
    Print_Array(a,N);
    system("pause");
    return 0;
}
