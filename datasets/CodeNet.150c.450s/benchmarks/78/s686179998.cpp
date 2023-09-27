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

int dx[]={0,1,0,-1};
int dy[]={-1,0,1,0};
typedef pair<int,int> p;

int main()
{
	
	vector<int> all(1000001),odd(1000001);
	for(int i=0;i<=1000000;i++){
		all[i]=odd[i]=i; //??¨???1???????????´???
	}
	
	
	for(int i=1;;i++){
		int x=i*(i+1)*(i+2)/6;
		if(x>1000000) break;
		
		for(int j=0;j<=1000000;j++){
			if(j-x<0) continue;
			
			all[j]=min(all[j],all[j-x]+1);
			if(x%2) odd[j]=min(odd[j],odd[j-x]+1);
		}
	}
			
	int n;
	while(cin>>n,n){
		
		cout<<all[n]<<" "<<odd[n]<<endl;
		
	}
	
	
	return 0;
}