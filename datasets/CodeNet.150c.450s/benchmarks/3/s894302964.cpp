#include<iostream>
#include<sstream>

using namespace std;

int main()
{
	string str, command, sub, head, end;
	string orders;
	int numOfComs, a, b;

	cin>>str;
	cin>>numOfComs;
	cin.ignore();
	
	for(int i=0;i<numOfComs;i++){
		getline(cin, orders);
		istringstream ss(orders);
		for(int j=0;j<3;j++){
			switch(j){
			case 0:
				getline(ss, command, ' ');
				break;
			case 1:
				getline(ss, head, ' ');
				break;
			case 2:
				getline(ss, end, ' ');
				break;
			default:
				break;
			}
		}
		istringstream first(head);
		first>>a;
		istringstream last(end);
		last>>b;
		
		if(command=="replace"){
			getline(ss, sub, ' ');
			str.replace(a,b-a+1,sub);
		}else if(command=="print"){
			cout<<str.substr(a,b-a+1)<<endl;
		}else{
			string reversed="";
			for(int j=b;j>=a;j--){
				reversed+=str.at(j);
			}
			str.replace(a,b-a+1,reversed);
		}
	}
	
	return 0;
}
