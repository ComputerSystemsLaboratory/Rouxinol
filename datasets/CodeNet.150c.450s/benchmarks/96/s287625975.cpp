#include<bits/stdc++.h>
using namespace std;

int boo(int x, int y){
	if(x%y) return x%y -1;
	else return y - 1;
}

char foo(string str,int mk, int i){
	char ch, mozi[16] = "00adgjmptw", mozi1[8] = " .,!?";
	if(str[mk] - '0' == 1) ch = mozi1[(i - mk)%5];
	else if(((str[mk] - '0') == 7) || ((str[mk] - '0') == 9)) ch = mozi[str[mk] - '0'] + boo(i - mk, 4);
	else ch = mozi[str[mk] - '0'] + boo(i - mk, 3);
	return ch;
}

int main(){
	int N, mk, count, temp;
	int i, j, k;
	string str;
	char ch[2000];
	
	cin>>N;
	
	for(i = 0; i < N; i++){
		mk=0; count=0;
		cin>>str;
		for(j = 0; j < (int)str.size(); j++){
			if(str[j] == '0'){
				if(mk != j)ch[count++] = foo(str, mk, j);
				mk =  j + 1;
			}
		}
		
		for(j = 0; j < count; j++) cout<<ch[j];
		if(count)cout<<endl;
	}
	
	return 0;
}
