#include <bits/stdc++.h>
using namespace std;

int main() {
        int n , i , x , min;
       while(true){ cin >> n;
    if(n!=0){
        min = 10000000;
        vector<int> v(n,0);
        for(i = 0;i<n;i++){
            cin >> v.at(i);
        }
        for(int j = 0;j<n;j++){
            for(i = 0;i<n;i++){
                if(j!=i){
                    if(v.at(j)>=v.at(i)){
                x = v.at(j)-v.at(i);
                if(x<min) min = x;
            }}
           }   
        }
        cout << min << endl;
    }
else{break;}
  
}
}

