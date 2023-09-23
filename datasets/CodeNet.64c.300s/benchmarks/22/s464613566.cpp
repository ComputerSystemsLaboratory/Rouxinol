#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int ha,hb,hc;
		cin>>ha>>hb>>hc;
		if(ha>hc){
			swap(ha,hc);
		}if(hb>hc){
		swap(hb,hc);
		}
		if(ha*ha+hb*hb==hc*hc){
			cout<<"YES"<<endl;
		}else
			cout<<"NO"<<endl;
		


	}
}