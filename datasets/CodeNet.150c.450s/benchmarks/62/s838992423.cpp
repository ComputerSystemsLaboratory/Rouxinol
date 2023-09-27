#include <iostream>

using namespace std;

int main(){
    int i,j,temp;
    int n=3;
    int s[100000];
    
    for(i=0; i<n; i++){
    cin >> s[i];
    }
    
    for (i=0; i<n; ++i) {
        for (j=i+1; j<n; ++j) {
            if (s[i] > s[j]) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    for (i=0; i<n; i++){
        if(i<2){
        cout << s[i] <<" ";
        }else{
        cout << s[i] << endl;
        }
    }
    return 0;
}