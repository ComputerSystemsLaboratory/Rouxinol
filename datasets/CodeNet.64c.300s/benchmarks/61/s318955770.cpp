#include<iostream>
using namespace std;

int main(void){
    int i,j,r,c,tmp,tmp2=0;
    int col[100]={0};
    cin >> r >> c;
    for(i=0;i<r;i++){
        tmp2=0;
        for(j=0;j<c;j++){
            cin >> tmp;
            col[j] += tmp;
            tmp2 += tmp;
            cout << tmp << " ";
        }
        cout << tmp2 << endl;
    }
    tmp=0;
    for(i=0;i<c;i++){
        cout << col[i] << " ";
        tmp += col[i];
    }
    cout << tmp << endl;
    return 0;
}