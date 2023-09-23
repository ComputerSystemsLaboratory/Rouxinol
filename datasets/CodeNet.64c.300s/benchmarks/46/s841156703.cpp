#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb push_back


int a,d,n;
bool era[10000000]={false};


void makeERA(){
    for(int i=2;i<1000001;i++){
        if(era[i]!=true)continue;
        for(int j=2;;j++){
            if(i*j<=1000000)
                era[i*j]=false;
            else break;
        }
    }
    era[2]=true;
}



int main(){
    rep(i,10000000)era[i]=true;
    era[0]=false;era[1]=false;
    makeERA();
    
    while(cin>>a>>d>>n){
        if(a==0 && d==0 && n==0)break;
        

        int c=0;
        for(int i=0;;i++){
            if(era[a+i*d]){c++;}
            if(c==n){
                cout<<a+i*d<<endl;
                break;
            }
        }
    }
    return 0;
}