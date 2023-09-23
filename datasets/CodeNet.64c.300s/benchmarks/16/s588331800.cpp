#include <iostream>

using namespace std;

int main() {
    int n;
    int max;
    int min;

    cin>>n;
    cin>>min;
    for(int i = 0; i < n-1; i++){
        int r;
        cin>>r;
        int tmp=r-min;
        if(i == 0 || max<tmp){
            max=tmp;
        }
        if(r<min){
            min=r;
        }
    }
    cout<<max<<endl;
    return 0;
}