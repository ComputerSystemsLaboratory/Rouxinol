#include <iostream>
#include <cstdio>                                               //scanf,printf
#include <algorithm>                                            //max,min
#include <string>                                               //string
#include <cstring>                                              //strlen,strcat
#include <cctype>                                               //isalpha,tolower
using namespace std;

int main(){
    string s;
    while(cin>>s&&s!="-"){
        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            int num;
            cin>>num;
            s.insert(s.size(), s.substr(0,num));
            s.erase(0,num);
        }
        cout<<s<<endl;
    }
}

