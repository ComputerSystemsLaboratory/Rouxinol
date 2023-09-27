#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=1;i<s.size();i++){
        cout<<s[s.size()-i];
    }
    cout<<s[0];
    cout<<endl;
    return 0;
}