#include <iostream>
using namespace std;
int main(void){
    // Here your code !
    string s, p;
    cin >> s >> p;
    bool q=false;
    for(int i=0;i<s.size();i++) {
        for(int j=0;j<p.size();j++) {
            if(s[(i+j)%s.size()] != p[j]) {
                break;
            }
            if(j == p.size() - 1) {
                q = true;
            }
        }
    }
    if(q) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}