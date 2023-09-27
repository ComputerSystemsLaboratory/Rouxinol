#include <iostream>
#include <string>
#include <set>
using namespace std;

string reverse(string str){
    string nstr="";
    for(string::reverse_iterator it=str.rbegin();it!=str.rend();++it){
        nstr += *it;
    }
    return nstr;
}
int main(){
    int m;
    string str;
    cin >> m;
    for(int i=0;i<m;++i){
        set<string> train;
        cin >> str;
        train.insert(str);
        for(int j=1;j<str.size();++j){
            string a, b, ra, rb;
            a = str.substr(0,j);
            b = str.substr(j);
            ra = reverse(a);
            rb = reverse(b);
            train.insert(b+a);
            train.insert(ra+b);
            train.insert(b+ra);
            train.insert(a+rb);
            train.insert(rb+a);
            train.insert(ra+rb);
            train.insert(rb+ra);
        }
        cout << train.size() << endl;
    }
}