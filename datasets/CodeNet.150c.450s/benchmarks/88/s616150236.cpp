#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <utility>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <cmath>

#define rep(i,j,k) for(int i=(int)j;i<(int)k;i++)
#define itrep(i,x) for(auto i=(x).begin(); i!=(x).end();i++)
#define Sort(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define vec vector
#define INF (int)1e9
#define INFL 1e18
#define MOD 1000000007
#define pb push_back
#define MP make_pair
#define PI 3.1415926535
typedef long long int ll;
typedef std::pair<int,int> P;
int D=1;
int dx[4]={0,1,0,-1},dy[4]={-1,0,1,0};

using namespace std;

int main(){
    /*int h,w;
    while(cin>>h>>w&&h){
        if(h==1&&w==8&&0){
            cout<<4<<" "<<7<<endl;
            continue;
        }
        int s=h*h+w*w;
        int anss=INF;
        int ansh=INF,answ=INF;
        rep(i,1,151){
            rep(j,i+1,151){
                if(s<i*i+j*j && i*i+j*j<anss){
                    anss=i*i+j*j;
                    ansh=i; answ=j;
                }else if(i*i+j*j==anss){
                    if(h<i&&i<ansh){
                        ansh=i; answ=j;
                    }
                }
            }
        }
        cout<<ansh<<" "<<answ<<endl;
    }*/

    int h, w;
    while(cin >> h >> w && h){
        int area = h*h+w*w;
        int resH = 200, resW = 200, resArea = 10000000;
        for(int i=1;i<=150;i++){
            for(int j=i+1;j<=150;j++){
                int newArea = i*i+j*j;
                if(area > newArea || (area == newArea && i <= h)) continue;
                if(newArea < resArea || (newArea == resArea && i < resH)){
                    resH = i;
                    resW = j;
                    resArea = newArea;
                }
            }
        }
        cout << resH << " " << resW << endl;
    }
    return 0;
}

