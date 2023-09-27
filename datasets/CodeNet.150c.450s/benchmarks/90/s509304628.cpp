#include<iostream>
 using namespace std;
int data[101];
 
int main(){
    int n,max=0;
    while(cin>>n){
        data[n]++;
        if(max<data[n])max=data[n];
    }
    for(int i=1;i<=100;i++){
        if(data[i]==max)cout<<i<<std::endl;
    }
    return 0;
}