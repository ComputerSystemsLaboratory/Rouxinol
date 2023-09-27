#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int n;
    cin >> n;
    string t, h;
    int tpoint=0, hpoint=0;
    for(int i=0; i<n; i++){
        cin >> t >> h;
        if(t<h){
            hpoint+=3;
        }
        else if(t>h){
            tpoint+=3;
        }
        else{
            tpoint+=1;
            hpoint+=1;
        }
    }
    cout << tpoint << " " << hpoint << endl;
    return 0;
}