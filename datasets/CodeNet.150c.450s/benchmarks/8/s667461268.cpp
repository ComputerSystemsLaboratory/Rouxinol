#include <bits/stdc++.h>
using namespace std;

int main() {
    // insert code here...
    string tarou, hanako;
    int a,tp=0,hp=0;
    cin>>a;
    for (int i=0; i<a; i++) {
        cin>>tarou>>hanako;
        if (tarou<hanako) {
            hp+=3;
        }else if(hanako<tarou){
            tp+=3;
        }else{
            hp+=1;
            tp+=1;
        }
        
        
        
    }
    cout<<tp<<" "<<hp<<endl;
    return 0;
}


