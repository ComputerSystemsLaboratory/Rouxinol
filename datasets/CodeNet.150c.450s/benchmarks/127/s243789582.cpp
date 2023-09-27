#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

bool check(string s,vector<string> x){
    for(int i=0;i<x.size();i++){
	if(s == x[i]) return false;
    }
    return true;
}
string split(string s,int i){
    string temp="";
    for(int j=0;j<=i;j++){
	temp += s[j];
    }
    for(int j=s.length()-1;j>i;j--){
	temp += s[j];
    }
    return temp;
} 
string split1(string s,int i){
    string temp="";
    for(int j=s.length()-1;j>i;j--){
	temp += s[j];
    }
    for(int j=0;j<=i;j++){
	temp += s[j];
    }
    return temp;
}
string rsplit(string s,int i){
    string temp="";
    for(int j=i;j<s.length();j++){
	temp += s[j];
    }
    for(int j=i-1;j>=0;j--){
	temp += s[j];
    }
    return temp;
}
string rsplit1(string s,int i){
    string temp="";
    for(int j=i-1;j>=0;j--){
	temp += s[j];
    }
    for(int j=i;j<s.length();j++){
	temp += s[j];
    }
    return temp;
}
string bsplit(string s,int i){
    string temp="";
    for(int j=i-1;j>=0;j--){
	temp += s[j];
    }
    for(int j=s.length()-1;j>=i;j--){
	temp += s[j];
    }
    return temp;
}
string osplit(string s,int i){
    string temp="";
    for(int j=i;j<s.length();j++){
	temp += s[j];
    }
    for(int j=0;j<i;j++){
	temp += s[j];
    }
    return temp;
}

int def(string s){
    int size;
    vector<string> x;
    size = s.length();
    x.push_back(s);

    for(int i=0;i<size;i++){
	string t = split(s,i);
	if(check(t,x)) x.push_back(t);
	t = rsplit(s,i);
	if(check(t,x)) x.push_back(t);
	t = split1(s,i);
	if(check(t,x)) x.push_back(t);
	t = rsplit1(s,i);
	if(check(t,x)) x.push_back(t);
	t = bsplit(s,i);
	if(check(t,x)) x.push_back(t);
	t = osplit(s,i);
	if(check(t,x)) x.push_back(t);
    }
    return x.size();
}
        

int main(){

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
	string s;
	cin >> s;
	cout << def(s) << endl;
    }
    return 0;
}