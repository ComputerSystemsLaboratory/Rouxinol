#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n,p;
    while(cin>>n>>p,p){
        int t=0,wan;
        wan=p;
        vector<int> v(n,0);
        while(1){
            if(wan==1&&v[t]==p-1){
                break;
            }
            else if(wan==0){
                wan=v[t];
                v[t]=0;
            }
            else{
                wan--;
                v[t]++;
            }
            t++;
            if(t==n){
                t=0;
            }
        }   
        cout<< t<<endl;
    }
}