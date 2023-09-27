#include <iostream>
#include <algorithm> // next_permutation
#include <iomanip>
#include <cmath>
#include <vector>
#include <sstream>
#include <string>
#include <cstdio>
#include <stack>
#include <queue>
#include <list>
#include <numeric> //accumulate
//#include <unordered_map> //???????????\??¢??°
#include <fstream> //ifstream, ofstream

#define NDEBUG //NDEBUG??????????????????????????´???assert?????????????????????????????????NDEBUG????????????????????¨
#include <cassert> //assert


using namespace std;

//???????????°??????TEST????????????????????¬???????????????????????????????????¢????????????
#define TEST //*******************************************************************************************************************************************
//?????????????????¨??§?????\????????????????????????????????°?????????????¨???????????????????dout???????????????????????§???????????¬??????????????????????????????????????????
//??????????????????????????????????????????????????????????§?CPU???????£??????????????????§???TLE?????????????????????????????????????????§????????¨???                           ????????????????????????cerr????????£????????????????????????????????????
#ifdef TEST
#define dout cout
#else
stringstream dummy; //???????????°??????dout?????????????????????????????????
#define dout dummy.str(""); dummy.clear(stringstream::goodbit); dummy //dummy?????????????????????????????????????????¨?????¢?????¢???????????????
//???????????¨??????????????????goodbit?????????????????????????????¨???????????´????????????????????????????????¨?????°?????????????????§???????????????????????????????????? http://d.hatena.ne.jp/linden/20060427/p1
#endif

//?¨??????????????????????????????????????????????????????´??????OUTPUT2TEXTFILE????????????????????¬???????????????????????????????????¢????????????
//#define OUTPUT2TEXTFILE //*******************************************************************************************************************************************
#ifdef OUTPUT2TEXTFILE
#define dout outputfile //??¨????????????TLE????????§?????????dout?????¨??¨??????????????¢????????????????????????????????????????????§????¨????????????´??????????????£??????????????????????¨?????????????????????????????????????????????§?????????????????????
//TEST??????????????????????????¨???outputfile??????????????????????????????
#define OUTPUTFILENAME "output.txt"
ofstream outputfile(OUTPUTFILENAME);
#define OutputFilePath "/Users/Nag/Documents/Prgm/Test/DerivedData/Test/Build/Products/Debug/output.txt"
#endif

#define disp(A) dout << #A << " = " << (A) << endl
#define disP(A) dout << setw(3) << (A) << " " // << setw(3) ??????????????\????????????
#define rep(i,a,n) for(int (i)=(a); (i)<(n); (i)++)

#define dispAll(A,n) dout << #A << " = "; rep(j, 0, (n)) {disP(A[j]);} dout << endl

typedef vector<int> vi;
const int INF = 999999;
int M; //?????????????¨?????????°
vi c; //?????????????????¢
//int dp[20][50001];
//int dq[20][50001];
//
//int recursive(int i, int j) { //i???????????§????????????????????£??????j??????????????¨?????????????????°???????°????
//    
//    assert( 0<=i && i<20 );
//    assert( 0<=j && j<50000 );
//    
//    int result;
//    
//    if( dq[i][j] != INF ) {
//        result = dq[i][j];
//    }
//    else if( i==0 ) {
//        result = j;
//    }
//    else if( j<c[i] ) {
//        result = recursive(i-1, j);
//    }
//    else {
//        result = min(
//            recursive(i-1, j), //i???????????????????????????????????´???
//            recursive(i, j-c[i]) + 1 //i?????????????????????1???????????´??? (??????????????°????????????????????????i??????????????????????????°???????????´???????¶???????????????????) ****** POINT!!
//        );
//    }
//    
//    
//    dq[i][j] = result;
//
////    disp(i);
////    disp(j);
////    dout << "  i c[i]    j = ";
////    rep(i,0,15+1) disP(i);
////    dout << endl;
////    rep(i,0,M) {
////        disP(i); disP(c[i]); dispAll(dq[i], 15+1);
////    }
////    dout << "-----------------------------------------------------------------------------------------------dq\n";
//    
//    
//    return result;
//}




int main(){
    int yen;
    cin >> yen >> M;
    
    int cc;
    rep(i,0,M) {
        cin >> cc;
        c.push_back(cc);
    }
    
//    rep(i,0,20) {
//        rep(j,0,50001) {
////            dp[i][j] = INF;
//            dq[i][j] = INF;
//        }
//    }

    
//    rep(j,0,50001) {
//        dp[0][j] = j;
//    }

//    dout << "initial dp\n";
//    dout << "  i c[i]    j = ";
//    rep(i,0,yen+1) disP(i);
//    dout << endl;
//    rep(i,0,M) {
//        disP(i); disP(c[i]); dispAll(dp[i], yen+1);
//    }
//    dout << "-----------------------------------------------------------------------------------------------\n";
    
    
//    rep(j,0,yen+1) {
//        dp[0][j] = j;
//    }
//    
//    rep(i,1,M) {
//        rep(j,0,yen+1) {
//            
//            if( j<c[i] ) {
//                dp[i][j] = dp[i-1][j];
//            } else {
//                dp[i][j] = min( dp[i-1][j], dp[i][j-c[i]]+1 );
//            }
//            
////            disp(i);
////            disp(j);
////            dout << "  i c[i]    j = ";
////            rep(i,0,15+1) disP(i);
////            dout << endl;
////            rep(i,0,M) {
////                disP(i); disP(c[i]); dispAll(dp[i], 15+1);
////            }
////            dout << "-----------------------------------------------------------------------------------------------\n";
//        }
//    }
    
//    dout << "final dp\n";
//    dout << "  i c[i]    j = ";
//    rep(i,0,yen+1) disP(i);
//    dout << endl;
//    rep(i,0,M) {
//        disP(i); disP(c[i]); dispAll(dp[i], yen+1);
//    }
//    dout << "-----------------------------------------------------------------------------------------------\n";
    
    
    
    
    int T[50001];
    
    rep(j,0,yen+1) {
        T[j] = INF;
    }
    T[0] = 0;
    
        rep(i,0,M) {
            rep(j,c[i],yen+1) {
    
                    T[j] = min( T[j], T[j-c[i]]+1 );
                
    
//                disp(i);
//                disp(j);
//                dout << "j = ";
//                rep(i,0,yen+1) disP(i);
//                dout << endl;
//    dispAll(T, yen+1);
//                dout << "-----------------------------------------------------------------------------------------------\n";
            }
        }

//    dispAll(T, yen+1);
    
    dout << T[yen] << endl;
    
    
//    dout << dp[M-1][yen] << endl;
    
//    dout << recursive(M-1, yen) << endl;
    
#ifdef OUTPUT2TEXTFILE
    outputfile.close();
    cout << "\"" << OutputFilePath << "\"" << endl;
#endif
    
    return 0;
}