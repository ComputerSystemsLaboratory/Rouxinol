#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char a[1200] = {0};
    string b;
    getline(cin,b);
    b.copy(a,b.size());
    a[b.size()]='\0';
    for(int i = 0; a[i] != '\0'; ++i){
        if(islower(a[i])){
            a[i] = toupper(a[i]);
        }else if(isupper(a[i])){
            a[i] = tolower(a[i]);
        }
    }

    cout << a<<endl;
}