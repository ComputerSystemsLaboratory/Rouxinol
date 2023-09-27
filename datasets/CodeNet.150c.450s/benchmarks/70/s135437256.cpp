/*AOJ 0027*/

#include<iostream>
using namespace std;

int main(){

	int day[12]={31,29,31,30,31,30,31,31,30,31,30,31};

	int sum = 0;

	int month=0,date = 0;

	while(cin>>month){
		cin>>date;

		if(month == 0){
			break;
		}
		sum = 0;

		for(int i=0;i<month;i++){
			if(month != i+1){
				sum+= day[i];
			}
		}
		sum += date;
		
		if(sum%7==1){
			cout<<"Thursday"<<endl;
		}
		else if(sum%7 == 2){
			cout<<"Friday"<<endl;
		}
		else if(sum%7 == 3){
			cout<<"Saturday"<<endl;
		}
		else if(sum%7 == 4){
			cout<<"Sunday"<<endl;
		}
		else if(sum%7 == 5){
			cout<<"Monday"<<endl;
		}
		else if(sum%7 == 6){
			cout<<"Tuesday"<<endl;
		}
		else{
			cout<<"Wednesday"<<endl;
		}
	}

	
	return 0;
}