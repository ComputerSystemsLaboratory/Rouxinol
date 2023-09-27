#include <iostream>
#include <string>
using namespace std;

int main(){
	string day[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int month[] = {31,29,31,30,31,30,31,31,30,31,30,31};
	int m, d;
	while(cin>>m>>d){
		if(!m&&!d) break;
		int dsum = 0;
		for(int i=0; i<m-1; i++){
			dsum += month[i];
		}
		dsum += d - 1;
		cout<<day[(dsum+3)%7]<<endl;
	}
	return 0;
}