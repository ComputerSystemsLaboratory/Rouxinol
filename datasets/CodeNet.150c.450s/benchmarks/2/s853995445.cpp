#include <iostream>
#include <algorithm>
using namespace std;

int A[100005];
void partition(int p, int r)
{
    int x = A[r];
    int i = p-1;
    for(int j=p; j<r; j++)
    {
        if(A[j] <= x)
        {
            i++;
            swap(A[i],A[j]);

        }
    }
    swap(A[i+1],A[r]);
    for(int k=0; k<r; k++)
    {
        if(k == i+1)
        {
            cout << "[" << A[k] << "]" << " ";
        }
        else
            cout << A[k] << " ";
    }
    cout << A[r] << endl;
}
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> A[i];
    partition(0, n-1);

    return 0;
}