#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define cinf(n,x) for(int i=0;i<(n);i++) cin >> x[i];
typedef long long int ll;
using namespace std;

int cntnum(int y,int m,int d){
	int cnt=0;
	int n=(y-1)/3;
	cnt+=195*(2*n+(y-1)%3);
	cnt+=200*n;
	if(y%3!=0){
		int M=(m-1)/2;
		cnt+=(M+(m-1)%2)*20+M*19;
		cnt+=d;
	}
	else{
		cnt+=(m-1)*20;
		cnt+=d;
	}
	return cnt;
}
int main(){
	int n; cin >>n;
	for(int i=0;i<n;i++){
		int y,m,d; cin >>y>>m>>d;
		cout << 196471- cntnum(y,m,d) << endl;
		//cout << cntnum(696,4,19) << endl;
	}
}
