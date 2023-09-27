////////////////////////////////////////
//ALDS1_9_A:   Complete Binary Tree
////////////////////////////////////////

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

#define NDEBUG //NDEBUG???#include <cassert>???????????????????????????????????´???assert?????????????????????????????????NDEBUG?????????????????????????????????????????????
#include <cassert> //assert


using namespace std;

//???????????°??????TEST????????????????????¬???????????????????????????????????¢????????????
#define TEST //*******************************************************************************************************************************************
//?????????????????¨??§?????\????????????????????????????????°?????????????¨???????????????????dout???????????????????????§???????????¬??????????????????????????????????????????
//??????????????????????????????????????????????????????????§?CPU???????£??????????????????§???TLE?????????????????????????????????????????§????????¨???                           ????????????????????????cerr????????£????????????????????????????????????
#ifdef TEST
#define dout cout
#define din cin
#else
stringstream dummy; //???????????°??????dout?????????????????????????????????
#define dout dummy.str(""); dummy.clear(stringstream::goodbit); dummy //dummy?????????????????????????????????????????¨?????¢?????¢???????????????
//???????????¨??????????????????goodbit?????????????????????????????¨???????????´????????????????????????????????¨?????°?????????????????§???????????????????????????????????? http://d.hatena.ne.jp/linden/20060427/p1
#endif

//?¨??????????????????????????????????????????????????????´??????OUTPUTFILE????????????????????¬???????????????????????????????????¢????????????
//#define OUTPUTFILE "output.txt" //*******************************************************************************************************************************************
#ifdef OUTPUTFILE
#define dout outputfile //??¨????????????TLE????????§?????????dout?????¨??¨??????????????¢????????????????????????????????????????????§????¨????????????´??????????????£??????????????????????¨?????????????????????????????????????????????§?????????????????????
ofstream outputfile(OUTPUTFILE);
#define OutputFilePath "/Users/Nag/Documents/Prgm/Test/DerivedData/Test/Build/Products/Debug/output.txt"
#endif

//?¨??????\???????????????????????????????????????????????´??????INPUTFROMTEXTFILE????????????????????¬???????????????????????????????????¢????????????
//#define INPUTFILE "input.txt" //*******************************************************************************************************************************************
#ifdef INPUTFILE
#define din inputfile
ifstream inputfile(INPUTFILE);
#endif


#define disp(A) dout << #A << " = " << (A) << endl
#define disP(A) dout << setw(3) << (A) << " " // << setw(3) ??????????????\????????????
#define rep(i,a,n) for(int (i)=(a); (i)<(n); (i)++)

#define dispAll(A,n) dout << #A << " = "; rep(j, 0, (n)) {disP(A[j]);} dout << endl

typedef pair<int,int> pii;
typedef vector<int> vi;
typedef unsigned long long ll;

const int INF = 1e9-1;

int completeBinaryTree[251];

int parentOf(int i) {
    return i/2;
}

int leftChildOf(int i) {
    return i*2;
}

int rightChildOf(int i) {
    return i*2+1;
}


int main(){
    int N; cin >> N;
    rep(i,1,N+1) din >> completeBinaryTree[i];
    
//    dispAll(completeBinaryTree, N+1);
    
    string parentKeyStr;
    string leftKeyStr;
    string rightKeyStr;
    ostringstream oss;
    
    rep(i,1,N+1) {
        if(parentOf(i)>0) {
            parentKeyStr = "parent key = ";
            oss << completeBinaryTree[parentOf(i)];
            parentKeyStr += oss.str();
            parentKeyStr += ", ";
            oss.str("");
        } else parentKeyStr = "";
        
        if(leftChildOf(i)<=N) {
            leftKeyStr = "left key = ";
            oss << completeBinaryTree[leftChildOf(i)];
            leftKeyStr += oss.str();
            leftKeyStr += ", ";
            oss.str("");
        } else leftKeyStr = "";
        
        if(rightChildOf(i)<=N) {
            rightKeyStr = "right key = ";
            oss << completeBinaryTree[rightChildOf(i)];
            rightKeyStr += oss.str();
            rightKeyStr += ", ";
            oss.str("");
        } else rightKeyStr = "";
        
        dout << "node " << i << ": key = " << completeBinaryTree[i] << ", "
            << parentKeyStr << leftKeyStr << rightKeyStr << endl;
    }
    
    
#ifdef INPUTFILE
    inputfile.close();
#endif
    
#ifdef OUTPUTFILE
    outputfile.close();
    cout << "\"" << OutputFilePath << "\"" << endl;
#endif
    
    return 0;
}