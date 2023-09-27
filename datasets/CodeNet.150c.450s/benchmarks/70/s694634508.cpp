#include <iostream>
using namespace std;

char *Whatday(int a,int b){
	char *day;
	int date=0;
	int month[]={
		0,31,29,31,30,31,30,31,31,30,31,30,31
	};
	
	for(int i=1;i<a;i++){
		date = date+month[i];
	}
	date += b;
	switch(date%7){
		case 0: day ="Wednesday"; break;
		case 1: day ="Thursday"; break;
		case 2: day ="Friday"; break;
		case 3: day ="Saturday"; break; 
		case 4: day ="Sunday"; break;
		case 5: day ="Monday"; break;
		case 6: day ="Tuesday"; break;
	}
	return day;
}

int main() {
	int m,d;
	while(1){
		cin >> m >> d;
		if(m==0) break;
		cout << Whatday(m,d) << endl;
	}
	return 0;
}
