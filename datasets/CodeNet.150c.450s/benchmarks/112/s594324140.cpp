#include<iostream>

using namespace std;

int main(){
	
	char ch[8000];
	int n,m;
	char l,r;
	
	while(1){
		cin>>n;

		if(n==0) break;

		for(int i=0;i<3000;i++){
			ch[i]='@';
		}

		for(int i=0;i<n;i++){
			cin>>l>>r;
			ch[l]=r;
		}

		cin>>m;

		for(int i=0;i<m;i++){
			cin>>l;
			if(ch[l]=='@') cout<<l;
			else cout<<ch[l];
		}
		cout<<endl;
	}
	return 0;
}