#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    int n;
    string d;
    char ch[12];
    map<string,bool> T;
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> d >> ch;
        if(d=="insert"){
            T[string(ch)] = true;
        }else if(d=="find"){
            if(T[string(ch)]) cout << "yes" << endl;
            else cout << "no" << endl;
        }
    }
    
    return 0;
}