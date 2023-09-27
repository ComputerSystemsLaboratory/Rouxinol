#include <iostream>
using namespace std;
int comstr(string a, string b) {
    int i=0;
    for (;i < a.size() && i < b.size() && a[i] == b[i];i++) {}
    char ca,cb;
    if (i < a.size()) ca = a[i];
    else ca = 0;
    if (i < b.size()) cb = b[i];
    else cb = 0;
    return (int)(cb - ca);
}
int main() {
    int i,n,c1=0,c2=0,tmp;
    string s1,s2;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> s1 >> s2;
        tmp = comstr(s1,s2);
        if (tmp < 0) c1+=3;
        else if (tmp > 0) c2+=3;
        else {c1++;c2++;}
    }
    cout << c1 << " " << c2 << endl;
    return 0;
}