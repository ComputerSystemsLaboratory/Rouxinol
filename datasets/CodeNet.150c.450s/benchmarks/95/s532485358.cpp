#include <iostream>
#include <string>

using namespace std;

int main(){

	int l=0,r=0;

	int n;
	while(cin>>n){
		if(n==0)break;
		int state=0;
		int cnt=0;

		l=0;
		r=0;

		string str;

		for(int i=0;i<n;i++){
			cin>>str;
			
			if(str=="lu"){
				l=1;
			}
			else if(str=="ru"){
				r=1;
			}
			else if(str=="ld"){
				l=0;
			}
			else if(str=="rd"){
				r=0;
			}

			if(state==0 && l==1 && r==1){
				state++;
				cnt++;
			}
			else if(state==1 && l==0 && r==0){
				state=0;
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}

	return 0;
}