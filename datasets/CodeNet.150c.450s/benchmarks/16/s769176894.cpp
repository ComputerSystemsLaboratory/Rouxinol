#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
//    int a;
//    cin >> a;
    stack<int> length;
    vector<int> lanes;
    vector<int> pos;
    vector<int> ponds;
    char grad;
    int total=0;
    int meter=0;
    while(cin >> grad){
        meter++;
        switch(grad){
            case 95:
                if(!length.empty()){
                    length.top()+=1;
                }
                break;
            case 47:
                if(!length.empty()){
                    length.top()+=1;
                    int a=length.top();
//                    mass+=a;
                    total+=a;
                    lanes.push_back(a);
                    pos.push_back(meter);
                    length.pop();
                    if(!length.empty()){
                        length.top()+=a;
                    }else{
//                        mass=0;
                    }
                }
                break;
            case 92:
                if(!length.empty()){
                    length.top()+=1;
                }
                length.push(0);
                break;
        }
    }
//    int mass=0;
//    int cnt=0;
    bool checked=false;
    vector<int> lanes2=lanes;
    for(int i=0;i<lanes.size();i++){
        checked=false;
        for(int j=i+1; j<lanes.size();j++){
            if(pos[i]-(lanes2[i])>pos[j]-(lanes2[j])&& pos[i]<pos[j]){
                lanes[j]+=lanes[i];
                checked=true;
                break;
            }
        }
        if (!checked){
            ponds.push_back(lanes[i]);
        }
    }    
    cout << total << endl;
    cout << ponds.size();
    if(ponds.size()>0){
        cout << " ";
    }
    for (int i=0;i!=ponds.size();i++){
        cout << ponds[i];
        if (i!=ponds.size()-1){
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
