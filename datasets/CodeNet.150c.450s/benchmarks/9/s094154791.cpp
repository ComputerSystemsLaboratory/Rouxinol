#include<iostream>
#include<string>
using namespace std;

string suffle(string s,int len,int num);

int main(){
        int m;
        string s ;
        string haki;
        int count = 0;
        int h[100] = {0};
        bool q = false;
        int l = 0;
        while(1){
                getline(cin,s);
                if(s == "-") break;
                cin >> m;
                getline(cin,haki);
                int s_num = s.length();
                for(int i = 0; i < m;i++){
                        cin >>h[i];
                        getline(cin,haki);
                }
                for(int i = 0; i < m; i++){
                        s = suffle(s,s_num,h[i]);
                }
                cout << s << endl;
        }
        return 0;
}
string suffle(string s,int len,int num){
        char k[200] ={""};
        for(int i = 0; i < num; i++){
                k[i] = s[i];
        }
        for(int i = 0; i < len - num; i++){
                s[i] =  s[i+ num];
        }
        for(int i = len - num; i <len; i++ ){
                s[i] = k[i - len + num];
        }
        return s;
}
