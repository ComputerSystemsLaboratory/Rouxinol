#include <iostream>
using namespace std;
int day[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int m,d;
	while(cin>>m>>d){
		if(!m)break;
		for(int i=1;i<m;i++)d+=day[i];
		if(d%7==0)cout<<"Wednesday"<<endl;
		else if(d%7==1)cout<<"Thursday"<<endl;
		else if(d%7==2)cout<<"Friday"<<endl;
		else if(d%7==3)cout<<"Saturday"<<endl;
		else if(d%7==4)cout<<"Sunday"<<endl;
		else if(d%7==5)cout<<"Monday"<<endl;
		else if(d%7==6)cout<<"Tuesday"<<endl;
	}
    return 0;
}