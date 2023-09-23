#include <iostream>
using namespace std;
int n,y,m,d;
int ax,ay,b,c;
int sum;

int main(){
	cin >>n;
	for(int i=0;i<n;i++){
		cin >>y >>m >>d;
		sum=1;
		ax=999/3-y/3;
		ay=(999-y)-ax;
		sum+=ax*200+ay*195;
		b=10-m;
		if(y%3==0){
			sum+=b*20+(20-d);
		}else{
			sum+=(b/2)*39+(b%2)*19;
			if(b%2==0){
				sum+=(19-d);
			}else{
				sum+=(20-d);
			}
		}
		cout <<sum <<endl;
	}
	return 0;
}