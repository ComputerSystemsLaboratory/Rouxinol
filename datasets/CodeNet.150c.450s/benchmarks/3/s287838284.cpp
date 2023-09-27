#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string toUpper(string s){
    string t = s;
    for(int i = 0; i < s.size(); i++){
        t[i] = toupper(s[i]);
    }
    return t;
}

int main(){
    string str, order, p;
    int n = 0, a = 0, b = 0;
    cin >>str >>n;
    for(int i =0; i<n; i++){
        cin >>order >>a >>b;
        if(order == "print") cout << str.substr(a, b - a + 1) << endl;
        else if(order == "reverse"){
            string tmp = str.substr(a, b - a + 1);
            int t = tmp.size();
            for(int j =0;j < t;j++) str[j+a] = tmp[t - j -1];
        }
        else if(order == "replace"){
            cin >>p;
            str.replace(a, b - a + 1, p);
        }
    }

    return 0;
}
