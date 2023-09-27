#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, tp = 0, hp = 0;
	string tc, hc;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>tc>>hc;
		if(tc > hc)      tp += 3;
		else if(tc < hc) hp += 3;
		else if(tc == hc){
			tp++;   hp++;
		}
	}

	cout<<tp<<" "<<hp<<endl;

	return 0;
}