#include<iostream>
using namespace std;
int main(){
    int a,b,c,j;
    j =0;
    cin >> a >> b >> c;
    for(int i = 0;i <= b-a;i++){
        int n = a + i;
        if(c % n == 0){
            j = j + 1;
        }
    }
    cout << j << endl;
}
