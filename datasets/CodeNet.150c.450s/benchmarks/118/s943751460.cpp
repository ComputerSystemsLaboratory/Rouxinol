#include <iostream>
#include <vector>
using namespace std;


// A
bool isCheck(int y){
    return y % 3 == 0;
}

int main(){
    int n, i,j,k,l,y,m,d;

    cin >> n;
    for(i=0; i<n; i++){
        cin >> y >> m >> d;
        
        int res = 0;
        for(j=y; j<1000; j++){ // year
            for(k=(j == y ? m : 1); k<=10; k++){ // month
                int t = 19 + (k % 2 == 1 || j % 3 == 0 ? 1 : 0);
                res += t - (j == y && k == m ? d : 1) + 1;
            }
        }
        cout << res << endl;
    }

    return 0;
}