#include <algorithm>
#include <iostream>
using namespace std;
#define INF 2e12

int main(){
    int NV,NE;
    cin>>NV>>NE;
    long long int minimum[NV][NV];
    fill(minimum[0],minimum[NV],INF);
    for(int i=0;i<NE;i++){
        int s,t,d;
        cin>>s>>t>>d;
        minimum[s][t]=d;
    }
    bool update;
    for(int i=0;i<NV;i++)minimum[i][i]=0;
    for(int k=0;k<NV;k++){
        for(int i=0;i<NV;i++){
            for(int j=0;j<NV;j++){
                if(minimum[i][k]==INF||minimum[k][j]==INF)continue;
                minimum[i][j]=min(minimum[i][j],minimum[i][k]+minimum[k][j]);
            }
        }
    }
    for(int i=0;i<NV;i++){
        if(minimum[i][i]<0){
            cout<<"NEGATIVE CYCLE"<<endl;
            return 0;
        }
    }    

    for(int i=0;i<NV;i++){
        for(int j=0;j<NV;j++){
            if(minimum[i][j]==INF){
                cout<<"INF";
            }else{
                cout<<minimum[i][j];
            }
            if(j+1!=NV)cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}