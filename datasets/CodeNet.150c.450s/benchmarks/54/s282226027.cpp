#include <iostream>
#include <string>
using namespace std;
int main(){
	int cnt=0,x=0;
	char c;
	string str,W;
	cin>>W;
	while(true){
		while(cin>>str){
			string ans;
			for(int i=0;i<str.size();i++){
				if('A'<=str[i] && str[i]<='Z'){
					c=str[i];
					c=c+32;
				}else if('a'<=str[i] && str[i]<='z'){
					c=str[i];
				}
				ans+=c;
			}
			if(ans==W){
				cnt++;
			}else if(str=="END_OF_TEXT"){
				break;
			}
		}
		break;
	}
	cout<<cnt<<endl;
	return 0;
}