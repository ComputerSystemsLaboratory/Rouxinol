#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define NMAX 105
#define WMAX 10005
#define DIAGONAL 1
#define TOP 0

struct Item
{
    int value,weight;
};
int N,W;
Item items[NMAX+1];
int C[NMAX+1][WMAX+1], G[NMAX+1][WMAX+1];
void knapsack()
{
    for(int w=0; w<=W; w++)
    {
        C[0][w] = 0;
        G[0][w] = DIAGONAL;
    }
    for(int i=1; i<=N; i++)
        C[i][0] = 0;
    for(int i=1; i<=N; i++)
    {
        for(int w=1; w<=W; w++)
        {
            if(items[i].value+C[i-1][w-items[i].weight] > C[i-1][w] && items[i].weight <= w)
            {
                C[i][w] = items[i].value+C[i-1][w-items[i].weight];
                G[i][w] = DIAGONAL;
            }
            else
            {
                C[i][w] = C[i-1][w];
                G[i][w] = TOP;
            }
        }
    }
}
int main()
{
    cin >> N >> W;
    for(int i=1; i<=N; i++)
        cin >> items[i].value >> items[i].weight;
    knapsack();
    cout << C[N][W] << endl;
    return 0;
}