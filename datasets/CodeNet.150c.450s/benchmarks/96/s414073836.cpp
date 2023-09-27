#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<complex>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<sstream>
#include<iostream>
using namespace std;
struct Data{
    char c;
    int n;
};
int main(void){

    int n;
    cin>>n;
    string str;
    string c[] = {".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    while(n--){
        cin>>str;
        Data a[1200];
        char ch = 'A';
        int t = -1;
        for(int i = 0;i < str.size();i++){
            if(ch == str[i]){
                a[t].n++;
            }
            else{
                ch = str[i];
                t++;
                a[t].c = ch;
                a[t].n = 1;
            }
        }
        t++;
        for(int i = 0;i < t;i++){
            if(a[i].c == '0')continue;
            cout<<c[a[i].c - '0' - 1][(a[i].n - 1)%c[a[i].c - '0' - 1].size()];
        }
        cout<<endl;
    }


    return 0;
}