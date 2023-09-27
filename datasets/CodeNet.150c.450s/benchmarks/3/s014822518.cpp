#include <iostream>
#include <string>
using namespace std;

int main(){
	string str, trans, s;
	int q, a, b;

	cin>>str;
	cin>>q;
	
	for(int i=0;i<q;i++){
		cin>>trans>>a>>b;
		string left = str.substr(0, a);
		string right = str.substr(b+1, str.length()-b-1);

		if(trans == "print"){
			s = str.substr(a, b-a+1);
			cout<<s<<endl;
		}else if(trans == "reverse"){
			s = str.substr(a, b-a+1);
			str = left;
			for(int j=s.length()-1;j>=0;j--){
				str += s[j];
			}
			str += right;
		}else if(trans == "replace"){
			cin>>s;
			str = left + s + right;
		}
	}

	return 0;
}