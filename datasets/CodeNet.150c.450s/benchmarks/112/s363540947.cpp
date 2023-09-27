#include<iostream>
#include<cstring>
typedef long long ll;
using namespace std;
char in[10000000];
char go[10000000];
int main(void){


    ll n;
    char before[1000];
    char after[1000];

    for(;;){
    cin >> n;
    if(n==0)break;
    for(int i=0;i<n;i++){
        cin >> before[i];
        cin >> after[i];
    }
    ll m;
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> in[i];
        go[i]=in[i];

    }



        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(in[i]==before[j]){
                    go[i]=after[j];
                    }



            }
        }




        cout<<go<<endl;


    }
	return 0;
}