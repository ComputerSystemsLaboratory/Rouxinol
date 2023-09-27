#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(void){
    string str;
    cin >> str;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    
    int count=0;
    while(1){
        string tmp;
        cin>>tmp;
        if(tmp=="END_OF_TEXT") break;
        transform(tmp.begin(),tmp.end(),tmp.begin(),::tolower);
        if(str==tmp) count++;
    }
    cout <<count<<endl;
   
}
