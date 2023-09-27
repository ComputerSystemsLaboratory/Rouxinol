#include<iostream>
#include<vector>
#include<string>
#include<algorithm>	
#include<map>
#include<set>
#include<utility>
#include<cmath>
#include<cstring>
#include<queue>
#include<stack>
#include<cstdio>
#include<sstream>
#include<iomanip>
#include<assert.h>
#include<ctime>
#include<cstdlib>
#include<numeric>
#include<typeinfo>
#include<cstdio>
#include<cctype>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(i=a;i<b;i++)
#define rloop(i,a,b) for(i=a;i>=b;i--)
const int inf=1e8;
const ll INF=1e16;
#define MOD 1000000007
#define mod 1000000009

int main(void){
	vector<int> a;
	char temp[100];
	while(scanf("%s",temp)!=EOF){
		if(isdigit(temp[0])){
			int c=atoi(temp);
			a.push_back(c);
		}else{
			int b1,b2;
			b2=a.back();
			a.pop_back();
			b1=a.back();
			a.pop_back();
			if(temp[0]=='+'){
				a.push_back(b1+b2);
			}else if(temp[0]=='-'){
				a.push_back(b1-b2);
			}else{
				a.push_back(b1*b2);
			}
		}
	}
	cout<<a.back()<<endl;
}