#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main(){


	string s;
	string p;

	cin>>s;
	cin>>p;

	s=s+s;
	std::string::size_type a = s.find(p);
     
    if(a == string::npos)
    	cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;

}