#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> P;
int memo[1001001];
int mome[1001001];

void hoge(){

    for(int i=1; ; i++){
        int p=i*(i+1)*(i+2)/6;
        if(p>=1001001) break;
        P.push_back(p);
    }
    for(int i=0; i<1001001; i++){
        memo[i]=mome[i]=i;
    }
    for(int i=0; i<P.size(); i++){
        memo[P[i]]=1;
        if(P[i]%2) mome[P[i]]=1;
    }
    for(int i=0; i<1001001; i++){
        for(int j=0; j<P.size(); j++){
            if(i+P[j]<1001001){
                memo[i+P[j]]=min(memo[i+P[j]], memo[i]+1);
            }
            if((P[j]%2)&&i+P[j]<1001001){
                mome[i+P[j]]=min(mome[i+P[j]], mome[i]+1);
            }
        }
    }
}

int main(){

    hoge();
    while(1){
        int N;
        cin>> N;
        if(!N) break;

        cout<< memo[N]<< " "<< mome[N]<< endl;
    }

    return 0;
}