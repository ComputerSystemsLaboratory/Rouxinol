#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<string>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<cmath>
#include<queue>
#include<cstring>
using namespace std;

int main(){
	int N,S;
	while(cin>>N,N){
		int sum=0,min_=INT_MAX,max_=INT_MIN;
		for(int i=0;i<N;i++){
			cin>>S;
			min_ = min(min_,S);
			max_ = max(max_,S);
			sum += S;
		}
		printf("%d\n",(sum-min_-max_)/(N-2));
	}
	return 0;
}