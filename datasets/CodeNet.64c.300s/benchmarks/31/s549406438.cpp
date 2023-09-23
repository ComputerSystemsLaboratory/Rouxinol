#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <string>
#include <functional>
#include <math.h>
#include <utility>
using namespace std;
int main()
{
	bool pre[30];
	fill(pre,pre+30,false);
	for(int i=0;i<28;i++){
		int t;cin>>t;
		pre[--t]=true;
	}
	for(int i=0;i<30;i++){
		if(!pre[i])cout<<i+1<<endl;
	}
}