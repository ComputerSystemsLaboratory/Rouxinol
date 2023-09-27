#include<iostream>
#include<string>
using namespace std;
int main(){
	size_t len;
	string str,code;
	int time,pro1,pro2;
	cin>>str>>time;
	for(int abc=0;abc<time;abc++){
		string damy;
		cin>>code>>pro1>>pro2;
		if(code=="print"){
			cout<<str.substr(pro1,pro2-pro1+1)<<endl;
		}else{
			if(code=="replace"){
				cin>>damy;
			}else{
				for(int abcd=pro2;abcd>=pro1;abcd--){
					damy+=str[abcd];
				}
			}
			str=str.substr(0,pro1)+damy+str.substr(pro2+1);
		}
	}
	return 0;
}