#include<iostream>
using namespace std;

int main(){
	int i,n,a,b,c,m;
	
	cin>>n;
	
	for(i=0;i<n;i++){
		m = 0;
		cin>>a>>b>>c;
		
		if(a*a == b*b+c*c)
			m = 1;
			
		else if(b*b == c*c+a*a)
			m = 1;
		
		else if(c*c == a*a+b*b)
			m = 1;
			
		if(m == 1)
			cout<<"YES"<<endl;
			
		else if(m == 0)
			cout<<"NO"<<endl;
			
		}
	return 0;
}