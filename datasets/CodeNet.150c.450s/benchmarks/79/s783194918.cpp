#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

int main(){
    int N,r;
    vector<int> ans;
    while(cin>>N>>r,N != 0 && r != 0){

        stack<int> card;
        for(int i = 1;i <= N;i++) card.push(i);

        for(int i=0;i<r;i++){
            int P,C;
            stack<int> p;
            stack<int> c;
            cin>>P>>C;
            
            for(int i=0;i<P-1;i++){
                p.push(card.top());
                card.pop();
            }

            for(int i=0;i<C;i++){
                c.push(card.top());
                card.pop();
            }

            while(!p.empty()){
                card.push(p.top());
                p.pop();
            }

            while(!c.empty()){
                card.push(c.top());
                c.pop();
            }
            
        }
        ans.push_back(card.top());
    }
    for(int i : ans) cout<<i<<endl;
}
