#include<bits/stdc++.h>
using namespace std;

int foo(char t){
	int a = 0;//cout<<t<<endl;
	switch(t){
		case 'm': a = 1000;break;
		case 'c': a = 100; break;
		case 'x': a = 10;  break;
		case 'i': a = 1;   break;
	}
	return a;
}


int main(){
	int n, si, si2, temp, sum;
	string str, str2;
	
	cin>>n;
	
	for(int i = 0; i < n; i++){
		cin>>str>>str2;
		si = str.size(); si2 = str2.size();
		sum = 0;//	cout<<"A"<<endl;
		for(int j = 0, temp =1; j < si; j++){
			if('0' <=str[j] && str[j] <= '9') temp = str[j] - '0';
			else {sum += temp *foo(str[j]); /*cout<<temp<<" "<<foo(str[j])<<endl*/;temp = 1;}
		}
		//cout<<"B "<<sum<<endl;
		for(int j = 0, temp =1; j < si2; j++){
			if('0' <= str2[j] && str2[j] <= '9') temp = str2[j] - '0';
			else {sum += temp *foo(str2[j]); temp = 1;}
		}
		//cout<<"D "<<sum<<endl;
		for(int j = 3; j >= 0; j--){
			temp = pow(10, j);
			if((sum/temp)%10){
				if((sum/temp)%10 >= 2)cout<<(sum/temp)%10;
				switch(j){
					case 3: cout<<"m"; break;
					case 2: cout<<"c"; break;
					case 1: cout<<"x"; break;
					case 0: cout<<"i"; break;
				}
			}
		}
		cout<<endl;
		//cout<<" C "<<sum<<endl;
	}
	return 0;
}
