#include<iostream>
#include<cstring>
typedef long long ll;
using namespace std;
char str[10000000];
int main(void){

    ll n;
    char before[1000];
    char after[1000];

    while(cin>>n,n){
    for(int i=0;i<n;i++){
        cin >> before[i];
        cin >> after[i];
    }
    ll m;
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> str[i];
    }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(str[i]==before[j]){
                    str[i]=after[j];
                    break;
                }
            }
        }
        cout<<str<<endl;
    }
    return 0;
}