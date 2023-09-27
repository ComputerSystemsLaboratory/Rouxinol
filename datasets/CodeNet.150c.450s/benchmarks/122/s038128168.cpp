#include <queue>
#include <iostream>
#include <string>

int main(){
	std::priority_queue<int> que;
	std::string s;
	while(std::cin>>s){
		if(s=="end")break;
		if(s=="insert"){
			int n;
			std::cin>>n;
			que.push(n);
		}else {
			std::cout<<que.top()<<std::endl;
			que.pop();
		}
	}
}