#include <iostream>
using namespace std;
int main(){
    int d;
    while(cin >> d){
        int n = 600/d;
        int sum=0;
        for(int i=1;i<n;i++){
            sum+=d*(i*d)*(i*d);
        }
        cout << sum << endl;
    }
}