////////////////////////////////////////
//ALDS1_12_A:   Minimum Spanning Tree
//????????§??????????????±??£?????????????§£(?´?????????????????§????)??????????????¢??°?????£????????????????????????
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
typedef unsigned long long ll;


const int INF = 2e9-1;

#define N_MAX 100 //num of vertex
//#define M_MAX 10000 //mum of edge

int N;
int matrix[N_MAX][N_MAX];

vector< pair< int, pii > > edge;


int color[N_MAX]; //????????¨???????±?????????????vertex???????????°?????§???????????????????´?????????????????§????
#define isSame(x,y) (find(x)==find(y))
#define unite(x,y) color[find(x)] = find(y)
int find(int x) {
    if( color[x]==x ) return x;
    return color[x] = find( color[x] );
}





int main() {
    
    //read input data
    din >> N;
    rep(i,0,N) {
        rep(j,0,N) {
            din >> matrix[i][j];
        }
    }
    
    //construct edge data
    //matrix???????????????????????????????????????
    rep(i,0,N) {
        rep(j,i+1,N) {
            if( matrix[i][j] != -1)
                edge.push_back(make_pair(matrix[i][j], make_pair(i, j)));
        }
    }
    
    //??????????????±???????????????????????§??????????????????
    sort(edge.begin(), edge.end());
    
    
    //???vertex????????????????????????
    rep(i,0,N) color[i] = i;
    
    
    //??????????????????
    ll minCost = 0;
    while( !edge.empty() ) {
//        dout << "----------------------\n";
        
        pair< int, pii > e = edge.front(); //?????????????°???????e?????????
        
        int cost = e.first;
        int v1 = e.second.first; //???e?????????v1??¨v2?????\?¶?????????????
        int v2 = e.second.second;
        
//        //test display
//        dout << "cost=" << cost << " : " << v1 << "--" << v2 << endl;
//        disp(isSame(v1, v2));
        
        
        if( !isSame(v1, v2) ) { //v1??¨v2???????????\?????°????????????????±???????????????°??????e????????¨??????v1??¨v2?????\?¶???????????????§???????????°??????????????£?????´?????????e??????????????¨???????????§????????????????????§NG
//            dout << "?????????????????¨!!\n";
            
            minCost += cost;
            unite(v1, v2);
        }
        
//        //test display
//        rep(i,0,N) {
//            disP(i); disp(color[i]);
//        }
//        disp(minCost);
        
        
            
        edge.erase(edge.begin());
    }
    
    
    
    //output
    dout << minCost << endl;
   
    
    
    
#ifdef INPUTFILE
    inputfile.close();
#endif
    
#ifdef OUTPUTFILE
    outputfile.close();
    cout << "\"" << OutputFilePath << "\"" << endl;
#endif
    
    return 0;
}