#include<bits/stdc++.h>
using namespace std;
int main(){
    string m;
    getline(cin, m);
    for(int i=0;i<(int)m.size();i++){
        if(m[i] >= 'A'&&m[i] <= 'Z'){
            m[i] -= ('A' - 'a');
        }
        else if(m[i] >= 'a'&&m[i] <= 'z'){
            m[i] += ('A' - 'a');
        }
    }
    cout << m << endl;
    return 0;
}
