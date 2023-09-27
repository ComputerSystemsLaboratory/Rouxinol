#include <iostream>
using namespace std;
int main(void){
    string s1, s2;
    int m, k;
    int h[100];
    
    while(1) {
        k=0;
        cin >> s1;
        s2 = s1;
        if(s1 == "-") {
            break;
        }
        cin >> m;
        for(int i=0;i<m;i++) {
            cin >> h[i];
            k = k + h[i];
        }
        for(int i=0;i<s1.size();i++) {
            s1[i] = s2[(i+k)%s1.size()];
        }
        cout << s1 << endl;
    }
}