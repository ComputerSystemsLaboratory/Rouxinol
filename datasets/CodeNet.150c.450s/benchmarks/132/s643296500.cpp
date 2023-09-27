#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,p;
	while(cin>>n>>p){
		if(n==0 && p==0) break;
		int hv[100]={},tn=0,cp=p;
		while(1){
			if(cp==1 && hv[tn]==p-1){
				cout<<tn<<endl;
				break;
			}
			if(cp==0){
				swap(cp,hv[tn]);
			}
			else {
				hv[tn]++; 
				cp--;
			}

			tn=(tn+1)%n;
		}
	}
	return 0;
}