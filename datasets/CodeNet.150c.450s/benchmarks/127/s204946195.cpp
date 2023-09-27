#include <iostream>
using namespace std;
int n,cnt;
string s;
string temp1,temp2,temp3;
string train[1000];
bool flag;
string reverse(string b){
	//cout << b<<endl;
	string a=b;
	for(int i=0;i<b.size();i++){
		a[i]=b[b.size()-1-i];
	}
	//cout << a<<endl;
	return a;
}

void check(string traintemp){
	flag=true;
	for(int i=0;i<cnt;i++){
		if(train[i]==traintemp)flag=false;
	}
	if(flag){
		train[cnt]=traintemp;
		cnt++;
	}
}
int main(){
	cin >>n;
	for(int i=0;i<n;i++){
		cin  >>s;
		cnt=1;
		train[0]=s;
		for(int j=1;j<s.size();j++){
			temp1=s.substr(0,j);
			temp2=s.substr(j);
			for(int k=1;k<=4;k++){
				temp3=temp1+temp2;
				//cout << temp3<<endl;
				check(temp3);
				temp3=temp2+temp1;
				check(temp3);
				temp2=reverse(temp2);
				if(k==2)temp1=reverse(temp1);
				//cout << temp3<<endl;
			}
		}
		cout << cnt<<endl;
	}
}