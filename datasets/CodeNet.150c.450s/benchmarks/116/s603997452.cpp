#include <iostream>
#include <vector>

using namespace std;

int main(){
	for(;;){
		unsigned long n,k;
		vector<int> a;
		cin>>n>>k;
		if(!n) return 0;
		int ai;
		for(unsigned long i=0;i<n;i++){
			cin>>ai;
			a.push_back(ai);
		}

		long sum=0,max=0;
		for(unsigned long i=0;i<k;i++){
			sum+=a[i];
		}
		max=sum;
		for(unsigned long i=1;i<n-k+1;i++){
			sum+=a[i+k-1]-a[i-1];
			if(max<sum) max=sum; 
		}
		cout<<max<<endl;
	}
	return 0;
}