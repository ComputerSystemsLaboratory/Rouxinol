#include<iostream>
using namespace std;
int main(){

    int m[10], temp;
    for(int i = 0; i < 10; i++)
        cin >> m[i];

    for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 10; j++){
            if(m[i] < m[j]){
                temp = m[i];
                m[i] = m[j];
                m[j] = temp;
            }
        }
    cout << m[i] << endl;
    }
}