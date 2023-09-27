#define	_USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
using namespace std;
int main(){

	int n,r;
	
	while(cin>>n>>r,n!=0||r!=0){
	stack<int> q;
	stack<int> a;
	stack<int> b;
		for(int i=1;i<=n;i++)
		q.push(i);
		int c,p;
		for(int i=0;i<r;i++){
			cin>>p>>c;
			for(int j=1;j<p;j++){
			a.push(q.top());
				q.pop();
			}
			
			for(int j=0;j<c;j++){
			b.push(q.top());
				q.pop();
			}
			while(a.empty()!=true){
				q.push(a.top());
				a.pop();
			}
			while(b.empty()!=true){
				q.push(b.top());
				b.pop();
			}
		}
		cout<<q.top()<<endl;
	}
}