#include <iostream>
#include <string>
using namespace std;

int main(){
    int q;
    cin >> q;
    for(int k = 0; k < q; k++){
        string s1, s2;
        cin >> s1;
        cin >> s2;
        int arr[s1.length()+1][s2.length()+1];
        for(int i = 0; i <= s1.length(); i++){
            for(int j = 0; j <= s2.length(); j++){
                if(i == 0 || j == 0){
                    arr[i][j] = 0;
                }else{
                    if(s1[i-1] == s2[j-1])
                        arr[i][j] = arr[i-1][j-1] + 1;
                    else
                        arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
                }
            }
        }
        //debug
        /*
        for(int j = 0; j <= s2.length(); j++){
            for(int i = 0; i <= s1.length(); i++){
                cout << arr[i][j];
            }
            cout << endl;
        }
        */
        cout << arr[s1.length()][s2.length()] << endl;
    }
}