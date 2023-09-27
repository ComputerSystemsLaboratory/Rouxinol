#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool find(string s, string p)
{
    for(int i = 0; i < s.size(); ++i){
        for(int j = 0; j < p.size(); ++j){
            if(i+j >= s.size() || s[i+j] != p[j]) break;
            if(j == p.size() - 1) return true;
        }
    }
    return false;
}
int main()
{
    string s;
    string p;
    cin >> s >> p;
    
    s += s;
    // if(s.find(p,0) == string::npos){
    if(find(s, p) == false){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    return 0;
}