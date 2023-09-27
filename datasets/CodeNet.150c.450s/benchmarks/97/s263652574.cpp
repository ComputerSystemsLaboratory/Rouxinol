#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
#include <map>
#include <queue>
#include <string>
using namespace std;

int N,n[200],d[200],p[200][2],dd[4][2]={{-1,0},{0,-1},{1,0},{0,1}},M[2],m[2];
const int INF=9999999;

int main() {
    while(cin>>N){
    	if(N==0)return 0;
    	M[0]=0;M[1]=0;m[0]=0;m[1]=0;
    	for(int i=1;i<N;i++)cin>>n[i]>>d[i];
    	for(int i=1;i<N;i++){
    		for(int j=0;j<2;j++){
    			p[i][j]=p[n[i]][j]+dd[d[i]][j];
    			M[j]=max(M[j],p[i][j]);
    			m[j]=min(m[j],p[i][j]);
    		}
    	}
    	cout<<(M[0]-m[0]+1)<<" "<<(M[1]-m[1]+1)<<endl;
    }
} 