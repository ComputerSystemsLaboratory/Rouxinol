#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main(){
    vector<int> vc;
    int x;
    for(int i=0;i<5;i++){
        cin >> x;
        vc.push_back(x);
    }
    sort(vc.rbegin(),vc.rend());
    for(int i=0;i<vc.size();i++){
        if(i)   cout << " " << vc[i];
        else    cout << vc[i];
    }
    cout << endl;
    return 0;
}
