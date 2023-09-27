#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int com, n, q, x, y, p, t, i, j;
    long long s;
    int a[100000], b[100000];
    j = 0;
    cin >> n >> q;
    for(i = 0; i < n; i++){
            a[i] = 0;
    }
    for(i = 0; i < q; i++){
        cin >> com >> x >> y;
        if(com==0){
            a[x]+=y;
        }
        if(com==1){
            s=0;
            for(p=x;p<y+1;p++){
                    s+=a[p];
            }
            if(com==1){
                j++;
                b[j]=s;
            }
        }
    }
    for(i=1;i<j+1;i++){
            cout<<b[i]<<endl;
    }
    return 0;
}