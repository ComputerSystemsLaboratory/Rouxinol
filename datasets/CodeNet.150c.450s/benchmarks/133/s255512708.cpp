#include <iostream>
#include <vector>
using namespace std;

int main(){

    /*---------*/
    /*  input  */
    /*---------*/

    int D;
    cin >> D;

    int i,j;
    vector<int> c(26+1);
    for( i = 1; i <= 26; i++ ){
        cin >> c[i];
    }

    vector< vector<int> > s(D+1, vector<int>(26+1));
    for( i = 1; i <= D; i++ ){
        for( j = 1; j <= 26; j++ ){
            cin >> s[i][j];
        }
    }

    vector<int> t(365+1);
    for( i = 1; i <= D; i++ ){
        cin >> t[i];
    }
    
    /*--------*/
    /*  calc  */
    /*--------*/

    long long int p = 0;
    int m = 0;
    int d;   // d: 1 --> D(365)
    vector<int> last(26+1);

    for( d = 1; d <= D; d++ ){
        p += s[d][ t[d] ];
        // minus
        // last[]を更新
        last[ t[d] ] = d;
        for( j = 1; j <= 26; j++ ){
            m += c[j] * ( d - last[j] );
        }
        cout << p-m << endl;
    }


       

}
