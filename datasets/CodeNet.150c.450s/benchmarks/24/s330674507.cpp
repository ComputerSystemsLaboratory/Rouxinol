#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;

int main(){
    int N,M;
    while(cin>>N>>M && !(N==0 && M==0)){
        pair<int,int>* road=new pair<int,int>[N];
        for(int i=0;i<N;++i){
            cin>>road[i].second>>road[i].first; //(P,D)
        }
        sort(road,road+N);
        reverse(road,road+N);
        for(int i=0;i<N;++i){
            if(M==0) break;
            int deduct=(road[i].second<=M ? road[i].second : M);
            road[i].second-=deduct;
            M-=deduct;
        }
        int S=0;
        for(int i=0;i<N;++i){
            S+=road[i].first*road[i].second;
        }
        cout<<S<<"\n";
        delete[] road;
    }
}