#include <iostream>
using namespace std;
int main(){
	int n,a;
	int saidai,saisyou;
	long goukei;
	saidai=saisyou=goukei=0;
	cin>>n>>a;
	n-=1;
	saidai=a;
	saisyou=a;
	goukei=a;
	for(int i=0;i<n;i++){
		cin>>a;
		if(saidai<a){
			saidai=a;
		}
		if(saisyou>a){
			saisyou=a;
		}
		goukei+=a;
	}
	cout<<saisyou<<" "<<saidai<<" "<<goukei<<endl;

	return 0;
}