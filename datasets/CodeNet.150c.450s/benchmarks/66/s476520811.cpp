#include <iostream>
using namespace std;
string u[257];
string t;
int n,m;
bool door;
void check(string s){
	for(int i=0;i<n;i++){
		if(u[i]==s){
			if(door){
				door=false;
				cout <<"Closed by " ;
			}else{
				door=true;
				cout <<"Opened by " ;
			}
			cout << s<<endl;
			return;
		}
	}
	cout << "Unknown "<< s <<endl;
}





int main(){
	door=false;
	cin >>n;
	for(int i=0;i<n;i++){
		cin >>u[i];
	}
	cin >>m;
	for(int i=0;i<m;i++){
		cin >>t;
		check(t);
	}
	return 0;
}