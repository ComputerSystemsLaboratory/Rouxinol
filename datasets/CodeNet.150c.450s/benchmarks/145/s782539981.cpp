#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main() {
    string E[1000];

    int n=0;
    while(cin>>E[n]){
        n++;
    }
//    for(int i=0; i<n; i++){
//        cout<<E[i]<<" ";
//    }
    
    int B[1000]={0};
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(E[i]==E[j]){
                B[i]++;
            }
        }
    }
    
    int max=0;
    int max_num=0;
    for(int i=0; i<n; i++){
        if(B[i]>max){
            max=B[i];
            max_num=i;
        }
    }
    cout<<E[max_num]<<" ";
    
    max=0;
    max_num=0;
    for(int i=0; i<n; i++){
        if((int)E[i].length()>max){
            max=(int)E[i].length();
            max_num=i;
        }
    }
    cout<<E[max_num]<<endl;
    return 0;
}