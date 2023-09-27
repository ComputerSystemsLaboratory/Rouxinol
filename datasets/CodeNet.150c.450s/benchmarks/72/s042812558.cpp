#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string a,b;
    getline(cin, a);
    for(int i=0;i<a.size();i++){
        if(islower(a[i])){
            b += toupper(a[i]);
        }
        else if(isupper(a[i])){
            b += tolower(a[i]);
        }
        else{
            b += a[i];
        }
    }
    cout<<b<<endl;
    return 0;
}