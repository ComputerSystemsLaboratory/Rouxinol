#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;


int main(){
    int taro[100], hanako[100];
    
    while(1){
        int n,m;
        cin >> n >> m;
        if(n==0 && m==0) break;

        int total=0, total_taro=0;
        for(int i=0; i<n; i++){
            cin >> taro[i];
            total += taro[i];
        }
        total_taro = total;
        for(int i=0; i<m; i++){
            cin >> hanako[i];
            total += hanako[i];
        }

        if(total%2 !=0){
            cout << -1 << endl;
            continue;
        }

        int diff = total_taro - total/2;
        int min=INT_MAX, a,b;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(taro[i]-hanako[j] == diff){
                    if(taro[i]+hanako[j] < min){
                        a = taro[i];
                        b = hanako[j];
                        min = a+b;
                    }
                }
            }
        }

        if(min!=INT_MAX){
            cout << a << " " << b << endl;
        }else{
            cout << -1 << endl;
        }
    }
    
    return 0;
}