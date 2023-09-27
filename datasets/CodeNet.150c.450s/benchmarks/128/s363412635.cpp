#include <iostream>
#include<string>
using namespace std;
 
 
int main(){
    string s;
    cin>>s;
    for(int i=s.size();i--;){
        cout<<s[i];
    }cout<<endl;
}