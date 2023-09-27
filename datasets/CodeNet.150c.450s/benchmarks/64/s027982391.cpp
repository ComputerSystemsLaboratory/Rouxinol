#include <iostream>
using namespace std;

const int MAX_N = 20;
int a[MAX_N];
int n;
bool make(int i,int sum,int m){
    if(i>n) return false;
    if(sum == m) return true;
    
    
    if(make(i+1,sum+a[i],m)) return true;
    
    if(make(i+1,sum,m)) return true;
    
    return false;
}
int main(int argc, const char * argv[]) {
    int q;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    cin >> q;
    int m[q];
    for(int i=0;i<q;i++)
        cin >> m[i];
    
    for(int i=0;i<q;i++){
        if(make(0,0,m[i]))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    
    return 0;
}