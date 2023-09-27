#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k,sum,check;
    int t=1;
    vector<int> prime;
    prime.push_back(0);
    prime.push_back(0);
    for(int i=2;i<1000000;i++){
        prime.push_back(1);
    }
    while(t<1000000){
        for(int j=t+1;j<=1000000;j++){
            if(prime[j]==1){
                t=j;
                for(k=2*j;k<=1000000;k+=j){
                    prime[k]=0;
                }
                break;
            }
            else if(j==1000000){
                t=1000000;
            }
        }
    }
    while(cin>>n){
        sum=0;
        for(check=1;check<=n;check++){
            if(prime[check]==1){
                sum+=1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}