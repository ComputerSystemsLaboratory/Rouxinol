#include<iostream>
using namespace std;
int w[1001];
int v[1001];
int c;
int arr[10001][10001];
int max1(int a, int b)
{

    return (a > b) ? a : b;
}
void print(int n1, int n2)
{
    for(int i = 1; i <= n1; i++)
    {
        for(int j = 1; j <= n2; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{

    int n;
    cin >> n;
    cin >> c;
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
        cin >> w[i];
    }
    /*for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }*/
  //  cin >> c;
    for(int i = 0; i <= c; i++)
    {
            arr[0][i] = 0;
    }
    for(int i = 0; i <= n; i++)
    {
            arr[i][0] = 0;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= c; j++ )
        {
            if(j >= w[i]) {
                arr[i][j] = max1(v[i]+arr[i-1][j-w[i]],arr[i-1][j]);
            }
            else
            {
                arr[i][j] = arr[i-1][j];
            }
        }
    }
  //  print(n,c);
    cout << arr[n][c] << endl;
    return 0;
}