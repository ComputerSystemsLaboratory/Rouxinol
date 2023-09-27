#include <iostream>
#include <string>
using namespace std;


int main()
{
	string s;
	string p;
	cin>>s;
	cin>>p;
	for(int i = 0; i < s.length(); i++){
		for(int j = 0; j < p.length(); j++){
			if(s[ (i + j) % s.length()] == p[j]){
				if(j==(p.length() -1)){
				cout<<"Yes"<<endl;
				return 0;
			}
			}else{
				break;
			}
		}
	}
	cout<<"No"<<endl;
	return 0;
}