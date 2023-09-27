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

using namespace std;
 
const double eps=1e-10;

const int dy[]={-1,-1,0,1,1, 1, 0,-1};
const int dx[]={ 0, 1,1,1,0,-1,-1,-1};


int main()
{
	long long e;
	while(cin>>e,e){
		long long res=10000000;
		for(long long z=0;z*z*z<=e;z++){
			for(long long y=0;z*z*z+y*y<=e;y++){
				long long x=e-z*z*z-y*y;
				res=min(res,x+y+z);
			}
		}
		cout<<res<<endl;
	}

	return 0;
}