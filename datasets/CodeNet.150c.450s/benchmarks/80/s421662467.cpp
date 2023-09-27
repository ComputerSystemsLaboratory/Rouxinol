#include <iostream>
using namespace std;
int main (){
	int Info1,Math1,Science1,English1,Info2,Math2,Science2,English2,S,T;
		cin>>Info1>>Math1>>Science1>>English1;
			S=Info1+Math1+Science1+English1;
		cin>>Info2>>Math2>>Science2>>English2;
			T=Info2+Math2+Science2+English2;
				if(S>=T){
					cout<<S<<endl;
				}
				else {
					cout<<T<<endl;
				}
	return 0;
}