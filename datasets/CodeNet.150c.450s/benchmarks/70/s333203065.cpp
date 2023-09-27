#include<iostream>

using namespace std;

int mouth[]={-1,31,29,31,30,31,30,31,31,30,31,30,31};

int main(void){

	int mo,da,wa;

	while(1){
		wa=0;
		cin>>mo>>da;
		if(mo==0||da==0) break;
		for(int i=1;i<mo;i++) wa+=mouth[i];
		wa+=da;
		switch(wa%7){
		case 1:
			cout<<"Thursday"<<endl;
			break;
		case 2:
			cout<<"Friday"<<endl;
			break;
		case 3:
			cout<<"Saturday"<<endl;
			break;
		case 4:
			cout<<"Sunday"<<endl;
			break;
		case 5:
			cout<<"Monday"<<endl;
			break;
		case 6:
			cout<<"Tuesday"<<endl;
			break;
		case 0:
			cout<<"Wednesday"<<endl;
			break;
		}
	}
	return 0;
}