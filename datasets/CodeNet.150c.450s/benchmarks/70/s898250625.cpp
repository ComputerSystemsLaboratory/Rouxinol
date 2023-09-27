#include <iostream>
#include <vector> 
#include <math.h>
#include <stdio.h>
using namespace std;

double r(double x1,double y1,double x2,double y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	
	}

int main() {
	// your code goes here
int a[13];
a[1]=31;
a[2]=29;
a[3]=31;
a[4]=30;
a[5]=31;
a[6]=30;
a[7]=31;
a[8]=31;
a[9]=30;
a[10]=31;
a[11]=30;
a[12]=31;

int m,d,z,y;
cin>>m>>d;
while(m!=0){
	if(m==0) z=d;
	else{
		z=d;
		for(int i=1;i<m;i++){
			z=z+a[i];
		}
	}
	y=z%7;
	if(y==1){
		cout<<"Thursday"<<endl;
	}
		if(y==2){
		cout<<"Friday"<<endl;
	}
		if(y==3){
		cout<<"Saturday"<<endl;
	}
		if(y==4){
		cout<<"Sunday"<<endl;
	}
		if(y==5){
		cout<<"Monday"<<endl;
	}
		if(y==6){
		cout<<"Tuesday"<<endl;
	}
		if(y==0){
		cout<<"Wednesday"<<endl;
	}
	
	cin>>m>>d;
}
	
	return 0;
}