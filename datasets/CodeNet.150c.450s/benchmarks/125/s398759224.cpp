#define _CRT_SECURE_NO_WARNINGS
#define MAX 2000000000
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std ;

int d[102] = { 0 }, f[102] = {0};
int M[102][102];

int main() {
	stack<int> stk;
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		int k,l,m;
		cin >> m;
		cin >> k;
		for (int j = 0;j < k;j++) {
			cin >> l;
			M[m][l] = 1;
		}
	}
    
	stk.push(1);

    int i = 1,time=1,count=0;
    d[1]=1;
	while (count<n) {
		if (M[stk.top()][i]==1 && d[i]==0) {
			stk.push(i);
			d[stk.top()] = ++time;
			i=1;
		}
		else {
			i++;
			if (i > n) {
				f[stk.top()] = ++time;
				count++;
				stk.pop();
				i=1;
			}
		}
		if(stk.empty()){
		    for(int j=1;j<=n;j++)
		        if(d[j]==0){
		        stk.push(j);
		        d[stk.top()]=++time;
		        i=1;
		        break;
		    }
		}
	}
    
	for (int i = 1;i <= n;i++) {
		cout << i << " " << d[i] << " " << f[i] << endl;
	}
  
}