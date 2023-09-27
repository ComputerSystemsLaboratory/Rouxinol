#include <iostream>
#include <string>
using namespace std;
int main(){
    string t,n;
    int c=0;
    cin >> t;
    getline(cin,n);
    for (int i=0;i<t.size();i++)
        if (t[i]<91)
            t[i]+=32;
    while (n!="END_OF_TEXT"){
        for (int i=0;i<n.size();i++)
            if ((n[i]<91)&&(n[i]!=' '))
                n[i]+=32;
        while(n.find(t,0)<=n.size()){
            if ((n[n.find(t,0)-1]<=' ')&&(n[n.find(t,0)+t.size()]<=' ')){
                c++;
            }
            n[n.find(t,0)]='#';
        }
        getline(cin,n);
    }
    cout << c << endl;
    return 0;
}
