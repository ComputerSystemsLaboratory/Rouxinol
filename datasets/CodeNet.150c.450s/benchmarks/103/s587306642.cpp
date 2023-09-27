#include <iostream>
#include <stack>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cmath>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(x=from;x<to;x++)

using namespace std;

struct stk{
	int b,n,s;
	stk(int b, int n, int s) : b(b), n(n), s(s) {}
};

int chkl(int nn, int ss){
int i, cnt=0;
stack< stk > que;
	que.push(stk(-1,0,0));
	while(!que.empty()){
		stk cr = que.top();
		que.pop();
		rep2(i,cr.b+1,10){
			stk nt = cr;
			nt.b=i; nt.n++; nt.s +=i;
//			printf("r= %d %d %d\n",nt.b,nt.n,nt.s);
			if(nt.n==nn && nt.s == ss){
				cnt++;  continue;
			}
			if(nt.s > ss) break;
			if(nt.n > nn) break;
			if(nt.n < nn && nt.s < ss) que.push(nt);

		}
	}
	return cnt;
}

int main(void){

int nn, ss;
	
	while(cin >> nn >> ss){
		if(nn ==0 && ss ==0) break;
		cout << chkl(nn,ss) << endl;
		
	}
	return 0;
}