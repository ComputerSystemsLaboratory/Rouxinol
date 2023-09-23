#include <iostream>
using namespace std;

int main() {
    int s,t;
    cin>>s>>t;
    if (s>t){
        cout<<"a > b"<<endl;
    } else if (s<t){
        cout<<"a < b"<<endl;
    } else {
        cout<<"a == b"<<endl;
    }
    return 0;
}
