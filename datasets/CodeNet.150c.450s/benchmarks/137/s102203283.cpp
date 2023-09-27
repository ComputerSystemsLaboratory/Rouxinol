#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string q, word;
    set<string> dic;
    
    for(int i=0; i < n; ++i){
        cin >> q >> word;
        if(q=="insert"){
            dic.insert(word);
        }else{
            if(dic.count(word)){
                cout << "yes" << endl;  
            }else{
                cout << "no" << endl;
            }
        }
    }
}

