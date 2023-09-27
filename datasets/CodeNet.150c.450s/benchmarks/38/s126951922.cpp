#include <iostream>
#include<algorithm>
using namespace std;
int	main(){
	int n;
	cin>>n;
	for(int	i=0;i<n;i++){
	int a,b,c;
		cin>>a>>b>>c;
		if(a>c){
			swap(a,c);
		}
		if(b>c){
		  swap(b,c);
		}
		if(a*a+b*b==c*c)
			cout<<"YES"<<endl;

		else
			cout<<"NO"<<endl;
	}
	return 0;
}