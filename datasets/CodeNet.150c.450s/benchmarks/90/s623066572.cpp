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
	int a;
	int maxa=0;
	vector<int> ans;
	map<int,int> f;
	for(a=0;a<=100;a++){
		f.insert( map<int,int>::value_type(a,0));
	}
	while(~scanf("%d",&a)){
		f[a]++;
	}
	for(a=0;a<=100;a++){
		maxa=max(maxa,f[a]);
	}
	for(a=0;a<=100;a++){
		if(maxa==f[a])ans.push_back(a);
	}
	sort(ans.begin(), ans.end());

	for(a=0;a<ans.size();a++){
		cout << ans[a] << endl;
	}
	return 0;
}