#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	while(true){
	int count=0;
	cin>>a;
	if(a=="0")
		break;
	for(int i=0;i<a.size();i++){
		if(a[i]=='1')
			count+=1;
		if(a[i]=='2')
			count+=2;
		if(a[i]=='3')
			count+=3;
		if(a[i]=='4')
			count+=4;
		if(a[i]=='5')
			count+=5;
		if(a[i]=='6')
			count+=6;
		if(a[i]=='7')
			count+=7;
		if(a[i]=='8')
			count+=8;
		if(a[i]=='9')
			count+=9;
	}
	cout<<count<<endl;
	}
	return 0;
}