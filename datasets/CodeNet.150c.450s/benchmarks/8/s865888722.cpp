#include "bits/stdc++.h"
using namespace std;
int main(){
    int n,i,t,h,l,j;
    cin >> n;
    t=0;h=0;
    string a,b;
    for(i=0;i<n;i++){
        cin >> a >> b;
        l=min(a.length(),b.length());
        for(j=0;j<l;j++){
            if(a.at(j)>b.at(j)){
                t += 3;
                break;
            }
            else if(a.at(j)<b.at(j)){
                h += 3;
                break;
            }
        }
        if(j==l){
            if(a.length()>b.length()) t+=3;
            else if(a.length()<b.length()) h+=3;
            else{
                t++;h++;
            }
        }
    }
    cout << t << " " <<h << endl;
    return 0;
}
