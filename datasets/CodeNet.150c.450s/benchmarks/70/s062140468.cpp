#include <iostream>
using namespace std;
int main(){
	int m,d;
	while(cin>>m>>d){
		if(!m) break;
		int daym[12]={0,31,60,91,121,152,182,213,244,274,305,335};
		int wd = (daym[m-1] + d + 2)%7;
		switch(wd){
		case 0:
			cout <<"Monday"<<endl;
			break;
		case 1:
			cout<<"Tuesday"<<endl;
			break;
		case 2:
			cout<<"Wednesday"<<endl;
			break;
		case 3:
			cout<<"Thursday"<<endl;
			break;
		case 4:
			cout<<"Friday"<<endl;
			break;
		case 5:
			cout<<"Saturday"<<endl;
			break;
		case 6:
			cout<<"Sunday"<<endl;
			break;
		}
	}
	return 0;
}