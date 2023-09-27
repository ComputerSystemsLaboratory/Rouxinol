#include<iostream>
using namespace std;
int main(){
	int mon,day,week;
	while(1){
		cin>>mon>>day;
		if(mon==0)break;
		switch(mon){
			case 1:
			mon=0;
			break;
			case 2:
			mon=31;
			break;
			case 3:
			mon=60;
			break;
			case 4:
			mon=91;
			break;
			case 5:
			mon=121;
			break;
			case 6:
			mon=152;
			break;
			case 7:
			mon=182;
			break;
			case 8:
			mon=213;
			break;
			case 9:
			mon=244;
			break;
			case 10:
			mon=274;
			break;
			case 11:
			mon=305;
			break;
			case 12:
			mon=335;
			break;
		}
		week=(mon+day)%7;
		switch(week){
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