#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

#define FOR(i, a) for(int i=0;i<(int)a;++i)
typedef long long ll;
using namespace std;

void solver() {
    int a,b;
    cin>>a>>b;
    if(a<b){
        cout<<"a < b"<<endl;
    }else if(a==b){
        cout<<"a == b"<<endl;
    }else{
        cout<<"a > b"<<endl;
    }
}

int main() {
    solver();
    return 0;
}