#include<iostream>
#include<sstream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<algorithm>
#include<functional>
#include<utility>
#include<cmath>
#include<ctime>
#include<complex>

using namespace std;

#define REP(i,s,e) for(int i=int(s);i<=int(e);i++)
#define rep(i,n) for(int i=0;i<int(n);i++)

int a[10][10000];
int R,C;
int m=0;
void fr(int j){

rep(i,R){ if(a[i][j]==0) a[i][j]=1;
         else a[i][j]=0;
}
}

void fc(int i){

rep(j,C) {if(a[i][j]==0) a[i][j]=1;
         else a[i][j]=0;
}
}

void g(int k){

	if(k==R){
		rep(j,C){

		int p=0;
		rep(i,R) if(a[i][j]==1) p++;

		if(p>R-p) fr(j);

		}

		int c=0;
		rep(i,R) rep(j,C)
		if(a[i][j]==0) c++;

		if(m<c) m=c;

        return;
		}

	    g(k+1);

	    fc(k);
	    g(k+1);

}

int main(){

	while(true){

		cin >> R >> C;
		if(R==0 && C==0) break;

		rep(i,R) rep(j,C)
		cin >> a[i][j];

		g(0);


		cout << m << endl;

		rep(i,R) rep(j,C) a[i][j]=0;

	}

	return 0;
}