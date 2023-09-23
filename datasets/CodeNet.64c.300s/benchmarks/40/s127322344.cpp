#include<iostream>
#include<string>
#include<cstdlib>
#include<algorithm>
//#include<ctype.h>
using namespace std;
int main(void){
    int i;
    string s;
    getline(cin,s);
    for(i=0;i<s.size();i++){
        if(isupper(s[i])!=0) s[i]=tolower(s[i]);
        else if(islower(s[i])!=0) s[i]=toupper(s[i]);
    }
    cout << s << endl;
    return 0;
}