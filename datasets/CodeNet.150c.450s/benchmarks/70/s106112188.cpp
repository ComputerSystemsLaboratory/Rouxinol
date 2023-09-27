#include<iostream>
#include<string>
using namespace std;

int m,d;
int data[] = {31,29,31,30,31,30,31,31,30,31,30,31};
string day[] = {"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};

int main(){
	while(cin >> m >> d){
		if(m == 0) break;

		for(int i = 0; i < m - 1; i++){
			d+=data[i];
		}
		cout << day[(d-1)%7] << endl;
	}
}