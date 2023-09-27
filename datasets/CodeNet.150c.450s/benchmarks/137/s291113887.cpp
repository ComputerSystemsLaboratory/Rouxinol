#include <iostream>
#include <string>

#define MAX 16777216

using namespace std;

bool dic[16777216];

int getStrNum(string str){
	int sum = 0, p=1;
	for(int i=0;i<str.size();++i){
		if(str[i] == 'A')sum += 1*p;
		else if(str[i] == 'C')sum += 2*p;
		else if(str[i] == 'G')sum += 3*p;
		else if(str[i] == 'T')sum += 4*p;
		p*=4;
	}
	return sum;
}

int main(){
	int n, i;
	cin >> n;
	
	string siji, _str;
	for(i=0;i<n;++i){
		cin >> siji >> _str;
		if(siji[0] == 'i'){
			dic[getStrNum(_str)]=true;
		}else{
			if(dic[getStrNum(_str)])cout << "yes" << endl;
			else cout << "no" << endl;
		}
	}
	return 0;
}
