#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <map>
#define INF 100000000

using namespace std;
typedef long long ll;

int main(){
	int sum[2];
	sum[0]=sum[1]=0;
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			int a;
			cin>>a;
			sum[i]+=a;
		}
	}
	cout<<max(sum[0],sum[1])<<endl;
	return 0;
}