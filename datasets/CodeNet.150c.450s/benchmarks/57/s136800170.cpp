#include<iostream>
using namespace std;
int main(){
	bool nc = 1;
	int na,nb;
	char c;
	while(nc){
	std::cin>>na>>c>>nb;
	switch(c){
	case '+':
		cout<<na + nb<<endl;
		break;
	case '-':
		cout<<na - nb<<endl;
		break;
	case '*':
		cout<<na * nb<<endl;
		break;
	case '/':
		cout<<na / nb<<endl;
		break;
	case '?':
		nc = 0;
	}
	}
	return 0;
}