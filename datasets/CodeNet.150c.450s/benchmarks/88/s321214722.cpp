#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
struct data{
    int h,w;
    data(int a,int b):h(a),w(b){}
    data(){}
    bool operator<(const data &d)const{
        int v=h*h+w*w;
        int dv=d.h*d.h+d.w*d.w;
        return v<dv||(v==dv&&h<d.h);
    }
};
int main(){
    vector<data>V;
    for(int i=1;i<150;i++){
        for(int j=i+1;j<=150;j++){
            V.push_back(data(i,j));
        }
    }
    sort(V.begin(),V.end());
    int h,w;
    while(scanf("%d%d",&h,&w),h||w){
        data d=*upper_bound(V.begin(),V.end(),data(h,w));
        printf("%d %d\n",d.h,d.w);
    }
    return 0;
}