////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// ?????¢
// XCode??§???EOF??\??????Ctrl+D
// ?\???Alt+\
// ans???????§?INT?????????2,147,483,647????¶????????????¨??????????????§long long?????£???????????????????????????
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////
//
////////////////////////////////////////

//#define debug //*******************************************************************************************************************************************
#ifdef debug
#include <chrono>
#endif

#include <iostream>
#include <algorithm> // next_permutation
#include <iomanip>
#include <cmath>
#include <vector>
#include <sstream>
#include <string>
#include <cstring> //memcpy
#include <cstdio>
#include <stack>
#include <queue>
#include <list>
#include <numeric> //accumulate
//#include <map>
//#include <unordered_map> //hash func.
#include <fstream> //ifstream, ofstream
#include <iterator> //insert_iterator::inserter


//#define NDEBUG //If NDEBUG is defined before #include <cassert>, assert will be ignored. You had better define NDEBUG when u submit the code.
#include <cassert> //assert

using namespace std;


#define dout cout
//If u wanna output to a text file instead of standard output, plz define OUTPUTFILE.
//#define OUTPUTFILE "output.txt" //*******************************************************************************************************************************************
#ifdef OUTPUTFILE
#define dout outputfile
ofstream outputfile(OUTPUTFILE);
#define OutputFilePath "/Users/Nag/Documents/Prgm/Test/DerivedData/Test/Build/Products/Debug/output.txt"
#endif


#define din cin
//If u wanna input from a text file instead of standard input, plz define INPUTFROMTEXTFILE???.
//#define INPUTFILE "input.txt" //*******************************************************************************************************************************************
#ifdef INPUTFILE
#define din inputfile
ifstream inputfile(INPUTFILE);
#endif

#define scand(A) scanf("%d", &(A))
#define scans(A) scanf("%s", (A))
#define disp(A) dout << #A << " = " << setw(3) << (A) << endl
#define disP(A) dout << setw(3) << (A) << " "
#define rep(i,a,n) for(int (i)=(a); (i)<(n); (i)++)
#define dispAll(A,n) dout << #A << " = "; rep(j, 0, (n)) {disP(A[j]);} dout << endl
//#define dispAll(A,n) cout << #A << " = "; rep(j, 0, (n)) {cout << setw(3) << A[j] << " ";} cout << endl

#define sign(x) ((x)>0)-((x)<0) //x<0: -1, x=0: 0, x>0: +1
#define p(i) (i)/2
#define l(i) (i)*2
#define r(i) (i)*2+1

int dx[] = {1,-1, 0, 0, 1, 1,-1,-1}; //???????????????????????????????¨??????????????????????????????????
int dy[] = {0, 0,-1, 1,-1, 1, 1,-1};

typedef pair<int,int> pii;
typedef vector<int> vi;
typedef long long ll;
typedef unsigned long ull;

const int INF = (int)2e9+10;
const ll INF_LL = (ll)9e18-1LL; //Be careful for overflow.
const ull INF_ULL = (ull)1e19-1ULL;
const int NONE = -1;
const ll MOD = (ll)1e9+7; //??§???????´???°?????£??¨??¨????????°????????????10???7??????

const int N_MAX = 10010; //num of vertex or element
const int M_MAX = 100010; //num of edge
const int DATA_MAX = 1010;

int N;
int root[N_MAX];
int Rank[N_MAX] = {0};

int find(int x) {
    if(root[x]==x) return x;
    else return root[x] = find(root[x]);
}


void unite(int x, int y) {
    x = find(x);
    y = find(y);
    
    if(x==y) return;
    
    if(Rank[x] < Rank[y]) root[x] = y;
    else {
        root[y] = x;
        if(Rank[x]==Rank[y]) Rank[x]++;
    }
}

#define isSame(x,y) (find(x)==find(y))




#ifdef debug
void display() {
}
#endif




int main() {
    
    //cin, cout????????????  ?????¨??????cin?????????????????¨??¨cin??§???scanf?????????????????¨??¨scanf??§??±?????????????????????
    cin.tie(0); //cin??¨cout??????????????????
    ios::sync_with_stdio(false); //iostream??¨stdio??????????????????
    
    //read input data
    din >> N;
    int Q; din >> Q;
    
    rep(i,0,N) root[i] = i;
    
    //------------------------------------------------------------------------------------------
#ifdef debug
    //start timer
    auto startTime = chrono::system_clock::now();
#endif
    //------------------------------------------------------------------------------------------
    
    int x, y;
    while(din >> Q >> x >> y) {
        if(Q) {
            dout << isSame(x,y) << endl;
        }
        else {
            unite(x,y);
        }
#ifdef debug
        dout << "----------------------------\n";
        dout << (Q?"unite":"isSame") << " " << x << " " << y << endl;
        dout << "   i = "; rep(i,0,N) disP(i);
        dout << endl;
        dispAll(root, N);
        dispAll(Rank, N);
#endif
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
        
    
    
    
    
    

    
    
    //------------------------------------------------------------------------------------------
#ifdef debug
    //stop timer
    auto endTime = chrono::system_clock::now();
    auto dur = endTime - startTime;
    auto msec = chrono::duration_cast<chrono::milliseconds>(dur).count();
    dout << fixed << setprecision(4) << (double)msec/1000 << " sec \n";
#endif
    //------------------------------------------------------------------------------------------
    
#ifdef INPUTFILE
    inputfile.close();
#endif
    
#ifdef OUTPUTFILE
    outputfile.close();
    cout << "\"" << OutputFilePath << "\"" << endl;
#endif
    
    return 0;
}