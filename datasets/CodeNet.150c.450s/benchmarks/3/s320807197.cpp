#include <iostream>
using namespace std;
int main(void){
    string str;
    cin >> str;
    int q;
    cin >> q;
    
    for(int i=0;i<q;i++){
        string word;
        cin >> word;
        int a,b,plen;
        cin >> a >> b;
        plen = b-a+1;

        if(word == "print"){
            cout << str.substr(a,plen) << endl;
            //cout << "str[" << str << "] print[" << str.substr(a,plen) << "]" << endl;
        }else if(word == "reverse"){
            string buf = str;
            for(int j=0;j<plen;j++){
                str[a+j]=buf[b-j];
            }
            //cout << "str[" << str << "] reversefrom[" << buf << "]" << endl;
        }else if (word == "replace"){
            string p;
            cin >> p;
            for(int j=0;j<plen;j++){
                str[a+j]=p[j];
            }
            //cout << "str[" << str << "] replaceword[" << p << "]" << endl;
        }
    }
}