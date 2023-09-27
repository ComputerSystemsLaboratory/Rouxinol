#include <iostream>
using namespace std;

int main() {
float x1,x2,x3,x4,y1,y2,y3,y4;
int n;
cin>>n;
for(int jjj=1;jjj<=n;jjj++){
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	if(x1==x2||x3==x4){
		if(x3==x4&&x1==x2){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}}
	else{
		double k=(y2-y1)/(x2-x1),l=(y4-y3)/(x4-x3);
		if(k==l){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}	
	}

	return 0;
}