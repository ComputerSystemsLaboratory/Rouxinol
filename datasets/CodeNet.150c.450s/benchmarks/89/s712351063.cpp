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

	vector<long> prime;
	vector<bool> is_prime(1000000,false);
	prime.push_back(2);
	prime.push_back(3);
	prime.push_back(5);

	is_prime[2]=is_prime[3]=is_prime[5]=true;

	for(long i=7;i<1000000;i+=2){
		bool ok=true;
		for(long j=0;prime[j]*prime[j]<=i && ok;j++){
			if(i%prime[j]==0) ok=false;
		}
		if(ok){is_prime[i]=true; prime.push_back(i);}
//		if(ok) cout<<i<<endl;
	}

	long a,d,n;
	while(cin>>a>>d>>n,a){

		int num=0;
		for(long i=a;;i+=d){
			if(is_prime[i]){
				num++;
			}
			if(num==n){cout<<i<<endl; break;}
		}

	}


	return 0;
}