#include<bits/stdc++.h>
using namespace std;

//constant
const int inf=1<<28;

//variable
int n,r;
int p,c;


int main(){
    while(cin>>n>>r,r){
        deque<int> pile;
        for(int i=0; i<n; i++){
            pile.push_front(i+1);
        }
        for(int i=0; i<r; i++){
            cin>>p>>c;
            deque<int> temp;
            for(int i=0; i<c; i++){
                temp.push_front(*(pile.begin()+p-1));
                pile.erase(pile.begin()+p-1);
            }
            while(!temp.empty()){
                pile.push_front(temp.front());
                temp.pop_front();
            }
        }
        /*cout<<endl;
        for(auto it=pile.begin(); it!=pile.end(); it++){
            cout<<*it<<endl;
        }
        cout<<endl;*/
        cout<<pile.front()<<endl;
    }

    return 0;
}