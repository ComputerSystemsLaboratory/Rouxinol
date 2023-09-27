#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip> 
#include <complex> 
#include <string>
#include <vector> 
#include <list>
#include <deque> 
#include <stack> 
#include <queue> 
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <utility>
#include <algorithm> 
#include <numeric> 
#include <typeinfo> 
#include <cstdio>
#include <cstdlib> 
#include <cstring>
#include <cmath>
#include <climits> 
#include <ctime>

using namespace std;

int main(void){
	long long int ans,ans2;
	int num[100001];
	int n,k;
	int a;
	while(1){
		scanf("%d%d",&n,&k);
		if(n==0 && k==0)break;
		ans=0;
		for(a=0;a<n;a++)scanf("%d",&num[a]);
		for(a=0;a<k;a++){
			ans+=num[a];
		}
		ans2=ans;
		for(a=k;a<n;a++){
			ans2+=num[a]-num[a-k];
			ans=max(ans,ans2);
		}
		printf("%d\n",ans);
	}
	return 0;
}