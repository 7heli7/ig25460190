#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    const int N=3,M=3;
    double a[N][M];
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
                a[i][j] = rand()%10;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
                cout << a[i][j] << " ";
        cout << endl;
    }
system("pause");
return 0;
}
