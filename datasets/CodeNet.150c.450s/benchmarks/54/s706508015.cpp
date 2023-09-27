#include <iostream>
using namespace std;
 
int main(){
    string w, s;
    int cnt=0;
    cin >> w;
    for(int i=0;i<w.size();i++) w[i]=tolower(w[i]);
    while(1){
        cin >> s;
        if(s=="END_OF_TEXT") break;
        for(int i=0;i<s.size();i++) s[i]=tolower(s[i]);
        if(s==w) cnt++;
    }
    cout << cnt << endl;
}
