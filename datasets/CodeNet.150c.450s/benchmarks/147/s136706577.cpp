#include <iostream>
using namespace std;
const int Size = 10005;
int Arr[Size];
int main()
{
    int N, F = 0, maxx = 0; cin >> N;
    while (F <= N){
        maxx++;
        F = (maxx*maxx) + (2*maxx) + 3;
    }
    for (int i = 1; i < maxx; i++){
        for (int j = 1; j < maxx ; j++){
            for (int k = 1; k < maxx; k++){
                F = (i*i)+(j*j)+(k*k)+(i*j)+(j*k)+(i*k);
                if (F <= N) Arr[F]++;
            }
        }
    }
    for (int i = 1; i <= N; i++)
        cout << Arr[i] << endl;
}
