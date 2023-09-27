#include<iostream>
 
using namespace std;
 
int main(){
    int n,max=0;
    int in[100]={0};
    while(cin>>n){
        in[n]++;
        if(max<in[n])max=in[n];
    }
    for(int i=0;i<100;i++){
     
        if(max==in[i])cout<<i<<endl;
    }
    return 0;
}