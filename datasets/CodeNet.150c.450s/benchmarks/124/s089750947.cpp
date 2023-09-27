#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int inf=(1<<20);


int main(void){
    int n,u,q,c;
int m[100][100];
int d[100];
int w[100];

    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            m[i][j]=inf;
        }
        d[i]=inf;
        cin>>q>>c;
        for(int j=0;j<c;j++){
            int k,l;
            cin>>k>>l;
            m[q][k]=l;
        }
    }
    
    d[0]=0;
    while(1){
        u=-1;
        int min=inf+1;
        for(int i=0;i<n;i++){
            if(min>d[i]&&d[i]!=-1){
                min=d[i];
                u=i;
            }
        }
        if(u==-1)break;
        w[u]=d[u];
        for(int i=0;i<n;i++){
            if(d[i]!=-1&&d[i]>m[u][i]+d[u]){
                d[i]=m[u][i]+d[u];
            }
        }

        d[u]=-1;
    }
  for(int i=0;i<n;i++){
      cout<<i<<" "<<w[i]<<endl;
  }
    return 0;
}

