#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> out;

void print(string str,int a,int b){
    string temp;
    temp = str.substr(a,b - a + 1);
    out.push_back(temp);
}

void reverse(string &str,int a,int b){
    for (int i = a,j = b;i < j;i++,j--){
        char temp;
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void replace(string &str,int a,int b,string s){
    for (int i = a,j = 0;i <= b;i++,j++){
        str[i] = s[j];
    }
}

int main(){
    string str;
    cin >> str;
    int q;
    cin >> q;
    for (int i = 0;i < q;i++){
        string ins;
        cin >> ins;
        if (ins == "print"){
            int a,b;
            cin >> a >> b;
            print(str,a,b);
        }
        else if (ins == "reverse"){
            int a,b;
            cin >> a >> b;
            reverse(str,a,b);
        }
        else {
            int a,b;
            string s;
            cin >> a >> b >> s;
            replace(str,a,b,s);
        }
    }
    for (int i = 0;i < out.size();i++){
        cout << out[i] << endl;
    }
}