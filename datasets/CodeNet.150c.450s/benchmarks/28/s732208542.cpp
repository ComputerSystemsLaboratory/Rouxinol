#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vint;
#define loop(i,n) for(int i=0;i<n;++i)
#define INF 10000000000

int main(){
    int n,k;
    cin >> n >> k;
    vint w(n);
    loop(i,n){
        cin >> w[i];
    }

    int l=0,r=INF;
    while(r-l>1){
        int m=(l+r)/2;

        //最大積載量を調べる。
        int count=1,now=0;
        loop(i,n){
            if(w[i]>m){
                count=INF;
                break;
            }
            now+=w[i];
            if(now>m){
                ++count;
                now=w[i];
            }
        }

        if(count<=k){
            r=m;
        }else{
            l=m;
        }
    }
    cout << r << endl;
}
