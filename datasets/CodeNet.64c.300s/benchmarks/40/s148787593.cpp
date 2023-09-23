#include<iostream>
#include<cctype>
using namespace std;

int main(){
    while(1){
        char a;
        cin.get(a);
        if(a=='\n'){
            cout<<endl;
            break;
        }
        if(islower(a)) {
            cout<<(char)toupper(a);
        }else if(isupper(a)) {
            cout<<(char)tolower(a);
        }else {
            cout<<a;
        }
    }
}

