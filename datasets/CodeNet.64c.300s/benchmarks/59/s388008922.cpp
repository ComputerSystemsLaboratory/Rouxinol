#include<iostream>
using namespace std;

bool is_prime[50000000];
int main(){

    for(int i=0;i<50000000;i++){
        is_prime[i]=true;
    }

    is_prime[0]=false;
    for(int i=1;i*i+i<25000000;i++){
        if(is_prime[i]){
            for(int j=i*3+1;j<50000000;j+=2*i+1){
                is_prime[j]=false;
            }
        }
    }

    int n,tag;
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>tag;
        if(tag%2==0){
            if(tag==2){
                cnt++;
            }
        }else{
            if(is_prime[tag/2]){
                cnt++;
            }
        }
    }
    
    cout<<cnt<<endl;
    int xxx;cin>>xxx;
    return 0; 
}