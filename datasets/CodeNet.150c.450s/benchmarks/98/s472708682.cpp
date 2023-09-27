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


int taro[100],hana[100];

int main(){
	int n,m;
	while(cin>>n>>m){
		if(n==0 && m==0)break;
		
		int sumt=0;
		for(int i=0;i<n;i++){
			cin>>taro[i];
			sumt+=taro[i];
		}
		
		int sumh=0;
		for(int i=0;i<m;i++){
			cin>>hana[i];
			sumh+=hana[i];
		}
		
		int min=-1,taroc=100,hanac=100;
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(sumt+2*hana[j]==sumh+2*taro[i] && (min==-1 || min>hana[j]+taro[i])){
					min=hana[j]+taro[i];
					taroc=taro[i];
					hanac=hana[j];
				}
			}
		}
		
		if(min==-1)puts("-1");
		else printf("%d %d\n",taroc,hanac);
	}
	return 0;
}