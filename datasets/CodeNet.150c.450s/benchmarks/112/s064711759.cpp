#include <iostream>
using namespace std;
 
int main(){
    int n,m;
    char c[128],f;
    string s;
    while(cin >> n && n){
        s = "";
        for(int i=0;i<128;i++)c[i]=i;
        for(int i=0;i<n;i++){
            cin >> f;
            cin >> c[f];
        }
        cin >> m;
        for(int i=0;i<m;i++){
            cin >> f;
            s += c[f];
        }
        cout << s << endl;
    }
}