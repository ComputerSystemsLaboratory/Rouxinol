#include <iostream>

using namespace std;

int main() {
    int n;
    int r[200000];
    int max;
    int min;

    cin>>n;
    cin>>min;
    for(int i = 0; i < n-1; i++){
        cin>>r[i];
    }
    for(int i = 0; i < n-1; i++){
        int tmp=r[i]-min;
        if(i == 0 || max<tmp){
            max=tmp;
        }
        if(r[i]<min){
            min=r[i];
        }
    }
    cout<<max<<endl;
    return 0;
}