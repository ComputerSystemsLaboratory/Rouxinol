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
 
using namespace std;
 
const double eps=1e-10;
 
int main()
{
	int n,s;
	while(cin>>n>>s,n){
		int res=0;
		for(int i=0;i<(1<<10);i++){

			int sum=0,bit=0;
			for(int j=0;j<10;j++){
				if( i & (1<<j) ){
					bit++;
					sum+=j;
				}
			}

			if(sum==s && bit==n) res++;

		}

		cout<<res<<endl;
	}

	return 0;
}