#include <iostream>
using namespace std;
int main(){
	int n,y,m,d,a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>y>>m>>d;
		a=0;
		for(int j=1;j<y;j++){
			if(j%3==0){
				a=a+200;
			}
			else{
				a=a+195;
			}
		}
		for(int j=1;j<m;j++){
			if(y%3==0||j%2==1){
				a=a+20;
			}
			else{
				a=a+19;
			}
		}
		a=a+d;
		cout<<196471-a<<endl;
	}
    return 0;
}