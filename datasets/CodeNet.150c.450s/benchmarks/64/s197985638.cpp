#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> A;

bool solve(int i,int m)
{
    if(!m)
    {
        return true;
    }
    if(i>=A.size()||m<0)
    {
        return false;
    }
    return solve(i+1,m)||solve(i+1,m-A[i]);
}
int main()
{
    int q,m,i;
    cin>>n;
    A.resize(n);
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&m);
        cout << ( solve(0,m) ? "yes" : "no" ) << endl;
    }

	return 0;
}

