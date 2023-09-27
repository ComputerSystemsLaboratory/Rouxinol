#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,s,c;
	string m;
	while(1){
		cin>>n;
		if(n==0) break;
		s=c=0;
		for(int i=0;i<n;i++){
			cin>>m;
			if(s==1&&(m=="lu"||m=="ru")) c++;
			if(s==0&&(m=="ld"||m=="rd")) c++;
			if(m=="lu"||m=="ru") s=1;
			if(m=="ld"||m=="rd") s=0;
		}
		cout<<c<<endl;
	}
	return 0;
}
