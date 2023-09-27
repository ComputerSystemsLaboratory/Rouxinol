#include<iostream>
#include<cstdio>
#include<algorithm>
#include<stack>
using namespace std;
int main(){
    int n,u,k,v;
    int M[100][100]={0};
    stack<int> S;

    cin >> n;
    for(int i=0;i<n;i++){
	cin >> u;
	u--;
	cin >> k;
	for(int j=0;j<k;j++){
	    cin >> v;
	    v--;
	    M[u][v]=1;
	}
    }

    int time=0;
    int d[100]={0},f[100]={0};
    bool found;
    int i;

	for(int k=0;k<n;k++){
	    if(d[k]==0) S.push(k);
	    while(!S.empty()){
		if(d[S.top()]==0) d[S.top()]=++time;
		found=false;
		for(i=0;i<n;i++){
		    if(d[i]==0 && M[S.top()][i]==1){
			found=true;
			break;
		    }
		}
		if(found) S.push(i);
		else {
		    f[S.top()]=++time;
		    S.pop();
		}
	    }
	}

   for(int i=0;i<n;i++){
	printf("%d %d %d\n",i+1,d[i],f[i]);
    }

    return 0;
}