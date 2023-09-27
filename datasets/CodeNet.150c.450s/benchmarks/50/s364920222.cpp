#include<iostream>
#include<utility>
#include<queue>

using namespace std;

int main(void){

	std::ios_base::sync_with_stdio();

	int kouka[]={500,100,50,10,5,1};
	int n,cnt;

	while(1){
		cin>>n;
		if(n==0) break;
		n=1000-n;
		cnt=0;
		for(int i=0;i<6;i++){
			cnt+=n/kouka[i];
			n-=(n/kouka[i])*kouka[i];
		}
		cout<<cnt<<endl;
	}

	return 0;
}