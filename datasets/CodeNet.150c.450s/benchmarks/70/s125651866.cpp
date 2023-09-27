#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>
#include<cmath>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)


#define X real()
#define Y imag()
typedef complex<double> P;

int main(){
	
	int m[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	string s[7]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
	while(1){
		int a,b;
		cin>>a>>b;
		if(a==0)break;
		
		int sum = 0;
		rep(i,a)sum+=m[i];
		sum += b;
		
		cout<<s[sum%7]<<endl;
	}
}