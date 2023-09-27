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
	const int INF=-100001;
	int n;
	int a,b;
	int num[5001];
	int ans=INF,ans2=0;
	while(1){
		ans=INF,ans2=0;
		cin >> n;
		if(n==0)break;
		for(a=0;a<n;a++)cin >>num[a];
		for(b=0;b<n;b++){
			ans2=0;
			for(a=b;a<n;a++){
				ans2+=num[a];
				ans=max(ans,ans2);
			}
		}
		cout << ans << endl;
	}
	return 0;
}