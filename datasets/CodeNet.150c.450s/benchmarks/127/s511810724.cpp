#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000


//?????????????????????????§£????????¢
//??????

int main(void){
    
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        set<string> s;
        string str; cin >> str;
        for(int j = 0; j < str.size(); j++){
            string a, b, ra, rb;
            
            a = str.substr(0, j);
            b = str.substr(j);
            ra = a;
            reverse(ra.begin(), ra.end());
            rb = b;
            reverse(rb.begin(), rb.end());

            //7??????????????¨??????
            s.insert(ra + b);
            s.insert(a + rb);
            s.insert(ra + rb);
            s.insert(b + a);
            s.insert(b + ra);
            s.insert(rb + a);
            s.insert(rb + ra);
        }

        cout << s.size() << endl;
    }
    return 0;
}