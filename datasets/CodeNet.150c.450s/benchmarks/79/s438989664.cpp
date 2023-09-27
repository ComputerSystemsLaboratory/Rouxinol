#include <iostream>

using namespace std;

int main(){
    int n,r;

    while (cin>>n>>r && n>0 && r>0){
        int list[50];

        for (int j = 0; j < n; ++j) {
            list[j]=n-j;
        }
        for (int i = 0; i < r; ++i) {
            int p,c;
            int tmp[50];

            cin>>p>>c;
            for (int j = 0; j < c; ++j) {
                tmp[j]=list[p+j-1];
            }
            for (int k = 0; k < p-1; ++k) {
                list[p+c-k-2]=list[p-k-2];
            }
            for (int l = 0; l < c; ++l) {
                list[l]=tmp[l];
            }
        }
        cout<<list[0]<<endl;
    }
    return 0;
}