#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>

using namespace std;


bool saiki(vector<int> ball,stack<int> B,stack<int> C){

    if(ball.size() == 0) return true;
    int temp = ball.front();
    bool flag1=false,flag2=false;
    ball.erase(ball.begin());
    if(temp > B.top()){
	B.push(temp);
       	flag1 = saiki(ball,B,C);
	B.pop();
    }
    if(temp > C.top()){
	C.push(temp);
	flag2 = saiki(ball,B,C);
    }
    return flag1 || flag2;
}


int main(){

    int N,temp;
    vector<int> ball;
    stack<int>B,C;
    B.push(0);
    C.push(0);
    cin >> N;
    for(int i=0;i<N;i++){
	for(int j=0;j<10;j++){
	    cin >> temp;
	    ball.push_back(temp);
	}
	if(saiki(ball,B,C)) cout << "YES" << endl;
	else cout << "NO" << endl;
	ball.clear();
    }
    return 0;
}