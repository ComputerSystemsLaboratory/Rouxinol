#include <iostream>
#include <algorithm>
using namespace std;

int ary[20];
int main(){
	int N,b=0,c=0;
	cin>>N;
	for(int i=1;i<=N;i++){
		b=c=0;
		for(int j=1;j<=10;j++){
			cin>>ary[j];
		}
		bool fla=true;
		for(int j=1;j<=10;j++){
			if(b<c) swap(b,c);
			if(ary[j]>b) b=ary[j];
			else if(ary[j]>c) c=ary[j];
			else{
				fla=false;
				break;
			}
		}
		if(fla) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}