#include<iostream>
#include<string>
using namespace std;
int main(){
	int cnt;
	string str, tmp_str;
	while(cin>>tmp_str){
		str = str + tmp_str;
	}
	string::iterator sp     = str.begin();
	while(sp != str.end()){
		*sp = tolower(*sp);
		sp++;
	}
	for(int i = 'a'; i <= 'z'; i++){
		cnt=0;
		sp = str.begin();
		while(sp != str.end()){
			if(char(i) == *sp){
				cnt++;
			}
			sp++;
		}
		cout << char(i) << " : " << cnt << endl;;
	}
	return 0;
}