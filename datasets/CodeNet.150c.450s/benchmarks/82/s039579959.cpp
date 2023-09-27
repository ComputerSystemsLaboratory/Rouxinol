
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<cmath>
#include<iomanip>
using namespace std;

int main(void){
	int a[6],c,q,hokan,ue,mae;
	cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6];
	cin>>q;
	for(int kibou=0;kibou<q;kibou++){
		cin>>ue>>mae;
		c=0;
		for(int x=0;4>x;x++){
		for(int b=0;4>b;b++){
			if(a[1]==ue&&a[2]==mae){

			break;
			}
			hokan=a[1];
			a[1]=a[2];
			a[2]=a[6];
			a[6]=a[5];
			a[5]=hokan;
			c++;
			if(a[1]==ue&&a[2]==mae){
				break;
			}
		}
		if(a[1]==ue&&a[2]==mae){
			break;
		}	hokan=a[1];
		a[1]=a[4];
		a[4]=a[6];
		a[6]=a[3];
		a[3]=hokan;
		c++;
		if(a[1]==ue&&a[2]==mae){
		break;
	}}
		for(;;){
			hokan=a[1];
			a[1]=a[2];
			a[2]=a[6];
			a[6]=a[5];
			a[5]=hokan;
			c++;
			hokan=a[1];
			a[1]=a[4];
			a[4]=a[6];
			a[6]=a[3];
			a[3]=hokan;
			c++;
			for(int b=0;4>b;b++){
				if(a[1]==ue&&a[2]==mae){
					break;
				}
				hokan=a[1];
				a[1]=a[2];
				a[2]=a[6];
				a[6]=a[5];
				a[5]=hokan;
				c++;
				if(a[1]==ue&&a[2]==mae){
					break;
				}
			}
			if(a[1]==ue&&a[2]==mae){
								break;
							}
			hokan=a[1];
			a[1]=a[4];
			a[4]=a[6];
			a[6]=a[3];
			a[3]=hokan;
			c++;
			hokan=a[1];
			a[1]=a[4];
			a[4]=a[6];
			a[6]=a[3];
			a[3]=hokan;
			c++;
			for(int b=0;4>b;b++){
				if(a[1]==ue&&a[2]==mae){
					break;
				}
				hokan=a[1];
				a[1]=a[2];
				a[2]=a[6];
				a[6]=a[5];
				a[5]=hokan;
				c++;
				if(a[1]==ue&&a[2]==mae){
					break;
				}
			}if(a[1]==ue&&a[2]==mae){
				break;
			}
		}
		cout<<a[3]<<endl;

	}
	return 0;
}

