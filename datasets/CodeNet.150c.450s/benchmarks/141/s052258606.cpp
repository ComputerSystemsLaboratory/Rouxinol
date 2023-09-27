#include<iostream>
#include<vector>
#include<algorithm>
#include<cctype>
#include<utility>
#include<string>
#include<cstdio>

#define REP(n) for(int i = 0;i < n;i++)
#define LLREP(n) for(long long int  i = 0;i < n;i++)
typedef long long int ll;
using namespace std;
#define MAX_A 1000000007


double vector_2nd(double a,double b){

    return b-a;
}



int main(){

    //A(x1,y1) B(x2,y2) C(x3,y3) P(xp,yp)
    double x1,x2,x3,xp,y1,y2,y3,yp;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
        double CA_X,CA_Y;
        double AP_X,AP_Y;
        double BC_X,BC_Y;
        double CP_X,CP_Y;
        double AB_X,AB_Y;
        double BP_X,BP_Y;
        CA_X = vector_2nd(x1,x3);
        CA_Y = vector_2nd(y1,y3);
        AP_X = vector_2nd(xp,x1);
        AP_Y = vector_2nd(yp,y1);
        BC_X = vector_2nd(x3,x2);
        BC_Y = vector_2nd(y3,y2);
        CP_X = vector_2nd(xp,x3);
        CP_Y = vector_2nd(yp,y3);
        AB_X = vector_2nd(x2,x1);
        AB_Y = vector_2nd(y2,y1);
        BP_X = vector_2nd(xp,x2);
        BP_Y = vector_2nd(yp,y2);

        double outer_product_1 = CA_X*AP_Y-CA_Y*AP_X;
        double outer_product_2 = BC_X*CP_Y-BC_Y*CP_X;
        double outer_product_3 = AB_X*BP_Y-AB_Y*BP_X;

        if((outer_product_1 > 0 && outer_product_2 > 0 && outer_product_3 > 0) || (outer_product_1 < 0 && outer_product_2 < 0 && outer_product_3 < 0)){

            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }




        




    }
    return 0;
}
