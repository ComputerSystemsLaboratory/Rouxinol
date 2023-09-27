#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    //ios::sync_with_stdio(false);
    int n,i,j,k,l,c=0;
    while(cin >> n)
    {
        for(i=0; i<10; i++)
            for(j=0; j<10; j++)
                for(k=0; k<10; k++)
                    for(l=0; l<10; l++)
                        if((i+j+k+l)==n)
                            c++;
        cout << c << endl;
        c=0;
    }
    return 0;
}