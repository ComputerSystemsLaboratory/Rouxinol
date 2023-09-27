#include<iostream>
using namespace std;

string rep(string s,int a,int b,string p);
string rev(string s,int a,int b);
void pri(string s,int a,int b);

int main(){
        string code,k,p;
        int n,a,b;
        string haki;
        getline(cin,code);
        cin >> n;
        getline(cin, haki);
        for(int i = 0; i < n; i++){
                cin >> k;
                if(k == "replace"){
                        cin >> a >> b >> p;
                        code = rep(code ,a,b,p);
                }else if(k == "reverse"){
                        cin >> a >> b;
                        code =rev(code , a,b);
                }else if(k == "print"){
                        cin >> a >> b;
                        pri(code, a,b);
                }
                getline(cin,haki);
        }
}

string rep(string s,int a, int b, string p){
        for(int i = a; i <=b; i++){
                s[i] = p[i-a];
        }
        return s;
}string rev(string s, int a, int b){
        string p = s;
        for(int i = a; i <= b; i++){
                s[i] = p[b-i+a];
        }
        return s;
}
void pri(string s, int a, int b){
        for(int i = a; i <= b;i++){
                cout <<s[i];
        }
        cout << endl;
}
