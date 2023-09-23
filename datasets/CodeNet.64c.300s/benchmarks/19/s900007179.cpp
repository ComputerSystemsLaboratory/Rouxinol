#include <iostream>
using namespace std;
#define N_MAX 5000
int array[N_MAX];
int main(){
	int n;
	int num;
	while(cin>>n&&n){
		int ans=-100000*5000;
		for(int i=0;i<n;i++){
			cin>>num;
			if(i==0)array[i]=num;
			else{
				array[i]=max(array[i-1]+num,num);
			}
			ans=max(ans,array[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}