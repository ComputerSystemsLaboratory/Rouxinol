//Single_Source_Shortest_Path_I
/*
5
0 3 2 3 3 1 1 2
1 2 0 2 3 4
2 3 0 3 3 1 4 1
3 4 2 1 0 1 1 4 4 3
4 2 2 1 3 3
*/
#include <iostream>
using namespace std;
static const int INF = (1<<21);

int main(){

    int n;
    cin>>n;
    int M[100][100];
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            if(i==j)
                M[i][j]=0;
            else
                M[i][j]=INF;
        }
    }
    int w,m,v,u;
    for(int i=0;i<n;i++){
        cin>>u>>m;
        for(int j=0;j<m;j++){
            cin>>v>>w;
            M[u][v]=w;
        }
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(M[i][j]>M[i][k]+M[k][j])
                    M[i][j]=M[i][k]+M[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<i<<" "<<M[0][i]<<endl;
    }

    return 0;
}
