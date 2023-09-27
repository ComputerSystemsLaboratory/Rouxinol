#include <iostream>
using namespace std;
int main(void){
    int n=0,m=0;
    while(cin>>n,n){
        char change[100][2];
        char s;
        for(int i=0;i<n;i++){
            cin >> change[i][0] >> change[i][1];
        }
        cin >> m;
        for(int j=0;j<m;j++){
            cin >> s;
            for(int k=0;k<n;k++){
            
                if(s==change[k][0]){
                s = change[k][1];
                break;
                }
            
            }
            cout << s;
        }
        cout << endl;
    }
    return 0;
}