#include <iostream>
using namespace std;
int main(){
	int day[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
	int mon,d;
	while(cin>>mon>>d){
		int sum =0;
		if(mon == 0) break;
		for(int i=0;i<mon-1;i++){
			sum += day[i];
		}
		sum += d;
		int a = sum%7;
		if(a==1) cout<<"Thursday"<<endl;
		else if(a==2) cout<<"Friday"<<endl;
		else if(a==3) cout<<"Saturday"<<endl;
		else if(a==4) cout<<"Sunday"<<endl;
		else if(a==5) cout<<"Monday"<<endl;
		else if(a==6) cout<<"Tuesday"<<endl;
		else if(a==0) cout<<"Wednesday"<<endl;
	}
	return 0;
}