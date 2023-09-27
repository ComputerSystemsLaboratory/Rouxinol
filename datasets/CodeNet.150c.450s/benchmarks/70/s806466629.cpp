#include <iostream>
#include <string>
using namespace std;

int main()
{
	int month[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int m,day,sumday;
    while(1){
		cin >> m; // 月
		if (m==0){ break;}
		cin >> day;  //日付
		for(int i=0;i<m;i++){
			day+=month[i];
		}
		switch(day%=7){
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
			default:
				cout<<"Wednesday"<<endl;
				break;
		}
		
	}
	return 0;
}