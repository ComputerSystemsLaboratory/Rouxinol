#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
using namespace std;
static const double EPS = 1e-5;
typedef long long ll;

int so[1000001];

int n,a,d;

int main(){
	
	so[0]=so[1]=1;
	
	for(int i=2;i*i<1000001;i++){
		if(so[i]==1)continue;
		//printf("%d\n",i);
		for(ll j=i;j*i<1000001;j++){
			//printf("%d\n",i*j);
			//if(i>=46349)printf("%d\n",i*j);
			so[i*j]=1;
		}
	}
	
	//puts("prime complete");
	
	while(cin>>a>>d>>n){
		if(a==0 && d==0 && n==0)break;
		
		int i=-1;
		
		while(n){
			++i;
			if(so[a+d*i]==0){
				--n;
			}
		}
		
		printf("%d\n",a+d*i);
	}
	return 0;
}