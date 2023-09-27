#include<iostream>
using namespace std;
int subZeller(int m,int d){
	int y=2004;
	if(m<3){
		y--;
		m+=12;
	}
	return(y+y/4-y/100+y/400+(13*m+8)/5+d)%7;
}

int main(){
	
	int month,day;
	char *dayname[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	while(cin>>month>>day){
		if(month!=0&&day!=0){
			cout<<dayname[subZeller(month,day)]<<endl;
		}
		else
			break;
	}
}