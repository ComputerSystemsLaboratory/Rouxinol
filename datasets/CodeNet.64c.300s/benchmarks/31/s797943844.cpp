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
	bool m[31]={};
	for(int i=0;i<28;i++){
		int a;
		cin>>a;
		m[a]=true;
	}
	for(int i=1;i<=30;i++){
		if(m[i]==false){
			cout<<i<<endl;
		}
	}
	return 0;
}