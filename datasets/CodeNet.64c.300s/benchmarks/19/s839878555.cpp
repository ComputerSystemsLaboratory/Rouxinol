#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>

#include<vector>

#define INF 999999
using namespace std;
int main(){
    int N;
    while(cin>>N,N){
        int num[5500]={0},max=-INF;
        for(int i=0;i<N;i++){
            cin>>num[i];
        }
        for(int i=0;i<N;i++){
            int total=0;
            if(max<num[i])max=num[i];
            total+=num[i];
            for(int j=i+1;j<N;j++){
                total+=num[j];
                if(max<total)max=total;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}