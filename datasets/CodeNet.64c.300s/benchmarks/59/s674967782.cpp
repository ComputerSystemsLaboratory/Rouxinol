
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<cmath>
#include<iomanip>
using namespace std;

int main(void){
	int n,a,b,count,c,w;
	double d;
	n=0;
	b=0;
	cin>>n;
	//cout<<"n="<<n<<endl;
	count=0;
	for(a=0;a<n;a++){
		cin>>b;
		d=b;
		//cout<<b<<" ";
		for(w=0;w<=0;w++){
			if(b==2){
				break;
			}
			if(b%2==0||b==1){
				//cout<<"NO"<<endl;
				count++;
				break;
			}for(c=3;sqrt(d)>=c;c=c+2){
				if(b%c==0){
					count++;
					//cout<<"NO"<<endl;
					break;
				}
			}
		}
	}cout<<n-count<<endl;
	return 0;
}

