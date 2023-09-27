#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	bool a[1000000]={false};
	for(int i=2;i<1000;i++){
		bool t=false;
		for(int j=2;j*j<=i;j++){
			if(i%j==0)
				t=true;
		}
		if(i==2)
			t=false;
		if(t==false){
			for(int j=i*2;j<1000000;j+=i)
			    a[j]=true;
			a[i]=false;
		}
	}
	while(cin>>n){
		int count=0;
		for(int i=0;i<=n;i++){
			if(a[i]==false)
				count++;
		}
		cout<<count-2<<endl;
	}
	return 0;
}