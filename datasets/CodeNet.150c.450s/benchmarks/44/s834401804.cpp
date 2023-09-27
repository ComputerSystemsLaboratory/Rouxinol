#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int a1, a2, a3, a4;
    int b1, b2, b3, b4;
    while(cin >> a1 >> a2 >> a3 >> a4 >> b1 >> b2 >> b3 >> b4){
        vector<int> a, b;
        a.push_back(a1);
        a.push_back(a2);
        a.push_back(a3);
        a.push_back(a4);
        b.push_back(b1);
        b.push_back(b2);
        b.push_back(b3);
        b.push_back(b4);
        int hit = 0;
        int blow = 0;
        
        for(int i=0;i<4;i++){
            if(a[i] == b[i]){
                hit++;
            } else {
                if(find(a.begin(), a.end(), b[i]) != a.end())blow++;
            }
        }
        
        cout << hit << " " << blow << endl;
    }
    
    return 0;
}