#include<iostream>
using namespace std;

int main(){
	char *dotw[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	int mod[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i, day, mon, dcnt;
	while(true){
		dcnt = 0;
		cin>>mon>>day;
		if(mon==0)
			break;
		for(i=1;i<mon;i++){
			dcnt += mod[i-1];
		}
		dcnt += day + 2;
		cout << dotw[dcnt%7] << endl;
	}
	return 0;
}