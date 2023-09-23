#include <iostream>
#include <algorithm>
using namespace std;

int pow(int i){return i*i;}

int main(){
    int num;
    cin >> num;
    int a[3];
    for(int i=0;i<num;i++){
        cin >> a[0] >> a[1] >> a[2];
        sort(a,a+3,greater<int>());
        if(pow(a[0])==pow(a[1])+pow(a[2]))cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}