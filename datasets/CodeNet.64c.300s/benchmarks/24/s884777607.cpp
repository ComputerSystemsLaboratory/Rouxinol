#include <iostream>
using namespace std;

int main()
{	
	
	int n;
	while(cin>>n){
		if(n==0) return 0;
		
		int a[n], b[n];
		int a_cnt=0, b_cnt=0;
		for(int i=0;i<n;i++){
			cin>>a[i]>>b[i];
		}
		for(int i=0;i<n;i++){
			if(a[i]>b[i]){
				a_cnt += a[i] + b[i];
			}else if(a[i]==b[i]){
				a_cnt += a[i]; b_cnt += b[i];
			}else{
				b_cnt += b[i] + a[i];
			}
		}
		cout<<a_cnt<<' '<<b_cnt<<endl;
	}
	return 0;
}