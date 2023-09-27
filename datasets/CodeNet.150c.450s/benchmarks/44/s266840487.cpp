#include "bits/stdc++.h"
using namespace std;

int main(){
	vector<int> a(4);
	vector<int> b(4);
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3]){
		int hit=0;
		int bro=0;
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(a[i]==b[j]){
					if(i==j){
						hit++;
					}else{
						bro++;
					}
				}
			}
		}
		cout<<hit<<" "<<bro<<endl;
	}
	return 0;
}