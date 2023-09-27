#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
int main(void){
    int n,r,p;
    while(cin>>n>>r,n){
        valarray<int> mayor(0,n);
        p=r;
        rep(i,1000000){
            if(p==0){
                p+=mayor[0]; mayor[0]=0;
            }else{
                p--;mayor[0]++;
                if(mayor[0]==r){
                    cout<<i%n<<endl;
                    break;
                }
            }
            mayor=mayor.cshift(1);
        }
    }
}