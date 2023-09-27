#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
#define ref goto refrain
int main(){
	char str[1000];
	cin>>str;
	int q;
	cin>>q;
	string order;
	int a,b;
	char rep[1000];
	for(int i=0;i<q;i++){
		cin>>order;
		cin>>a;
		cin>>b;
		if(order=="replace"){
			cin>>rep;
			for(int j=0;a<=b;j++){
				str[a]=rep[j];
				a++;
			}
		}
		else if(order=="reverse"){
			while(a<=b){
				char temp=str[a];
				str[a]=str[b];
				str[b]=temp;
				a++;
				b--;
			}
		}
		else if(order=="print"){
			for(a=a;a<=b;a++){
				printf("%c",str[a]);
			}
			cout<<endl;
		}
	}
	return 0;
}
		
	