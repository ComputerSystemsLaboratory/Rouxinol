#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    string p;
    cin>>s;
    cin>>p;
    s+=s;
    int loc=s.find(p,0);
    if(loc!=string::npos)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}