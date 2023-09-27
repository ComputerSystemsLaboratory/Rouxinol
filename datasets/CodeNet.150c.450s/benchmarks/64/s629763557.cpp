#include <iostream>
using namespace std;

int n;
int a[20];

bool rep(int ans,int val,int pos){

    if(ans == val){
        return true;
    }
    if(pos == n){
        return false;
    }

    return rep(ans,val,pos+1) || rep(ans,val+a[pos],pos+1);

}

int main() {

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int q;

    cin >> q;

    int m;

    for(int i=0;i<q;i++){
        cin >> m;
        if(rep(m,0,0)){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }

    return 0;
}