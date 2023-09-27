#include <iostream>
#include <string>
#include <queue>
#include <cmath>
using namespace std;

int main() {
	string str;
	int *height;
	queue<int> edge;
	int len;
	int pondNum;
	int *pondArea;
	int sumArea;
	int n;
	
	cin>>str;
	len = str.length();
	height = new int[len+1];
	
	
	height[0] = 0;
	for(int i=0;i<len;++i){
		char c = str[i];
		height[i+1] = height[i] + (c=='\\'?-1:(c=='_'?0:1));
	}
			
	pondNum = 0;
	for(int i=0;i<len;++i){
		if(height[i+1]<height[i]){
			for(int j=i+1;j<len+1;++j){
				if(height[j] >= height[i]){
					edge.push(i);
					edge.push(j);
					i = j-1;
					++pondNum;
					break;
				}
			}
		}
	}
	
	pondArea = new int[pondNum];
	n = 0;
	sumArea = 0;
	while(!edge.empty()){
		int st,end,area;
		st = edge.front();
		edge.pop();
		end = edge.front();
		edge.pop();
		
		area = 0;
		for(int i=st;i<end;++i){
			area += (abs(height[st]-height[i])+abs(height[st]-height[i+1]));
		}
		area /= 2;
		pondArea[n] = area;
		sumArea += area;
		++n;
	}
	
	cout<<sumArea<<endl;
	cout<<pondNum<<(pondNum?" ":"");
	for(int i=0;i<pondNum;++i){
		cout<<pondArea[i]<<(i!=pondNum-1?" ":"");
	}
	cout<<endl;
	
	return 0;
}