#include <iostream>
using namespace std;
int main(){
    int num;
    cin>> num;
    int ary[num];
    for(int i=0;i<num;i++){
        cin>>ary[i];
    }

    for(int i=0;i<num;i++){
        cout<<ary[num-i-1];
        if(i!=(num-1)){
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}