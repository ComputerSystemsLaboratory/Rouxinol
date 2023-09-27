#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int a,b;
    string str,ope,p,s1,s2;
    cin >> str;
    cin >> n;

    for (int i = 0; i < n ; ++i) {
        cin >> ope;
        cin >> a >> b;
        if(ope == "print") {
            cout << str.substr(a,b-a+1) << endl;
        } else if(ope == "reverse"){
            s1 = str.substr(a, b-a+1);
            for(int j=0;j<s1.length();j++){
                str[a+j]=s1[s1.length()-1-j];
            }
        } else if(ope == "replace"){
            cin >> p;
            str = str.replace(a,b-a+1,p);
        }
    }
    return 0;
}