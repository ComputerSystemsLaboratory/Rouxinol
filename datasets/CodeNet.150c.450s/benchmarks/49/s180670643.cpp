#include<iostream>
#define INF 1<<29
using namespace std;

int main(){
	int n;
	while(cin>>n && n){
		int ma=0,mi=INF;
		int sum=0;
		for(int i=0;i<n;i++){
			int s;
			cin>>s;
			mi=min(mi,s);
			ma=max(ma,s);
			sum+=s;
		}
		cout<<(sum-mi-ma)/(n-2)<<endl;
	}
}