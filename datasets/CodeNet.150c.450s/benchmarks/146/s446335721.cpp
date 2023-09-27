#include <iostream>
using namespace std;

bool solve();

int main(){
	int n;cin>>n;
	while(n--){
		if(solve()){
			cout<<"YES";
		}else{
			cout<<"NO";
		}
		cout<<endl;
	}	
	return 0;
}

bool solve(){
	float x1,x2,y1,y2;
	float vx1,vx2,vy1,vy2;
	
	cin>>x1>>y1>>x2>>y2;
	vx1=x2-x1;vy1=y2-y1;
	cin>>x1>>y1>>x2>>y2;
	vx2=x2-x1;vy2=y2-y1;
	
	//vx1:vy1=vx2:vy2
	return (vx1*vy2==vy1*vx2);
}