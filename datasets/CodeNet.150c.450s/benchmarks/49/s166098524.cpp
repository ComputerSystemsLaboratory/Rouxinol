#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int N,sum,mi,ma,a;
	while(cin>>N){
		if(N==0) break;
		sum=0;
		ma=0;
		mi=1001;
		for(int i=0;i<N;i++){
			cin>>a;
			mi=min(mi,a);
			ma=max(ma,a);
			sum=sum+a;
		}
		cout<<(sum-mi-ma)/(N-2)<<endl;
	}
	return 0;
}