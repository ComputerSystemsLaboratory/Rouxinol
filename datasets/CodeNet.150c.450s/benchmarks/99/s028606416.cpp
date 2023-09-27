#include<string>
#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int c,i,t;
	int l1,l2;
	int d;
	int sum,sum1,sum2,hozonn;
	char mozi[4]={'m','c','x','i'};
	string siki1,siki2;

	cin>>c;

	while(c--){
		cin>>siki1>>siki2;
		l1=siki1.size();
		l2=siki2.size();
		d=1000;
		t=0;
		sum=0;
		sum1=0;
		sum2=0;
		hozonn=0;
		for(i=0;i<l1;i++){
			if(siki1[i]=='m'){
				if(hozonn>0)
					sum1+=1000*hozonn;
				else
					sum1+=1000;
				hozonn=0;
			}
			else if(siki1[i]=='c'){
				if(hozonn>0)
					sum1+=100*hozonn;
				else
					sum1+=100;
				hozonn=0;
			}
			else if(siki1[i]=='x'){
				if(hozonn>0)
					sum1+=10*hozonn;
				else
					sum1+=10;
				hozonn=0;
			}
			else if(siki1[i]=='i'){
				if(hozonn>0){
					sum1+=hozonn;
				}
				else{
					sum1+=1;
				}
				hozonn=0;
			}
			else{
				hozonn=(int)siki1[i]-48;
			}
		}
		hozonn=0;
		for(i=0;i<l2;i++){
			if(siki2[i]=='m'){
				if(hozonn>0)
					sum2+=1000*hozonn;
				else
					sum2+=1000;
				hozonn=0;
			}
			else if(siki2[i]=='c'){
				if(hozonn>0)
					sum2+=100*hozonn;
				else
					sum2+=100;
				hozonn=0;
			}
			else if(siki2[i]=='x'){
				if(hozonn>0)
					sum2+=10*hozonn;
				else
					sum2+=10;
				hozonn=0;
			}
			else if(siki2[i]=='i'){
				if(hozonn>0)
					sum2+=hozonn;
				else
					sum2+=1;
				hozonn=0;
			}
			else{
				hozonn=(int)siki2[i]-48;


			}
		}
		sum=sum1+sum2;
		i=0;
		while(d){
			hozonn=sum/d;
			if(sum/d>0){
				if(hozonn==1){
					cout<<mozi[i];
					i++;
					sum=sum%d;
					d=d/10;
				}
				else{
					cout<<hozonn<<mozi[i];
					i++;
					sum=sum%d;
					d=d/10;
				}
			}
			else{
				i++;
				sum=sum%d;
				d=d/10;
			}
		}
		cout<<"\n";
	}
	return 0;
}