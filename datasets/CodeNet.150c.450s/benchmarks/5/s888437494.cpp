#include <iostream>

using namespace std;

int main(){

        int num[100];
        int n;

        cin >> n;

        for(int i = 0; i < n; i++) cin >> num[i];
        for(int j = (n - 1); j >= 0; j--){
                cout << num[j];
                if(j != 0) cout << " ";
        }
        cout << "\n";
        return 0;
}