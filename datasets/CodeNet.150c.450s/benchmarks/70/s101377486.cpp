#include <iostream>
#include <string>
using namespace std;
int main(){
	int m,d;
	while(true){
	cin>>m>>d;
	if(m==0&&d==0)
		break;
	for(int i=m-1;i>0;i--){
		if(i==1)
			d+=31;
		if(i==2)
			d+=29;
		if(i==3)
			d+=31;
		if(i==4)
			d+=30;
		if(i==5)
			d+=31;
		if(i==6)
			d+=30;
		if(i==7)
			d+=31;
		if(i==8)
			d+=31;
		if(i==9)
			d+=30;
		if(i==10)
			d+=31;
		if(i==11)
			d+=30;
		if(i==12)
			d+=31;
	}
	d=d%7;
	switch(d){
	    case 0:
		cout<<"Wednesday"<<endl;
		break;
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
	}
	}
	return 0;
}