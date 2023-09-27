#include <bits/stdc++.h>
using namespace std;
int main() {
    // insert code here...
    int a,b;
    string str,k; 
    
    while (true) {

        cin>>str;
        if(str=="-")break;
        cin>>a;
        for (int i=0; i<a; i++) {
            cin>>b;
            k=str.substr(0,b);
            str += k; 
            str.erase(0,b);
        }
        cout << str << endl;
    }
           
    return 0;
}

