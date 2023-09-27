#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    string s1,s2;
    int x = 0, y = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s1 >> s2;
        if(s1>s2) x=x+3;
        else if(s2>s1) y=y+3;
        else x++,y++;
    }
    cout << x << " " << y << endl;
    return 0;
}
