#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n;
    cin >> n;

    int a;
    vector<int> va;
    for(int i=0;i<n;i++){
        cin >> a;
        va.push_back(a);
    }

    for(int i=n-1;i >= 0;i--){
        cout << va[i];
        if (i != 0)
            cout << " ";
    }
    cout << endl;
}
