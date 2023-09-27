#include<iostream>
using namespace std;

int main(){
	int month[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int m,d;
	while(cin>>m>>d,m+d){
		int sum=d;
		for(int i=0;i<m-1;i++){
			sum+=month[i];
		}	
		switch(sum%7){
			case 1:cout<<"Thursday";break;
			case 2:cout<<"Friday";break;
			case 3:cout<<"Saturday";break;
			case 4:cout<<"Sunday";break;
			case 5:cout<<"Monday";break;
			case 6:cout<<"Tuesday";break;			
			case 0:cout<<"Wednesday";break;
		}
		cout<<endl;
		
	}
}