#include <iostream>
#include <list>
#include <utility>
using namespace std;
#define MAXN 100
#define MAXW 2001

int main(){
    int weight[MAXN][MAXN];
    int n; cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> weight[i][j];
        }
    }
    
    list<int> MST;
    MST.push_back(0);
    list<int> nonMST;
    for(int i=1; i<n; i++) nonMST.push_back(i);
    
    int weightSum = 0;
    while(!nonMST.empty()){
        int tmpv;
        int tmpWeight = MAXW;
        for(list<int>::iterator it=MST.begin(); it!=MST.end(); it++){
            for(list<int>::iterator it2=nonMST.begin(); it2!=nonMST.end(); it2++){
                if (weight[*it][*it2] < tmpWeight && weight[*it][*it2] != -1){
                    //cout << "tmpWeight update with " << *it2 << endl;
                    tmpWeight = weight[*it][*it2];
                    tmpv = *it2;
                }
            }
        }
        //cout << "MST pushback :" << tmpv << endl; 
        MST.push_back(tmpv);
        nonMST.remove(tmpv);
        weightSum += tmpWeight;
        /*for(list<int>::iterator it=MST.begin(); it!=MST.end(); it++){
            cout << *it << " ";
        }
        cout << endl;
        for(list<int>::iterator it=nonMST.begin(); it!=nonMST.end(); it++){
            cout << *it << " ";
        }
        cout << endl;*/
    }
    
    cout << weightSum << endl;
}