#include<iostream>
#include<string>
using namespace std;
int main(void){
    string str;
    int q;
    cin >> str;
    cin >> q;
    for (int i=0;i<q;i++){
        string c;
        cin >> c;
        if (c=="print"){
            int a,b;
            cin >> a >> b;
            for (int i=a;i<=b;i++)
                cout << str[i];
            cout << endl;
        }
        if (c=="reverse"){
            int a,b;
            cin >> a >> b;
            char t;
            for (int i=0;i<=(b-a)/2;i++){
                t=str[a+i];
                str[a+i]=str[b-i];
                str[b-i]=t;
            }
        }
        if (c=="replace"){
            int a,b;
            string r;
            cin >> a >> b >> r;
            str.replace(a,b-a+1,r);
        }
    }
}
