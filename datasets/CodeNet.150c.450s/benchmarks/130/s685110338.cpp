#include<iostream>
#include<algorithm>
#include <vector>
#include <cstdio>
#include <cmath>
#include <string>
#include <queue>
#include <stack>
#include <sstream>
#include <cstdlib>
using namespace std;
int main(){
    int n,m,A[101][101]={0},b[101]={0},c[101]={0},i,j,k;
    cin>>n>>m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    for(k=0;k<m;k++){
        cin>>b[k];
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            c[i]+=A[i][j]*b[j];
        }
    }
    for(i=0;i<n;i++){
        cout<<c[i]<<endl;
    }

        return 0;
    }

