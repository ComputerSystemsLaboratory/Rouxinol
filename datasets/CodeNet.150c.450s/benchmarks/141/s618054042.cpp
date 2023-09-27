#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

typedef struct{
    double x;
    double y;
}vec;
vec makeVec(vec p,vec q){
    vec r;
    r.x=q.x-p.x;
    r.y=q.y-p.y;
    return r;
}

double crossZe(vec p,vec q){
    if(p.x*q.y-p.y*q.x==0.0) return 0.0;
    return (p.x*q.y-p.y*q.x)/fabs(p.x*q.y-p.y*q.x);
}

bool Tri(vec p[3],vec q[3]){
    double c,d;
    c = crossZe(p[0],q[0]);
    if(c==0) return false;
    for(int i=1;i<3;i++){
        d=crossZe(p[i],q[i]);
        if(c!=d||d==0.0) return false;
    }
    return true;
}
int main(int argc, const char * argv[]) {
    vec p[3],q,r[3],rq[3];
    while(cin >> p[0].x >> p[0].y >> p[1].x >> p[1].y >> p[2].x >> p[2].y){
        cin >> q.x >> q.y;
        r[0]=makeVec(p[0],p[1]);
        r[1]=makeVec(p[1],p[2]);
        r[2]=makeVec(p[2],p[0]);
        rq[0]=makeVec(q,p[1]);
        rq[1]=makeVec(q,p[2]);
        rq[2]=makeVec(q,p[0]);
        if(Tri(r,rq)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}