#include <iostream>
#include <bitset>
using namespace std;
#define max(a,b)a>b?a:b;
bitset<10000> bit[10];
int main()
{
    int n,m,i,j,k;
    while(cin>>n>>m){
        if(n==0&&m==0)return 0;
        int cnt=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                bool a;
                cin>>a;bit[i][j]=a;
            }
        }

            int count_n=1<<n;
        for(i=0;i<count_n;i++){
                int count_=0;
            for(j=0;j<n;j++){
                if(i&(1<<j)){
                bit[j].flip();
                }
            }

            for(j=0;j<m;j++){
                int count_m=0,count_mm;
                for(k=0;k<n;k++){
                    if(bit[k][j]){count_m++;}
                }
                count_mm=max(count_m,n-count_m);
                count_+=count_mm;
            }
            cnt=max(cnt,count_);
            for(j=0;j<n;j++){
                if(i&(1<<j)){
                bit[j].flip();
                }
            }
        }
        for(i=0;i<n;i++){
            bit[i].reset();
        }
        cout<<cnt<<endl;
    }
    return 0;
}