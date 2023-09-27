#include<iostream>
#include<string>
#include<climits>
#include<vector>

using namespace std;

int main(){
	int height[20003]={0},current=0,max=0,sum=0;
	vector<int> top_left,top_right,ans_left,ans_right;
	string input="";
	getline(cin,input);
	input="/"+input+"\\";
	int sz=input.size();
	for(int i=0;i<sz;i++){
		switch(input[i]){
		case '/':
			height[i+1]=height[i]+1;break;
		case '\\':
			height[i+1]=height[i]-1;break;
		case '_':
			height[i+1]=height[i];break;
		}
	}
	for(int i=0;i<sz;i++){
		if(height[i]>height[i+1] && height[i]>=current){
			current=height[i];
			top_left.push_back(i);
		}
	}

	max=top_left.back();
	top_left.pop_back();
	current=height[sz-1];

	for(int i=sz-1;i>max;i--){
		if(height[i]>height[i-1] && height[i]>=current){
			current=height[i];
			top_right.push_back(i);
		}
	}

	for(int i=0;i<top_left.size();i++){
		int area=0,top=top_left[i];
		for(int j=top;;j++){
			area+=(height[top]-height[j])+(height[top]-height[j+1]);
			if(height[j+1]==height[top]){break;}
		}
		area>>=1;
		ans_left.push_back(area);
		sum+=area;
	}

	for(int i=0;i<top_right.size();i++){
		int area=0,top=top_right[i];
		for(int j=top;;j--){
			area+=(height[top]-height[j])+(height[top]-height[j-1]);
			if(height[j-1]==height[top]){break;}
		}
		area>>=1;
		ans_right.push_back(area);
		sum+=area;
	}
	cout<<sum<<'\n'<<top_left.size()+top_right.size();
	for(int i=0;i<ans_left.size();i++){
		cout<<' '<<ans_left[i];
	}
	for(int i=ans_right.size()-1;i>=0;i--){
		cout<<' '<<ans_right[i];
	}
	cout<<endl;
	return 0;
}