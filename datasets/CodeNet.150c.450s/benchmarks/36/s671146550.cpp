#include <iostream>

using namespace std;


int main(int argc, char *argv[]){
	int d,S;
	while(cin>>d){
		S=0;
		for(int i=0;i<600;i+=d){
			S+=i*i*d;
		}
		cout<<S<<endl;
	}
    return 0;
}