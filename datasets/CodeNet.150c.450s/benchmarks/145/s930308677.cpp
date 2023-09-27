#include<iostream>
#include<string>
#include<cstdio>
#include<map>

using namespace std;

int main( ){
    string l;
    int t=0;
	string max="";
	map<string,int> str;
	string s;
	while(cin>>s){
            if(s.length()>max.length())max=s;
            str[s]++;
            if(str[s]>t){
                t=str[s];
                l=s;
            }
	}
	cout<<l<<" "<<max<<endl;
	return 0;
}