//#define debug //*******************************************************************************************************************************************

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// [Tips]
// XCode??§???EOF??\??????Ctrl+D
// ?\???Alt+\
// ans???????§?INT?????????2,147,483,647????¶????????????¨??????????????§long long?????£???????????????????????????
// ????????°??¨??? = dout << static_cast<bitset<8> >(x)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




////////////////////////////////////////
//
////////////////////////////////////////


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
#include <map>
//#include <unordered_map> //hash func.
#include <fstream> //ifstream, ofstream
#include <iterator> //insert_iterator::inserter
#include <set>


//#define NDEBUG //If NDEBUG is defined before #include <cassert>, assert will be ignored. You had better define NDEBUG when u submit the code.
#include <cassert> //assert

using namespace std;


#define dout cout
//If u wanna output to a text file instead of standard output, plz define OUTPUTFILE.
//#define OUTPUTFILE "output.txt" //************************************************************
#ifdef OUTPUTFILE
#define dout outputfile
ofstream outputfile(OUTPUTFILE);
#define OutputFilePath "/Users/Nag/Documents/Prgm/Test/DerivedData/Test/Build/Products/Debug/output.txt"
#endif


#define din cin
//If u wanna input from a text file instead of standard input, plz define INPUTFROMTEXTFILE???.
//#define INPUTFILE "input.txt" //**************************************************************
#ifdef INPUTFILE
#define din inputfile
ifstream inputfile(INPUTFILE);
#endif

#define scand(A) scanf("%d", &(A))
#define scans(A) scanf("%s", (A))
#define printd(A) dout << "%d\n", (A))
#define prints(A) dout << "%s\n", (A))
#define disp(A) dout << #A << " = " << setw(3) << (A) << endl
#define disP(A) dout << setw(3) << (A) << " "
#define rep(i,a,n) for(int (i)=(a); (i)<(n); (i)++)
#define show(A,s,g) dout << #A << " = "; rep(__w, (s), (g)) {disP(A[__w]);} dout << endl
#define showi(A,s,g) dout << #A << " = "; rep(__w, (s), (g)) {disP(__w);} dout << endl
#define line  dout << "----------------\n"
#define line2 dout << "================\n"

#define sign(x) ((x)>0)-((x)<0) //x<0: -1, x=0: 0, x>0: +1
#define p(i) ((i)/2)
#define l(i) ((i)*2)
#define r(i) ((i)*2+1)
#define sibling(i) (i^1) //the other sibling of i (ex. 16^1 = 17, 17^1 = 16)
#define isRightChild(i) (i&1) // ex. 16&1 = 0, 17&1 = 1
#define isLeftChild(i) (!(i&1)) // ex. 16&1 = 1, 17&1 = 0


typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long ull;

const int INF = (1LL<<31)-1;
const int NONE = -1;
//const ll INF_LL = (ll)9e18-1LL; //Be careful for overflow.
//const ull INF_ULL = (ull)1e19-1ULL;
//#define MOD 1000000007 //??§???????´???°?????£??¨??¨????????°????????????10???7??????

#define N_MAX 100010 //num of vertex or element
//#define M_MAX 124760 //num of edge
//#define DATA_MAX 1010

int N;
int K;
int a[N_MAX];
int P;



void display() {
#ifdef debug
    dout << "------------------------- display() ---------------------\n";
    
    //    dout << "   "; showi(j,0,N+1);
    //    dout << "C[][] = \n";
    //    rep(i,0,N+1) {
    //        disP(i); dout << " : ";
    //        rep(j,0,N+1) {
    //            disP(C[i][j]);
    //        }
    //        dout << endl;
    //    }
    //    dout << endl;

    
    
    dout << "------------------------- end of display() ---------------------\n";
#endif
}






int main() {
    
    //cin, cout????????????  ?????¨??????cin?????????????????¨??¨cin??§???scanf?????????????????¨??¨scanf??§??±?????????????????????
    cin.tie(0); //cin??¨cout??????????????????
    ios::sync_with_stdio(false); //iostream??¨stdio??????????????????
    
    
    //read input data
    din >> N >> K;
    
    int sum = 0;
    int a_max = 0;
    rep(i,0,N) {
        din >> a[i];
        sum += a[i];
        a_max = max( a_max, a[i] );
    }
    
    P = max( (sum+K-1)/K, a_max );
    
#ifdef debug
    disp(sum);
    line;
    disp(a_max);
    disp((sum+K-1)/K);
    dout << "P???????????????????¨??????§?????????????????§??? ";
    disp(P);
#endif
    
    
    
    
    //------------------------------------------------------------------------------------------
#ifdef debug
    //start timer
    auto startTime = chrono::system_clock::now();
#endif
    //------------------------------------------------------------------------------------------
    
    while(1) {
        
        bool ans = true;
        int truck = 1;
        int w = 0;
        
        rep(i,0,N) {
            
            w += a[i];
            
#ifdef debug
            line;
            disp(i);
            disp(a[i]);
            disp(w);
            disp(truck);
            disp(P);
#endif
            
            if(w > P) {
                truck++;
                w = 0;
                i--;
            }
            
            if(truck > K) {
                ans = false;
                break;
            }
        }
        
        if(ans) {
            dout << P << endl;
            return 0;
        }
        
        P++;
    }
    
    
    
    
    
    
#ifdef debug
    dout << "=== OUTPUT ===\n";
#endif
    
    
    
    
    
    
    
    
    
    
    
    //------------------------------------------------------------------------------------------
#ifdef debug
    //stop timer
    auto endTime = chrono::system_clock::now();
    auto dur = endTime - startTime;
    auto msec = chrono::duration_cast<chrono::milliseconds>(dur).count();
    dout << fixed << setprecision(4) << (double)msec/1000 << " sec \n";
#ifdef OUTPUTFILE
    cout << fixed << setprecision(4) << (double)msec/1000 << " sec \n";
#endif
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