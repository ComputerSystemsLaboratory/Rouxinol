#include <algorithm>
#include <iostream>
#include <string>

using namespace std;


const int MAX=200;

int main(){
    int m,nmin,nmax,P[MAX];
    int pass;
    while(cin>>m>>nmin>>nmax && m){
        pass=nmin;
        for(int i = 0;i<m;i++){
            cin >>P[i];
        }
        int gap[MAX-1],maxgap=0;
        for(int i=nmin-1;i<nmax;i++){
            gap[i]=P[i]-P[i+1];
            if(gap[i]>=maxgap){pass=i+1;}
            maxgap=max(maxgap,gap[i]);
        }
        cout << pass << endl;
    }
    return 0;
}