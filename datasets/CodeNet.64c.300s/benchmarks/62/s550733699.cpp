#include<iostream>
using namespace std;

int main(){
    int n, m, a;
    cin >> n >>m;
    int numbers_1[n][m];
    int numbers_2[m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a;
            numbers_1[i][j] = a;
        }
    }
    for(int i=0;i<m;i++){
        cin >> a;
        numbers_2[i]=a;
    }
    for(int i=0;i<n;i++){
        int volume=0;
        for(int j=0;j<m;j++){
            volume += numbers_1[i][j]*numbers_2[j];
        }
        cout << volume << endl;
    }
    return 0;
}
