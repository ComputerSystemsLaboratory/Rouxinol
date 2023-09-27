#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<map>
#include<algorithm>
#include<set>
#include <stdexcept>
#define rep(i,N) for(int i=0;i<(N);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;
const long long MOD = 1e9 + 7;
const long long INF = 1e12;
const int dx[]={1,0,-1,0,1,-1,-1,1};
const int dy[]={0,1,0,-1,1,1,-1,-1};
int ceil(int a,int b){
    return (a+b-1)/b;
}
int main(void){
    while(1){
        int h,w;
        cin>>h>>w;
        int t=h*h+w*w;
        if(h==0 && w==0) break;
        int min1=1000000;
        int hn=100000,wn=1000000;
        int sum = h*h+w*w;
        for(int i=1;i<=1000;i++){
            for(int j=i+1;j<=1000;j++){
                int t=i*i+j*j;
                if(t<sum)continue;
                if(t==sum&&i<=h)continue;
                if(t-sum<min1){
                    min1=t-sum;
                    hn=i;
                    wn=j;
                }
                else if(t-sum==0){
                    if(hn>i){
                        hn=i;
                        wn=j;
                        min1=0;
                    }
                }
            }
        }
        cout<<hn<<" "<<wn<<endl;
    }
    return 0;

}
