#include <iostream>
#include <string>
using namespace std;


int main(){
	string answers="";
//	string tables="";
	int number=0;
	while(1){
		cin >> number;
		if(number==0){break;}

		string table="";
		string answer="";
		for (int i=0;i<number;i++){
			string a,b;
			cin >> a >> b;
			table+=a+b;
		}
//		tables+=table+ "\n";
		cin >> number;
		for (int i=0;i<number;i++){
			string a;
			cin >> a;
			for(int i=0;i<table.length()/2;i++){
				if (table.substr(i*2,1)==a){
					a=table.substr(i*2+1,1);
					break;
				}
			}
			answer+=a;
		}
		answers += answer+"\n";
	}
	cout << answers ;
//	cout << tables ;

	return 0;
}