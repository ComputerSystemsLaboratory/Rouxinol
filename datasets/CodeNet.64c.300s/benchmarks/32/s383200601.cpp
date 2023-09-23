#include<iostream>
using namespace std;
int main(){
	long a[10000], n;
	long min=0, max=0, sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
		if(i==0){
			sum=min=max=a[i];
		}else{
			if(min>a[i])min=a[i];
			if(max<a[i])max=a[i];
		}
	}
	cout << min << ' ' << max << ' ' << sum << endl;
	return 0;
}