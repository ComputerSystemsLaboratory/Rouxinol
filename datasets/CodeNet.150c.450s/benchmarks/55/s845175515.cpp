#include<iostream>
#include<string>
using namespace std;

int main(){
	int sum=0;
	int len;
	int x;
	
	while(1){
		string number;
		cin>>number;
		len=number.size();
		if(len==1 && (number[0]-48)==0)
			break;
		for(int i=0;i<len;i++){
			x=number[i]-48;
			sum+=x;
		}
		
	       cout<<sum<<endl;
	       sum=0;
	      }
}