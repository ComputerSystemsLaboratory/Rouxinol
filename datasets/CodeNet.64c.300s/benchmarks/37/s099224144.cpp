#include <iostream>
using namespace std;
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define REP(i,n) FOR(i,0,n)

int main(){
	int n;
	while(cin>>n,n){
		int ret=0;
		FOR(i,1,n){
			int sum=0;
			for(int j=i;j<n;j++){
				sum+=j;
				if(sum==n)ret++;
			}
		}
		cout<<ret<<endl;
	}
}