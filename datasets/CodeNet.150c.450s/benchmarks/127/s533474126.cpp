#include <iostream>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

int main(){
    int n;
    string str;
    cin >> n;
    for(int i=0;i<n;++i){
        set<string> s;
        string str1,str2;

        cin >> str;
        for(int j=1;j<str.size();++j){
            str1 = "";
            str2 = "";
            for(int k=0;k<str.size();++k){
                if(k<j){
                    str1 += str[k];
                }else{
                    str2 += str[k];
                }
            }
            string rstr1, rstr2;
            rstr1 = str1;
            rstr2 = str2;
            reverse(rstr1.begin(), rstr1.end());
            reverse(rstr2.begin(), rstr2.end());
            s.insert(str1+str2);
            s.insert(str2+str1);
            s.insert(rstr1+str2);
            s.insert(str2+rstr1);
            s.insert(str1+rstr2);
            s.insert(rstr2+str1);
            s.insert(rstr1+rstr2);
            s.insert(rstr2+rstr1);
        }
        cout << s.size() << endl;
    }
}