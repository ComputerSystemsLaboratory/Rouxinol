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

	int n,m;
	
	
	while(cin>>n>>m,n!=0||m!=0){
		int s1=0,s2=0;
		vector<int> x(n);
		vector<int> y(m);
		
	for(int i=0;i<n;i++){
		cin>>x[i];
		s1+=x[i];
	}
	
	for(int i=0;i<m;i++){
		cin>>y[i];
		s2+=y[i];
		
	}
		int f=0;
		int i,j;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(s1-x[i]+y[j]==s2-y[j]+x[i]){
					f=1;
					break;
				}
			
			}
			if(f==1)
				break;
		}
		if(f==1)
			cout<<x[i]<<" "<<y[j]<<endl;
		else
			cout<<"-1"<<endl;
	}
	
}