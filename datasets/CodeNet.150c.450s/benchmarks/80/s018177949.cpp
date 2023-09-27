#include<iostream>
using namespace std;

int main(){
    int s, t;
    int n;
    s = 0;
    t = 0;
    for(int i=0;i<4;i++){
        cin >> n;
        s += n;
    }
    for(int i=0;i<4;i++){
        cin >> n;
        t += n;
    }
    if(s > t){
        cout << s << endl;
    }else{
        cout << t << endl;
    }
}