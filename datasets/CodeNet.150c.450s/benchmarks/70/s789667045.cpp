#include<iostream>
using namespace std;
int main(){
	int m,d,days=0;
	for(;;){
		cin>>m>>d;
		if(m==0){return 0;}
		switch(m){
			case 2:
		days=31;break;
			case 3:
		days=60;break;
			case 4:
		days=91;break;
			case 5:
		days=121;break;
			case 6:
		days=152;break;
			case 7:
		days=182;break;
			case 8:
		days=213;break;
			case 9:
		days=244;break;
			case 10:
		days=274;break;
			case 11:
		days=305;break;
			case 12:
		days=335;break;
		}
		days+=d;
		days=days%7;
		if(days==0)cout<<"Wednesday"<<endl;
		if(days==1)cout<<"Thursday"<<endl;
		if(days==2)cout<<"Friday"<<endl;
		if(days==3)cout<<"Saturday"<<endl;
		if(days==4)cout<<"Sunday"<<endl;
		if(days==5)cout<<"Monday"<<endl;
		if(days==6)cout<<"Tuesday"<<endl;
	}
}