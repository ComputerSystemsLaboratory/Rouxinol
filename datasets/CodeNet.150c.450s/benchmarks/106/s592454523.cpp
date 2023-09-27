#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,sam;
    sam = 0;
    cin>>a>>b>>c;
    for (int i = a;i <= b;i++) {
       if (c%i == 0) {
        sam = sam + 1;
       }
    }
    cout<<sam<<endl;
    return 0;
}
