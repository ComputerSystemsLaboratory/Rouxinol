//
//  practise.h
//  c++practise
//
//  Created by Ubnit04 on 2015/06/10.
//
//

#include <iostream>
#include <math.h>

using namespace std;

//float getSquare(float x1, float y1, float x2, float y2, float x3, float y3)
//{
//    float xAB, yAB;
//    float xBC, yBC;
//
//    xAB = x2 - x1;
//    yAB = y2 - y1;
//
//    xBC = x3 - x2;
//    yBC = y3 - y2;
//    
//    return fabs((xAB * yBC - yAB * xBC) / 2.0f); //square of tri-angle
//    
//}
//
//void isIn()
//{
//    float x1, y1;
//    float x2, y2;
//    float x3, y3;
//    float xp, yp;
//    
//    float sABC, sABP, sACP, sBCP;
//    
//    while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp)
//    {
//        sABC = getSquare(x1, y1, x2, y2, x3, y3);
//        sABP = getSquare(x1, y1, x2, y2, xp, yp);
//        sBCP = getSquare(x2, y2, x3, y3, xp, yp);
//        sACP = getSquare(x1, y1, x3, y3, xp, yp);
//        
//        if((sABC > 0) && (sBCP > 0) && (sACP > 0))
//        {
//            if (sABC == sABP + sACP + sBCP) //if p is including triangle this should be worked
//            {
//                cout<<"YES"<<endl;
//            }
//            else if (sABC < sABP + sACP + sBCP)
//            {
//                cout<<"NO"<<endl;
//            }
//        }
//    }
//    
//    return;
//}

void isIn()
{
    float x1, y1;
    float x2, y2;
    float x3, y3;
    float xp, yp;
    
    float a, b, c;
    
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp)
    {
        a = (x3 - x2)*(yp - y2) - (y3 - y2)*(xp - x2);
        b = (x1 - x3)*(yp - y3) - (y1 - y3)*(xp - x3);
        c = (x2 - x1)*(yp - y1) - (y2 - y1)*(xp - x1);
        
        if((a >= 0 && b  >= 0 && c >= 0) || (a <= 0 && b <= 0 && c <= 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    isIn();
    return 0;
}