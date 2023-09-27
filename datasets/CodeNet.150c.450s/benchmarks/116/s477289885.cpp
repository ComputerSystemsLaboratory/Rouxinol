#include <iostream>
using namespace std;
int main(){
	int n,k,sum,max,a,i;
	int *data;
	while(cin>>n>>k){
		if(n==0 && k==0){break;}
		data=new int[n];
		sum=0;
		for(i=0;i<k;i++){
			cin>>data[i];
			sum+=data[i];
		}
		max=0;
		for(i=k;i<n;i++){
			cin>>data[i];
			sum-=data[i-k];
			sum+=data[i];
			if(sum>max){
				max=sum;
			}
		}
		cout<<max<<endl;
	}
	return 0;
}