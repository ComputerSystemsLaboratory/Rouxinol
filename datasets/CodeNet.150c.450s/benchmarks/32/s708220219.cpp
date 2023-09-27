#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <list>
using namespace std;

void solve(int m,int nmin,int nmax){
	vector<int> score(m);
	for(int i=0;i<m;i++){
		cin>>score[i];
	}
	
	int maxdiff=0;
	int result;
	for(int i=nmin;i<=nmax;i++){
		int diff=score[i-1]-score[i];
		if(diff>maxdiff){
			maxdiff=diff;
			result=i;
		}else if(diff==maxdiff){
			result=i;
		}
	}
	cout<<result<<endl;
}
int main(void){
	while(1){
		
		int m,nmin,nmax;
		cin>>m>>nmin>>nmax;
		if(m==0) break;
		solve(m,nmin,nmax);
		
		}
	return 0;
}	

