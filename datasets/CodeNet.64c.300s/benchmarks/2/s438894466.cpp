#include<iostream>
using namespace std;
int main(){
	int count=0,count2,m,f,r;
	char seiseki[100];
	while(1){
		cin>>m>>f>>r;
		if((m==-1&&f==-1)&&r==-1){break;}
		if((m==-1||f==-1)||(m+f)<30){
			seiseki[count]='F';
			count++;
		}else if((m+f)<50&&r<50){
			seiseki[count]='D';
			count++;
		}else if((m+f)<65||r>=50){
			seiseki[count]='C';
			count++;
		}else if((m+f)<80){
			seiseki[count]='B';
			count++;
		}else{
			seiseki[count]='A';
			count++;
		}
	}
	for(count2=0;count2<count;count2++){
		cout<<seiseki[count2]<<endl;
	}
	return 0;
}