#include<iostream>
#include<string>
using namespace std;

string rep(int a, int b, string c, string d){
	string s1=c, s2=d;
	s1=s1.replace(a,b-a+1,s2);
return s1;
}

string rev(int a, int b, string c){
	string s1=c, s2, s3;
	s2=s1.substr(a,b-a+1);
	for(int i=s2.size()-1;i!=-1;i--){s3+=s2[i];}
	s1=s1.replace(a,s3.size(),s3);
return s1;
}

string pri(int a, int b, string c){
	string s1=c;
	s1=s1.substr(a,b-a+1);
return s1;
}

int main(){
	int cnt, a, b;
	string st1, st2, st3;
	cin >> st1 >> cnt;
	for(int i=0;i<cnt;i++){
		cin >> st2;
		if(st2=="replace"){cin >> a >> b >> st3; st1=rep(a, b, st1, st3);}
		else if(st2=="reverse"){cin >> a >> b; st1=rev(a, b, st1);}
		else if(st2=="print"){cin >> a >> b; cout << pri(a,b,st1) << endl;}
	}
return 0;
}