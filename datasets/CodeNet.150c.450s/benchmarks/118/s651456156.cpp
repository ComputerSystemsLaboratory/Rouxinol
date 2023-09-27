

#include <iostream>
using namespace std;
int main() {
    int n,y,m,d;
    cin >> n;
    while(cin >> y >> m >> d){
        int sum=0;
        if(y%3==1){
            if(m%2==1){sum =(y/3)*590 + (m/2)*39 + d;}
            else{sum = (y/3)*590 + (m/2-1)*39+20 + d;}
        }
        if(y%3==2){
            if(m%2==1){sum =(y/3)*590+195 + (m/2)*39 + d;}
            else{sum = (y/3)*590+195 + (m/2-1)*39+20 + d;}
        }
        if(y%3==0){
            sum =(y/3-1)*590+390 + (m-1)*20 + d;
        }
        cout << 333*590+1 - sum << endl;
    }

    return 0;
}