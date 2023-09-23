#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main(void){
    // Here your code !
 
   string s;
   getline(cin,s);
    for(int i=0;s[i];i++){
    if(isupper(s[i]))
       s[i]=tolower(s[i]);
    else if(islower(s[i]))
       s[i]=toupper(s[i]);
}

cout<<s<<endl;
return 0;
}