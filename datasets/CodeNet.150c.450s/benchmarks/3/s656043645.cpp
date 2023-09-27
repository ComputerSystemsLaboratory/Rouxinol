#include <iostream>
using namespace std;
int main(){
	string str,cmd,p;
	int cmd_num,a,b;
	cin>>str>>cmd_num;
	for(int i=0;i<cmd_num;i++){
		cin>>cmd>>a>>b;
		if(cmd=="print"){
			cout<<str.substr(a,b-a+1)<<endl;
		}else if(cmd=="reverse"){
			while(a<b){
				char tmp;
				tmp=str[a];
				str[a]=str[b];
				str[b]=tmp;
				a++;b--;
			}
		}else if(cmd=="replace"){
			cin>>p;
			str.replace(a,b-a+1,p);
		}
	}
	return 0;
}