#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
    string s;
    char m;
    vector<char> si;
    getline(cin,s);
    while(s.size()>0){
        //si.resize(s.size());
        //for(int i=0;i<s.size();i++){
        //    si[i] = null;
        //}
        int i=0;
        while (s[i] != '\0' ){
            m=tolower(s[i]);
            if(m>='a' && m<='z'){
                si.push_back(m);
            }
            i++;
        }
        getline(cin,s);
    }
    sort(si.begin(),si.end());
    //for(int i=0;i<=si.size();i++){
    //    cout << si[i];
    //}
    char moji='a';
    int spos=0;
    int cnt=0;
    while(moji <= 'z'){
        if(spos<si.size() && moji==si[spos]){
            cnt++;
            spos++;
        } else{
            cout << moji << " : " << cnt << endl;
            moji=char(int(moji)+1);
            cnt =0;
        }
    }
    return 0;
}
