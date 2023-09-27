#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;

int n,m,flag;
string str,kari;
string c;
struct DATA{
	string b,a;
};
DATA data[256];

int main(){
	while(1){
		str=kari;
		cin>>n;
		if(n==0){break;}
		for(int i=0;i<n;i++){
			cin>>data[i].b>>data[i].a;
		}
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>c;
			for(int j=0;j<n;j++){
				flag=0;
				if(data[j].b==c){str+=data[j].a;flag++;break;}
			}
			if(flag==0){str+=c;}
		}
		cout<<str<<endl;
	}
	return 0;
}