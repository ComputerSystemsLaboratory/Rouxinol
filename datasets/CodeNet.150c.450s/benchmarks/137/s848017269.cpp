#include <iostream>

using namespace std;

int main() {
    bool* dic = new bool[33554432];
    
    int l[30];
    l['A' - 'A'] = 1;
    l['C' - 'A'] = 2;
    l['G' - 'A'] = 3;
    l['T' - 'A'] = 4;
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        if(s == "insert"){
            cin >> s;
            long d = 0;
            for(int j = 0; j < s.size(); ++j){
                d = 4 * d + l[s[j] - 'A'];
            }
            dic[d] = true;
        }
        
        if(s == "find"){
            cin >> s;
            long d = 0;
            for(int j = 0; j < s.size(); ++j){
                d = 4 * d + l[s[j] - 'A'];
            }
            if(dic[d]){
                cout << "yes" << endl;
            }else{
                cout << "no" << endl;
            }
        }
    }
    return 0;
}