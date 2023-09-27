#include <iostream>
using namespace std;
int main(){
	double x1,y1,x2,y2,x3,y3,x4,y4;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		if(x1 == x2 && x3 == x4){
			cout<<"YES"<<endl;
		}else if(y1 == y2 && y3 == y4){
			cout<<"YES"<<endl;
		}else{
			double m = (y2-y1)/(x2-x1);
			double n = (y4-y3)/(x4-x3);
			if(m==n){
				cout<<"YES"<<endl;
			}else if(m != n){
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}