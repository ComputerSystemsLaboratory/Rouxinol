#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

string isTriangle(int a[3]);

int main(){
    int n;
    int a[3];
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> a[0] >> a[1] >> a[2];
        cout << isTriangle(a) << endl;  
    }
}
string isTriangle(int a[3]){
    sort(a, a+3, greater<int>());
    if(a[1]*a[1] + a[2]*a[2] == a[0]*a[0]){
        return "YES";
    }
    else{
        return "NO";
    }
}