#include<bits/stdc++.h>
using namespace std;

//constant
const int inf=1<<28;

//variable
int n,p;
int gor[52];

int main(){
    while(cin>>n>>p, n){
        for(int i=0; i<n; i++){
            gor[i]=0;
        }
        int p_t=p;
        for(int i=0; ; i++){
            if(p_t==0){
                p_t+=gor[i%n];
                gor[i%n]=0;
            }
            else if(p_t>0){
                gor[i%n]++;
                --p_t;
                if(gor[i%n]==p){
                    cout<<i%n<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}