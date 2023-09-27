#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<string> s;
    string temps;
    do{
        cin>>temps;
        if (temps!="0")
            s.push_back(temps);
    }while (temps!="0");
    for (vector<string>::iterator i=s.begin();i!=s.end();i++){
        int sum=0;
        for (int j=0;j<i->length();j++){
            sum+=(*i)[j]-'0';
        }
        cout<<sum<<endl;
    }
    return 0;
}