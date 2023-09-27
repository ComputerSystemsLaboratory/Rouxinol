#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    string t, h;
    int st=0, sh=0;
    for(int i=0;i<n;i++){
        cin >> t >> h;
        if(t>h){
            st += 3;
        }else if(t<h){
            sh += 3;
        }else{
            st += 1;
            sh += 1;
        }
    }
    cout << st << " " << sh << endl;
}
