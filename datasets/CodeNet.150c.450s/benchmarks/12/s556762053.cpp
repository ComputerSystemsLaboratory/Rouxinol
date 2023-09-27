#include <iostream>
#define FOR(i,k,n) for (int (i)=(k); (i)<(n); ++(i))
#define REP(i,n) FOR(i,0,n)
using namespace std;

int main(){
    int h;
    cin >> h;
    int a[h];
    REP(i,h){
        cin >> a[i];
    }
    FOR(i,1,h+1){
        cout << "node " << i << ": ";
        cout << "key = " << a[i-1] << ", ";
        if(i/2){
            cout << "parent key = " << a[i/2-1] << ", ";
        }
        if(2*i <= h){
            cout << "left key = " << a[2*i-1] << ", ";
        }
        if(2*i+1 <= h){
            cout << "right key = " << a[2*i] << ", ";
        }
        cout << endl;
    }
  return 0;
}