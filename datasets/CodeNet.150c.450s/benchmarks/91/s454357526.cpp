#include <iostream>
#include <vector>
using namespace std;

bool a[1000001] ;
int main(){
    a[0] = 1 ;
    a[1] = 1 ;
    vector<int> v ;
    for(int i=2;i<=1000000;i++){
        if ( a[i] == 0 ){
            v.push_back(i);
            for(int j=i+i;j<=1000000;j+=i){
                a[j] = 1 ;
            }
        }
    }

    int x ;
    while(cin >> x){
        long long c = 0 ;
        for(int i=0;i<v.size();i++){
            if ( v[i] > x ) break;
            c++;
        }
        cout << c << endl;
    }



    return 0 ;
}

