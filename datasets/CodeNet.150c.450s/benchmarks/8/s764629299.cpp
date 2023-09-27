#include<iostream>
#include<string>

using namespace std;
int main(){
    int n,p1=0,p2=0;
    string s1,s2;
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> s1>> s2;
        if(s1 > s2){
            p1 += 3;
        } else if( s1 < s2 ){
            p2 += 3;
        } else{
            p1 ++;p2++;
        }
    }
    cout << p1  << ' ' << p2 << endl;
}
