#include <iostream>
#include <vector>

using namespace std;

const int MAX = 1000000;
int s[MAX];

void eratos();

int main(int argc, char const *argv[]) {
    int a, d, n, tmp;
    int cnt = 0;
    vector<int> results;

    eratos();
    
    while(1){
        cin>>a>>d>>n;
        if( a == 0 && d == 0 && n == 0 ) break;
        tmp = a;
        cnt = 0;
        while(1){
            if(s[tmp]) cnt++;
            if(cnt==n) break;
            tmp += d;
        }
        results.push_back( tmp );
    }

    for(auto it = results.begin(); it != results.end(); it++){
        cout<<*it<<endl;
    }

    return 0;
}

void eratos(){
    for(int i = 2; i < MAX; i++ ){
        s[i] = 1;
    }

    int j=0;
    int k=2;
    do {
        if (s[k]!=0) {
            j++;
            for (int i=k*k;i<=MAX;i+=k){
                s[i]=0;
            }
        }
        k++;
    } while (k * k<=MAX);
}