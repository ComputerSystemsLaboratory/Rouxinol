#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>
#include <set>
#include <sstream>
#include <map>
#include <queue>
#include <stack>
 
using namespace std;
 
const int N=1e6;

int main()
{

	vector<int> t;
	t.push_back(1);
	for(int i=2;t.back()<=N;i++) t.push_back(i*(i+1)*(i+2)/6);

	vector<int> ans(N+1,N),ans2(N+1,N);

	ans[0]=ans2[0]=0;

	for(int i=0;i<N;i++){
//		cout<<i<<endl;
		for(int j=0;j<t.size() && i+t[j]<=N;j++){
			ans[i+t[j]]=min(ans[i+t[j]],ans[i]+1);
			if(t[j]%2) ans2[i+t[j]]=min(ans2[i+t[j]],ans2[i]+1);
		}
	}

//	cout<<"ok"<<endl;

	long long n;
	while(cin>>n,n){

		cout<<ans[n]<<" "<<ans2[n]<<endl;

	}


	return 0;
}