#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<int> a;  // 開口部
	int n;
	int ball = 10;
	cin>>n;
	while( n-- > 0){
		int b=0, c=0;
		int k;
		for(int i=0;i<ball;i++){
			cin>>k;
			a.push( k );
		}
		
		// 最初の一つをbに入れておく
		b = a.front();
		a.pop();
		
		for(int i=0;i<ball-1;i++){
			if( a.front() > b && a.front() > c){
				if( a.front() - b > a.front() - c){
					c = a.front();
				}else{
					b = a.front();
				}
			}else if( a.front() > b){
				b = a.front();
			}else if( a.front() > c){
				c = a.front();
			}else{  // ゲームオーバー
				cout<<"NO"<<endl;
				while(1){
					if( a.empty()){
						break;
					}else{
						a.pop();
					}
				}
				break;
			}
			
			a.pop();
			if( a.empty()){
				cout<<"YES"<<endl;
				while(1){
					if( a.empty()){
						break;
					}else{
						a.pop();
					}
				}
			}
		}
	}
	return 0;
}