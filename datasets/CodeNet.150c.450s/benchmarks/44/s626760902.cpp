#include <iostream>
using namespace std;

int hit(string a,string b){
	int res = 0;
	for(int i=0;i<4;i++) if(a[i] == b[i]) res++;
	return res;
}

int blow(string a,string b){
	int res = 0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i == j) continue;
			if(a[i] == b[j]){
				res++;
				break;
			}
		}
	}

	return res;
}

int main(void){
	while(1){
		string a="",b="";

		for(int i=0;i<4;i++){
			char ch;
			if(!(cin>>ch)) return 0;
			a += ch;
		}

		for(int i=0;i<4;i++){
			char ch;
			cin>>ch;
			b += ch;
		}

		cout<<hit(a,b)<<" "<<blow(a,b)<<endl;
	}

	return 0;
}