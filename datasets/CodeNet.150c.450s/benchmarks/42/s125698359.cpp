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
	int n,q,i;
	cin>>n>>q;
	queue<string> name;
	queue<int> time;
	loop(i,0,n){
		int temp1;
		string temp2;
		cin>>temp2>>temp1;
		name.push(temp2);
		time.push(temp1);
	}
	int sum=0;
	while(!time.empty()){
		if(time.front()>q){
			sum+=q;
			int front1=time.front()-q;
			time.pop();
			time.push(front1);
			string front2=name.front();
			name.pop();
			name.push(front2);
		}else{
			sum+=time.front();
			string front2=name.front();
			cout<<front2<<" "<<sum<<"\n";
			name.pop();
			time.pop();
		}
	}
}