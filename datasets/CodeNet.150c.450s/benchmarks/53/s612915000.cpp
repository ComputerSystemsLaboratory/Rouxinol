#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<queue>
#include<list>
#include<set>
#include<cmath>

#define REP(i,n) for(int (i) = 0;(i) < (n);(i)++)
using namespace std;
int P[31664];

int main(){
	P[0] = P[1] = 1;
	REP(i,180){
		if(P[i]==0){
			for(int j = i*i;j<31664;j+=i) P[j]=1;
		}
	}
	int n;
	cin >> n;cout << n <<":";
	REP(i,31664){
		if(P[i]==0 && n%i==0){
			while(n%i==0){
				cout << " " << i;
				n/=i;
			}
		}
		if(n==1)break;
	}
	if(n != 1) cout << " " << n;
	cout << endl;
}