#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    
    while(cin>>n){
    int count=0;
    for(int i=0;i<10; i++){
        for(int s=0;s<10; s++){
            for(int t=0;t<10; t++){
                for(int w=0;w<10; w++){
                    if(i+s+t+w==n)count++;
                }
            }
        }
    }
        cout<<count<<endl;
    }
    return 0;
}