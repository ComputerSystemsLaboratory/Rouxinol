#include<cstdio>
#include<string>
#include<map>
#include<algorithm>
#include<iostream>
#include<set>
using namespace std;

int d;
set<string> data;

void check(string str){
	for(int i=1;i<str.size();i++){
		string str2="",str3="";
		str2.append(str,0,i);
		str3.append(str,i,str.size()-i);
		string str4;
		str4=str2+str3;
		data.insert(str4);
		str4=str3+str2;
		data.insert(str4);
		reverse(str2.begin(),str2.end());
		str4=str2+str3;
		data.insert(str4);
		str4=str3+str2;
		data.insert(str4);
		reverse(str3.begin(),str3.end());
		str4=str2+str3;
		data.insert(str4);
		str4=str3+str2;
		data.insert(str4);
		reverse(str2.begin(),str2.end());
		str4=str2+str3;
		data.insert(str4);
		str4=str3+str2;
		data.insert(str4);
	}
}

int main(void){
	scanf("%d",&d);
	for(int i=0;i<d;i++){
		data.clear();
		string str;
		cin >> str;
		check(str);
		printf("%d\n",data.size());
	}
	return 0;
}