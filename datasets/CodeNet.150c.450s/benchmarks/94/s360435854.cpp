#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int v[n];
    for(int i=0;i<n;i++) cin >> v[i];

    int count=0;

    bool flag = 1;
    while(flag){
        flag = 0;
        for(int j=n-1;j>=1;j--){
            if(v[j] < v[j-1]){
                int tmp = v[j];
                v[j] = v[j-1];
                v[j-1] = tmp;
                flag = 1;
                count++;
            }
        }
    }
    for(int i=0;i<n-1;i++) cout << v[i] << " ";
    cout << v[n-1] << endl;
    cout << count << endl;
}