#include<iostream>
using namespace std;
#define MAX 10000

int p(int i)
{
    return i/2;
}

int l(int i)
{
    return 2*i;
}

int r(int i)
{
    return 2*i+1;
}

int main()
{
    int H , i, A[MAX+1];
    cin >> H;
    for(i=1;i<=H;i++)
    {
        cin >> A[i];
    }
    for(i=1;i<=H;i++)
    {
        cout << "node " << i << ": key = "<<A[i]<<", ";
        if(p(i)>=1) cout << "parent key = " << A[p(i)] <<", ";
        if(l(i)<=H) cout << "left key = " << A[l(i)] << ", ";
        if(r(i)<=H) cout << "right key = " << A[r(i)] << ", ";
        cout << endl;
    }
}

