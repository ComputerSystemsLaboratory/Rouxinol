#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int cn;
    cin >> s;
    cin >> cn;
    for (int i=0;i<cn;i++){
        string c;
        cin >> c;
        if (c=="print"){
            int a,b;
            cin >> a >> b;
            for (int i=a;i<=b;i++)
                cout << s[i];
            cout << endl;
        }
        if (c=="reverse"){
            int a,b;
            cin >> a >> b;
            char t;
            for (int i=0;i<=(b-a)/2;i++){
                t=s[a+i];
                s[a+i]=s[b-i];
                s[b-i]=t;
            }
        }
        if (c=="replace"){
            int a,b;
            string r;
            cin >> a >> b >> r;
            s.replace(a,b-a+1,r);
        }
    }
}
