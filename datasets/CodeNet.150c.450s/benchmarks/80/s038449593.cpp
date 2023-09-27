#include<unordered_map>
#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<queue>
#include<map>
#include<set>
#include<list>
#include<chrono>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<functional>
using namespace std;
typedef long long ll;
int main(){
	int a=0,b=0,c;
	for(int i=0;i<4;i++){
		cin>>c;
		a+=c;
	}
	for(int i=0;i<4;i++){
		cin>>c;
		b+=c;
	}
	cout<<max(a,b)<<endl;
}