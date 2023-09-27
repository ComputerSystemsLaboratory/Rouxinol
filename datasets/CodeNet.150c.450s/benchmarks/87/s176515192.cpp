#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define each(itr,c) for(__typeof(c.begin()) itr=c.begin(); itr!=c.end(); ++itr)
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define fi first
#define se second

typedef vector<int> vi;
typedef vector<vi> vvi;

int main()
{
    int h;
    while(cin >>h,h)
    {
        vvi f(h,vi(5));
        for(int i=h-1; i>=0; --i)rep(j,5) cin >>f[i][j];

        int ans=0;
        int l[6]={0,0,1,0,1,2};
        int r[6]={4,3,4,2,3,4};

        while(1)
        {
            int del=0;

            //delete
            rep(i,h)
            {
                rep(j,6)
                {
                    int num=f[i][l[j]];
                    if(num==0) continue;

                    bool valid=true;
                    for(int k=l[j]+1; k<=r[j]; ++k)
                    {
                        if(f[i][k]!=num) valid=false;
                    }

                    if(valid)
                    {
                        ans+=num*(r[j]-l[j]+1);
                        for(int k=l[j]; k<=r[j]; ++k)
                            f[i][k]=0;
                        ++del;
                    }
                }
            }

            if(!del) break;

            //fall
            rep(i,5)
            {
                //i-th column
                rep(j,h)
                {
                    bool all0=true;
                    for(int k=j; k<h; ++k)
                    {
                        if(f[k][i]!=0) all0=false;
                    }
                    if(all0) continue;

                    //printf("i,j %d,%d\n", i,j);
                    if(f[j][i]==0)
                    {
                        for(int k=j+1; k<h; ++k)
                            f[k-1][i]=f[k][i];
                        f[h-1][i]=0;
                        --j;
                    }
                }
            }

        }

        printf("%d\n",ans);
    }
    return 0;
}