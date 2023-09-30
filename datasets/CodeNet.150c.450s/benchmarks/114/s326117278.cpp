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

//#define NDEBUG //NDEBUG???#include <cassert>???????????????????????????????????´???assert?????????????????????????????????NDEBUG?????????????????????????????????????????????
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


#define disp(A) dout << #A << " = " << setw(3) << (A) << endl
#define disP(A) dout << setw(3) << (A) << " " // << setw(3) ??????????????\????????????
#define rep(i,a,n) for(int (i)=(a); (i)<(n); (i)++)
#define dispAll(A,n) dout << #A << " = "; rep(j, 0, (n)) {disP(A[j]);} dout << endl

typedef pair<int,int> pii;
typedef vector<int> vi;
typedef long long ll;


const int INF = 2e9-1;
const ll INFLL = 1e18-999;

#define N_MAX 100 //num of vertex
//#define M_MAX 10000 //mum of edge

int N;
ll matrix[N_MAX][N_MAX];

ll minCostTo[N_MAX]; //?????¨?§??????????MST????????????i??????????°???????????????¨???????????????Daijkstra?????§??´??°????????????
vi vertices; //??????MST????????????????????????????????¨???






int main() {
    
    //read input data and initialize
    din >> N;
    int cost;
    rep(i,0,N) {
        vertices.push_back(i); //??¨????????????????????????
        minCostTo[i] = INFLL; //??¨????????????????????????????????§??§?????????
        
        rep(j,0,N) {
            din >> cost;
            matrix[i][j] = (cost==-1 ? INF : cost); //??????????????¨??????????????????INF??¨??????
        }
    }
    
//    //test display
//    rep(i,0,N) {
//        rep(j,0,N) {
//            dout << matrix[i][j] << " ";
//        }
//        dout << endl;
//    }
//    dout << endl;

    
    
    
    //????????????
    ll ans = 0;
    int x; //????????????????????????MST?????????????????????
    minCostTo[0] = 0; //x=0???????§????????????????0??§?????????
    while( !vertices.empty() ) {
//        dout << "---------------------\n";
        
        //?????????????????????????????????????????°????????????????°??????????x?????¢?´¢
        x = vertices.front();
        vi::iterator itr_to_x = vertices.begin();
        for( vi::iterator itr=vertices.begin(); itr!=vertices.end(); itr++) {
            if( minCostTo[x] > minCostTo[*itr] ) {
                x = *itr;
                itr_to_x = itr;
            }
        }
        
//        dout << "add vertex " << x << endl;
        
        //MST?????????x??????????????????????????????????????????????????????x????????????????????§???????°?????????´??°??§?????????????????§??????
        vertices.erase(itr_to_x);
        ans += minCostTo[x];
        minCostTo[x] = 0; //MST????????????????????????????????????0?????????
        
        for( vi::iterator itr=vertices.begin(); itr!=vertices.end(); itr++) {
            if( minCostTo[*itr] > minCostTo[x] + matrix[x][*itr] ) {
                minCostTo[*itr] = minCostTo[x] + matrix[x][*itr];
            }
        }
        
//        //test display
//        dispAll(vertices, vertices.size());
//        
//        rep(i,0,N) {
//            disP(i); disp(minCostTo[i]);
//        }
//        
//        disp(ans);
    }
    
    
    
//    output
    dout << ans << endl;
    
    
    
#ifdef INPUTFILE
    inputfile.close();
#endif
    
#ifdef OUTPUTFILE
    outputfile.close();
    cout << "\"" << OutputFilePath << "\"" << endl;
#endif
    
    return 0;
}