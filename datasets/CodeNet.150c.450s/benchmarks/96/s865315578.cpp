#include<iostream>

using namespace std;

string str;

string keys[] = {
    ".,!? ",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wxyz",
};

void solve() {
    cin>>str;
    char c = '\0';
    int cnt=-1;
    int num=0;

    for(int i=0;i<str.size();i++) {
        
        if(str[i]=='0') {
            if(cnt==-1) c='\0';
            else c=keys[num-1][cnt];
            if(c!='\0') cout<<(c);
            c='\0';
            cnt=-1;
            num=0;
        }
        else {
            num=str[i]-'0';
            cnt++;
            cnt%=keys[num-1].size();            
        }
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        solve();
    }

    return 0;
}