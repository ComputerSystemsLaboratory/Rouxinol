#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string str,str1,str2,str3;
    int q;
    int a, b;
    
    cin >> str;
    cin >> q;
    for ( int i = 0; i < q; i++ ){
        cin >> str1 >> a >> b;
        if ( str1 == "replace" ){
            cin >> str2;
            str.replace(a, b-a+1, str2);
        }
        if ( str1 == "reverse"){
            for ( int j = b; j >= a; j--){
                str3 = str3 + str[j];
            }
                str.replace(a,b-a+1,str3);
                str3 = "";
        }
        if ( str1 == "print") cout << str.substr(a, b-a+1) << endl;
    }
    return 0;
}

