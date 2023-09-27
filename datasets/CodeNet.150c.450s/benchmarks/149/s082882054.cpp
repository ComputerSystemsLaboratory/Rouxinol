//  Teamsix

// Sifat Ansary

#include<stdio.h>
#include <cstring>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<stack>
#include<set>
#include<utility>
char a[9999999+99];
using namespace std;
int fact(int n)
{
    int i,k=1;

    for(i=1;i<=n;i++)
        k*=i;

    return k;
}

#define ll long long
#define MAX 10000000

int rep[100110];
int M = 0;
int find_rep(int x)
{
    if(rep[x]==x)
        return x;
    return /*rep[x]= */find_rep(rep[x]);
}

int x,y;
int main()
{

    int n,q,qq;

    cin>>n>>q;
    for(int i=0;i<n;i++)
        rep[i]=i;
    while(q--)
    {
        cin>>qq>>x>>y;
        if(qq==0)
        {
            int repu=find_rep(x);
            int repv=find_rep(y);

            rep[repu]=rep[repv];
          /*  for(int i=0;i<n;i++)
            {
                if(rep[i]==y)
                    rep[i]=x;
            }  */

        }
        else
        {
            if(find_rep(x)==find_rep(y))
            {
                cout<< "1"<<endl;
            }
            else
            {
                cout<< "0"<<endl;
                //rep[x]=x;
                //rep[y]=y;
            }


        }

    }



    return 0;
}