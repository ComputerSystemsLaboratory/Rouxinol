#include <iostream>

using namespace std;

int main(){
    string s;
    while(true){
        cin>>s;
        if(s=="0") break;
        int sum=0;
        for(int i=0;i<s.length();i++){
            int a=s[i]-'0';
            sum+=a;
        }
        cout<<sum<<endl;
    }
}