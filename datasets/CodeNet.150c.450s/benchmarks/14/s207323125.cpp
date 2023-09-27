#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int check=0;
		if(i%3==0){
			cout<<" "<<i;
			check=1;
		}
		int x=i;
		while(check==0){
			if(x%10==3){
			    cout<<" "<<i;
			    check=1;
			}
			x/=10;
			if(x==0)
				break;
		}
	}
	cout<<endl;
	return 0;
}