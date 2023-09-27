#include<bits//stdc++.h>
using namespace std;
int main(){
	int n,p;
	while(cin>>n>>p&&n!=0&&p!=0){
		int a[50];
		fill(a,a+n,0);
		int m=0,p2=p;
		while(true){
			if(p==0){
				p+=a[m];
				a[m]=0;
			}
			else{
				p--;
				a[m]++;
			}
			if(p==0&&a[m]==p2) break;
			m++;
			if(m==n) m=0;
		}
		cout<<m<<endl;
	}
}