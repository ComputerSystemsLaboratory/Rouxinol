#include<iostream>

using namespace std;

int main(){
    int n,k;    cin >> n >> k;
    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i+k<n; i++){
                        if(a[i+k] > a[i]){
                                cout << "Yes" << endl;
                        }else{
                                cout << "No" << endl;
                        }
                }

                return 0;
}