#include <iostream>
#include <stdio.h>
#include <utility>
using namespace std;
int main(){
	double px,py;
	double tx[3],ty[3];
	bool flag;
	bool v[3];
	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&tx[0],&ty[0],&tx[1],&ty[1],&tx[2],&ty[2],&px,&py) == 8){
		for(int i=0;i<3;i++){
			tx[i]=tx[i]-px;
			ty[i]=ty[i]-py;
		}
		for(int i=0;i<3;i++){
			if((tx[i%3]*ty[(i+1)%3])-(ty[i%3]*tx[(i+1)%3])<0){
				v[i]=true;
			}else{
				v[i]=false;
			}
		}
		
		if(v[0]!=v[1]){
			cout<<"NO"<<endl;
		}else if(v[1]!=v[2]){
			cout<<"NO"<<endl;
		}else {
			cout<<"YES"<<endl;
		}
	}
	return 0;
}