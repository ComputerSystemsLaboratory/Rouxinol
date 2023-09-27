#include<iostream>
#include<stdio.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int main(){
    int n;
    int temp;
    int count;
    while(1){
        cin>>n;
        count=0;
        temp=0;
        if(n==0){
            break;
        }else{
            int j=1;
            for(int i=1;i<n;i++){
                temp=temp+i;
                
                    for(;n<temp;j++){
                    temp=temp-j;
                     
                    
                }
                if(n==temp){
                    count++;
                    continue;
                }
            }
        }
        cout<<count<<endl;

    }
            return 0;
}