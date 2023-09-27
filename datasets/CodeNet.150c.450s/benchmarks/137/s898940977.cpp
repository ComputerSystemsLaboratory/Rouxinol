#include <iostream>
#include <string>
using namespace std;
 
bool chk[244140624]; //5^12
int n;
string ins, s;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> ins >> s;
        // ?????????????????????????????????h??????????????????
        int h = 0; 
        for (int i=0, l=s.size(); i<l; ++i) {
        	h *= 5;
            if (s[i] == 'A')
                h += 1;
            else if (s[i] == 'C')
                h += 2;
            else if (s[i] == 'G')
                h += 3;
            else
                h += 4;
        }
        
        if (ins[0] == 'i') {
            chk[h] = true;
        } 
        else {
            cout << (chk[h] ? "yes\n" : "no\n");
        }
    }
    return 0;
}