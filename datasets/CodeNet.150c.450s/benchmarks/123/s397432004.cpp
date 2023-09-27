#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

bool isPrime(int x){
    if(x == 1 || (x > 2 && x % 2 == 0)){
        return false;
    }
    int i = 3, max = (int)sqrt(x) + 1;
    //cout << x << ", " << max << endl;
    while(i < max){
        if(x % i == 0){
            return false;
        }
        i += 2;
    }
    return true;
}
int main(){
    int n, i, x, cnt = 0;
    vector<int> v;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
    vector<int>::iterator ite = v.begin();
    while(ite != v.end()){
        if(isPrime(*ite)){
            /*if(cnt++ != 0){
                cout << " ";
            }
            cout << *ite;
            */
            cnt++;
        }
        ite++;
    }
    cout << cnt <<endl;
    return 0;
}