#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    char ch;
    char ans;
    while(cin>>noskipws>>ch){
        if(isalpha(ch)  &&  ch>='A'  &&  ch<='Z')
            ans=ch-'A'+'a';
      else  if(isalpha(ch)  &&  ch>='a'  &&  ch<='z')
            ans=ch-'a'+'A';
        else ans=ch;
            
            cout<<ans;
    }
}