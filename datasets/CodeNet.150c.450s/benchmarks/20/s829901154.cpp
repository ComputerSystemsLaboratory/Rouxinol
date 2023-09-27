#include <bits/stdc++.h>
using namespace std;
int main(void){
    int S,h,m,s;
    cin>>S;
    h=S/(60*60);
    m=S/60-h*60;
    s=S-(60*60)*h-m*60;
    cout<<h<<":"<<m<<":"<<s<<endl;
}
