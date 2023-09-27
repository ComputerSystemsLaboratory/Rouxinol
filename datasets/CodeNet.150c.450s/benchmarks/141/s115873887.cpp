#include<stdio.h>
/// http://www5d.biglobe.ne.jp/~tomoya03/shtml/algorithm/Hougan.htm
/// http://www.sousakuba.com/Programming/gs_hittest_point_triangle.html
struct Vector2D{
    double x;
    double y;
};

Vector2D sub(const Vector2D a, const Vector2D b){
    Vector2D ret;
    ret.x = a.x-b.x;
    ret.y = a.y-b.y;
    return ret;
}

bool hittest_point(Vector2D A, Vector2D B, Vector2D C, Vector2D P){
    Vector2D AB = sub(B, A);
    Vector2D BP = sub(P, B);

    Vector2D BC = sub(C, B);
    Vector2D CP = sub(P, C);

    Vector2D CA = sub(A, C);
    Vector2D AP = sub(P, A);

    // Cross Product
    double c1 = AB.x * BP.y - AB.y * BP.x;
    double c2 = BC.x * CP.y - BC.y * CP.x;
    double c3 = CA.x * AP.y - CA.y * AP.x;

    if((c1>=0 && c2>=0 && c3 >=0) || (c1<0 && c2 <0 && c3<0)){
        return true;
    }else{
        return false;
    }
}

int main(){
    Vector2D A, B, C, P;
    while(~scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &A.x, &A.y,&B.x, &B.y, &C.x, &C.y,&P.x, &P.y)){
        if(hittest_point(A, B,C,P)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}

