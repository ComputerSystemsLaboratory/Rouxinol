#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <vector>
#include <sstream>
#include <string>
#include <cstdio>
#include <array>
#include <stack>
#include <queue>
#include <list>

using namespace std;

//???????????°??????TEST????????????????????¬???????????????????????????????????¢????????????
//#define TEST //*******************************************************************************************************************************************

//?????????????????¨??§?????\????????????????????????????????°?????????????¨???????????????????dout???????????????????????§???????????¬??????????????????????????????????????????
#ifdef TEST
    #define dout cout
#else
    stringstream dummy; //???????????°??????dout?????????????????????????????????
    #define dout dummy.str(""); dummy.clear(stringstream::goodbit); dummy //dummy?????????????????????????????????????????¨?????¢?????¢???????????????
    //???????????¨??????????????????goodbit?????????????????????????????¨???????????´????????????????????????????????¨?????°?????????????????§???????????????????????????????????? http://d.hatena.ne.jp/linden/20060427/p1
#endif


void deleteX(list<int> &list, int x) {
    for(auto itr=list.begin(); itr!=list.end(); itr++ ) {
        if(*itr==x) {
            list.erase(itr);
            break;
        }
    }
}


int main(void) {
    list<int> list;
    int n;
    string order;
    int x;
    
    cin >> n;
    
    for(int i=1; i<=n; i++) {
        
        cin >> order;
        
//        dout << order << " " << x << endl;
        
        if(order=="insert") {
            cin >> x;
            list.push_front(x);
        }
        else if(order=="delete") {
            cin >> x;
            deleteX(list, x);
        }
        else if(order=="deleteFirst") {
            list.pop_front();
        }
        else if(order=="deleteLast") {
            list.pop_back();
        }
    }
    
    
    
    
    
    //display list
//    dout << "---- display list ---- \n";
    for(auto itr=list.begin(); itr!=list.end(); itr++ ) {
        if(itr==list.begin()) {
            cout << *itr;
        } else {
            cout << " " << *itr;
        }
    }
    cout << endl;
    
    return 0;
}