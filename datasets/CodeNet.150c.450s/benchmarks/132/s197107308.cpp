#include<iostream>
using namespace std;

int candidate[50];

int main() {
    int n,p;
    while(cin>>n>>p, n|p) {
        for(int i=0; i<50; ++i) candidate[i] = 0;
        int count = 0,cup = p,idx = 0,stepc = 0;
        while(true) {
            stepc++;
            if(cup > 0) {
                candidate[idx]++;
                cup--;
                if(candidate[idx] == 1) count++;
                //if(cup == 0) cout<<idx<<endl;
                if(cup == 0 && count == 1) {
                    cout<<idx<<endl;
                    break;
                }
            }else{
                if(candidate[idx] > 0) count--;
                cup = candidate[idx];
                candidate[idx] = 0;
            }
            idx = (idx+1)%n;
            //if(stepc >= 1000000) cout<<"efaw"<<endl;
        }
    }
}