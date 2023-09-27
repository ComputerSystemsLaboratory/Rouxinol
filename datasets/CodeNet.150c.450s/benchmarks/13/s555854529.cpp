#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    string a, a1, b;
    long len_a1, len_b;
    int i, j;
    int k=0;
 
    cin >> a >> b;
    
    a1 = a + a;
    len_a1 = a1.length();
    len_b = b.length();
    
    for (j = 0; j < len_a1 ; j++){
        if (b[0] == a1[j]){
            if (b == a1.substr(j,len_b)){
                k=1;
            }
        }
    }
    
    if (k==1?cout<<"Yes":cout<<"No")
    cout << endl;
    
    return 0;
}