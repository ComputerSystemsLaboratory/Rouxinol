#include <iostream>
#include <string>
#include <set>
using namespace std;
 
int main() {
    int n,i;
    string op,str;
    set<string> dict;
    cin>>n;
    for (i=0;i<n;i++) {
        cin>>op>>str;
        if (op == "insert") {
            dict.insert(str);
        } else if (op == "find") {
            if (dict.count(str)>0) {
                cout<<"yes"<<endl;
            } else {
                cout<<"no"<<endl;
            }
        }
    }
    return 0;
}
