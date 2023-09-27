#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int r[n];
    for(int i=0;i<n;i++){
        cin >> r[i];
    }

    int a = 0;
    int ma = -1000000000;
    for(int j=n-1;j>=0;j--){
        if(r[j] > a){
            a = r[j];
            for(int i=j-1;i>=0;i--){
                if(a - r[i] > ma){
                    ma = -1000000000;
                    //cout << a << " - "  << r[i] << endl;
                    ma = a-r[i];
                }
            }
        }
    }
    cout << ma << endl;
}