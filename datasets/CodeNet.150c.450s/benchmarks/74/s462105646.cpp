#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main(){
    int kosuto[100000];
    int n,m;
    cin >> n >> m;
    int num[m];
    for(int i=0;i<m;i++){
    cin >> num[i];
    kosuto[num[i]] = 1;
    }
    int flag = 1;
    while(flag){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        if(kosuto[i] > 0 ){
            if(kosuto[i+num[j]] == 0) kosuto[i+num[j]] = kosuto[i]+1;
            else{kosuto[i+num[j]] = min(kosuto[i+num[j]],kosuto[i]+1);
            if(i+num[j] == n) flag = 0;
            }
        }
        }
    }
    }
    cout << kosuto[n]<< endl;
    return 0;
}