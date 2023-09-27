#include<iostream>
using namespace std;

int check(int a,int b,int c){
	if(a*a+b*b==c*c) return 1;
	else return 0;
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b,c;
		int aa,bb,cc;
		cin>>a>>b>>c;
		aa=a<b?a:b;
		bb=a<b?b:a;
		cc=bb<c?c:bb;
		bb=bb<c?bb:c;
		int ans=check(aa,bb,cc);
		if(ans) cout<<"YES"<<endl;
		else    cout<<"NO"<<endl;
	}
	return 0;
}