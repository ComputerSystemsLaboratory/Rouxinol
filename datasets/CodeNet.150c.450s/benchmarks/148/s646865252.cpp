#include<iostream>
#include<map>
using namespace std;


int main(){
	int t;
	cin>>t;
	int num1=0,num2=0,num3=0,num4 =0;
	while(t--){
		string s;
		cin>>s;
	    if(s == "AC") num1++;
	    if(s == "WA") num2++;
	    if(s == "TLE") num3++;
		if(s == "RE") num4++; 
	}
	cout<<"AC x "<<num1<<endl;
	cout<<"WA x "<<num2<<endl;
	cout<<"TLE x "<<num3<<endl;
	cout<<"RE x "<<num4<<endl;
	return 0;
} 