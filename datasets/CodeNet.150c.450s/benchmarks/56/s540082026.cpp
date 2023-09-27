#include<iostream>
using namespace std;
int main(){
    int n,x;
    long long sum=0;
    int max=-1000000;
    int min=1000000;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>x;
        sum=sum+x;
        if(max<x){
            max=x;
        }
        if(min>x){
            min=x;
        }
        
    }
    cout<<min<<" "<<max<<" "<<sum<<endl;
    return 0;
}

