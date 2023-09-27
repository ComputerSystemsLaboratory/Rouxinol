#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef pair<long long int,int> P;
struct vertex{
    vector<P> E;//cost,to
};
#define INF 5000000001
vertex V[100000];
long long int minimum[100000];

int main(){
    int NV,NE,r;
    cin>>NV>>NE>>r;
    fill(minimum,minimum+100000,INF);
    minimum[r]=0;
    for(int i=0;i<NE;i++){
        int s,t,d;
        cin>>s>>t>>d;
        V[s].E.emplace_back(d,t);
    }
    bool update;
    for(int i=0;i<NV;i++){
        update=false;
        for(int j=0;j<NV;j++){
            if(minimum[j]==INF) continue;
            for(auto& e:V[j].E){
                int to=e.second, cost=e.first;
                if(minimum[j]+cost<minimum[to]){
                    minimum[to]=minimum[j]+cost;
                    update=true;
                }
            }
        }
    }
    if(update){
        cout<<"NEGATIVE CYCLE"<<endl;
        return 0;
    }
    for(int i=0;i<NV;i++){
        if(minimum[i]==INF){
            cout<<"INF"<<endl;
        }else{
            cout<<minimum[i]<<endl;
        }
    }
    return 0;
}