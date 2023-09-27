#include<iostream>
using namespace std;
int main(){
    int i,a,b;
    string str1;
    while(1){
    cin >> str1 ;
    if(str1=="-")break;
    cin >> a;
    for(i=0;i<a;i++){
        cin >> b;
        str1=str1.substr(b)+str1.substr(0,b);
        }
        cout << str1 << endl;
    }
    return 0;
}