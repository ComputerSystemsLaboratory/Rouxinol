#include<iostream>
using namespace std;
int main(){
	int m,d;
	for(;;){
		cin >>m>>d;
		if(m == 0 && d == 0){break;}
		if(m == 2){d+=3;}
		else if(m == 3){d+=4;}
		else if(m == 5){d+=2;}
		else if(m == 6){d+=5;}
		else if(m == 8){d+=3;}
		else if(m == 9){d+=6;}
		else if(m == 10){d+=1;}
		else if(m == 11){d+=4;}
		else if(m == 12){d+=6;}
		if(d%7 == 1){cout <<"Thursday"<<endl;}
		else if(d%7 == 2){cout <<"Friday"<<endl;}
		else if(d%7 == 3){cout <<"Saturday"<<endl;}
		else if(d%7 == 4){cout <<"Sunday"<<endl;}
		else if(d%7 == 5){cout <<"Monday"<<endl;}
		else if(d%7 == 6){cout <<"Tuesday"<<endl;}
		else if(d%7 == 0){cout <<"Wednesday"<<endl;}
	}
	return 0;
}