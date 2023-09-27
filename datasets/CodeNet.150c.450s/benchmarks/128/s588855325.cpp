#include<iostream>
using namespace std;
int main(){
    string str,str2;
    cin >> str;
    int n = str.size();
    for(int i = 0;i < n;i++){
        str2.push_back(str[n-i-1]);
    }
    cout << str2 << endl;
    return 0;
}
