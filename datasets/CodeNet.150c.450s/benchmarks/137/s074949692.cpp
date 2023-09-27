#include<set>
#include<string>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    set<string> dict;
    for(int i=0;i<n;++i){
        cin>>str;
        if(str=="insert"){
            cin>>str;
            dict.insert(str);
        }
        else if(str=="find"){
            cin>>str;
            if(dict.count(str)){
                cout<<"yes\n";
            }
            else{
                cout<<"no\n";
            }
        }
    }
}