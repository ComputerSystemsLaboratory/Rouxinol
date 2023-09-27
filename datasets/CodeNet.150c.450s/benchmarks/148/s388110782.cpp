#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
   
    int n;
   cin >> n;
 
   int a=0,b=0,c=0,d=0;

    rep(i,n){
          string s;
        cin >> s;
        if(s[0]=='A') a++;
        else if (s[0]=='W') b++;
        else if (s[0]=='T') c++;
        else  d++;
    }

    cout<<"AC x "<<a<<endl<<"WA x "<<b<<endl<<"TLE x "<<c<<endl<<"RE x "<<d<<endl;
 return 0;
}