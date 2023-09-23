#include <iostream>
using namespace std;
typedef long long ll;

int main(){
	int N;
	cin>>N;
	ll res=1;
	for(int i=1;i<=N;i++){
		res*=(ll)i;
	}
	cout<<res<<endl;
	return 0;
}