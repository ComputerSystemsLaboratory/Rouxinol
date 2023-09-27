#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS=1e-10;
const ll INF=1000000000;
int main(){
    int n;
    while(cin>>n,n){
        int x[210]={};int y[210]={};
        for(int i=1;i<n;i++){
            int idx,d;
            cin>>idx>>d;
            switch(d){
                case 0:x[i]=x[idx]-1;y[i]=y[idx];break;
                case 1:y[i]=y[idx]-1;x[i]=x[idx];break;
                case 2:x[i]=x[idx]+1;y[i]=y[idx];break;
                case 3:y[i]=y[idx]+1;x[i]=x[idx];break;
            }
        }   
        int xpm=-INF;int xmm=INF;int ymm=INF;int ypm=-INF;
        for(int i=0;i<n;i++){
            xpm=max(xpm,x[i]);
            xmm=min(xmm,x[i]);
            ypm=max(ypm,y[i]);
            ymm=min(ymm,y[i]);
        }
        //cout<<xpm<<" "<<xmm<<" "<<ypm<<" "<<ymm<<endl;
        cout<<xpm-xmm+1<<" "<<ypm-ymm+1<<endl;
    }
    return 0;
}
