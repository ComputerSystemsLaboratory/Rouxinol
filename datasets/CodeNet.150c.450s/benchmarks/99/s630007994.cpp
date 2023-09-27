#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

string stre(int s){
    stringstream ss;
    ss << s;
    return ss.str();
}

string inter(string s,string s2){
    int sum = 0;
    bool flag = false;

    int a=1,dig=0;
    for(int i=0;i<s.length();i++){
	if(s[i] == 'm'){
	    dig = 1000;
	    flag = true;
	}else if(s[i] == 'c'){
	    dig = 100;
	    flag = true;
	}else if(s[i] == 'x'){
	    dig = 10;
	    flag = true;
	}else if(s[i] == 'i'){
	    dig = 1;
	    flag = true;
	}else a = int(s[i] - '0');
	if(flag){
	    sum += a*dig;
	    dig = 0;
	    a = 1;
	    flag = false;
	}
    }
    for(int i=0;i<s2.length();i++){
	if(s2[i] == 'm'){
	    dig = 1000;
	    flag = true;
	}else if(s2[i] == 'c'){
	    dig = 100;
	    flag = true;
	}else if(s2[i] == 'x'){
	    dig = 10;
	    flag = true;
	}else if(s2[i] == 'i'){
	    dig = 1;
	    flag = true;
	}else a = int(s2[i] - '0');
	if(flag){
	    sum += a*dig;
	    dig = 0;
	    a = 1;
	    flag = false;
	}
    }
    string code= stre(sum);
    string res = "";
    string c("mcxi");
    int size = code.length();
    for(int i=0;i<size;i++){
	if (code[i] == '0') continue;
	else if (code[i] == '1') {
	    res += c[i + 4 - size];
	    continue;
	}
	res += code[i] ;
	res += c[i + 4 - size];
    }

    return res;
}


int main(){

    int n;
    cin >> n;
    string s1,s2;
    for(int i=0;i<n;i++){
	    cin >> s1 >> s2 ;
	cout << inter(s1,s2) << endl;
    }
    return 0;
}