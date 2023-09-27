#include <iostream>
#include <cctype>
using namespace std;
int main(){
    char c;
    int a[26]={0};
    while(cin>>c){
        a[tolower(c)-'a']++;
    }
    for(int i=0;i<26;i++){
        cout<<(char)(i+'a')<<" : "<<a[i]<<endl;
    }
    return 0;
}