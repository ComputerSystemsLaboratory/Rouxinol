#include <string>
#include <iostream>

using namespace std;

string ring(string s,int no,int l){
    string r;
    for (int i=0;i<l;i++){
        r+=s[(no+i)%s.size()];
    }
    return r;
}

int main(){
    string s,p;
    cin>>s>>p;
    int i;
    for (i=0;i<s.size();i++){
        if (p==ring(s,i,p.size())) break;
    }
    if (i<s.size()){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
    return 0;
}