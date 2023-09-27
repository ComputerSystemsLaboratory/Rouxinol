#include<iostream>
using namespace std;
int main(){
	while(1){
		int n,count=0;
		bool l,r,flag;
		flag = true;
		l = false;
		r = false;
		cin >> n;
		if(n==0)	break;
		for(int i=0;i<n;i++){
			string str;
			cin >> str;
			if(str=="lu"){
				l = true;
			}
			else if(str=="ru"){
				r = true;
			}
			else if(str=="ld"){
				l = false;
			}
			else if(str=="rd"){
				r = false;
			}
			if(r&&l&&flag){
				flag = false;
				count++;
			}
			else if(!r&&!l&&!flag){
				flag = true;
				count++;
			}
		}
		cout << count << endl;
	}
}
