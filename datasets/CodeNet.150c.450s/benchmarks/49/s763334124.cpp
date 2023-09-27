#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>
using namespace std;
int main(){
	int n,s,mn,mx,cnt;
	while(cin>>n){
			if(n==0){
				break;
			}
			cnt=0;
			cin>>s;
			mn=s;
			mx=s;
			cnt+=s;
		for(int i=1;i<n;i++){
			cin>>s;
			mn=min(mn,s);
			mx=max(mx,s);
			cnt+=s;
		}
		cout<<(cnt-mn-mx)/(n-2)<<endl;
	}
	return 0;
}