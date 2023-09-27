#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    int p1=0,p2=0;
    for (int i=0;i<t;i++){
        string s1,s2;
        cin >> s1 >> s2;
        if (s1>s2)
            p1+=3;
        else if (s1<s2)
            p2+=3;
        else {
            p1+=1;
            p2+=1;
        }
    }
    cout << p1 << ' ' << p2 << endl;
    return 0;
}
