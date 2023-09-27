#include <bits/stdc++.h>
#define d(a) cout << #a << " is " << a << endl
using namespace std;

bool state[10][10000],rflip[10];
int ccol,nr,nc,gmin;
char cc;

int main()
{
    while (scanf("%d%d",&nr,&nc)&&nr+nc) {
        gmin=10000000;
        for(int i=0;i<nr;i++)
        for(int c=0;c<nc;c++) {
            scanf(" %c",&cc);
            state[i][c]=cc-'0';
        }
        for(int btmsk=0;btmsk<1<<nr;btmsk++) {
            //d(btmsk);
            for(int i=0;i<nr;i++) rflip[i]=btmsk>>i&1;
            int ans=0;
            for(int c=0;c<nc;c++) {
                ccol=0;
                for(int i=0;i<nr;i++)
                    ccol+=state[i][c]^rflip[i];
                ans+=min(ccol,nr-ccol);
            }
            //d(ans);
            gmin=min(gmin,ans);
        }
        printf("%d\n",nr*nc-gmin);
    }
    return 0;
}

