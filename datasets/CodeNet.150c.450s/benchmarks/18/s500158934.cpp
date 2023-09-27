#include <iostream>
using namespace std;
int main(){
	int n,i;
	double m=100.0;
	cin>>n;
	for(i=0;i<n;i++){
		m*=1.05;
		if(m-(int)m>0.0){
			m+=1.0;
			m=(int)m;
		}
	}
	cout<<m<<"000"<<endl;
	return 0;
}