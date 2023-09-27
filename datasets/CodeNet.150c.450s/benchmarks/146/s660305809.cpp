#include<iostream>

using namespace std;

int main(void){
	
	int n;
	double x1,x2,x3,x4,y1,y2,y3,y4,ab,cd;
	
	cin>>n;
		
	for(int i=0;i<n;i++){
		
		cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		if(x1==x2 && x3==x4){
			cout<<"YES"<<endl;
		}else if(x1==x2 || x3==x4){
			cout<<"NO"<<endl;
		}else{
			ab=(y1-y2)/(x1-x2);
			cd=(y3-y4)/(x3-x4);

			if(ab==cd){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}