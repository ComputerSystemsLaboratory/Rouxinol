#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    string s, p, buf;
    cin >> s;
    cin >> p;
    buf = s + s;
    if(buf.find(p)!=string::npos){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}