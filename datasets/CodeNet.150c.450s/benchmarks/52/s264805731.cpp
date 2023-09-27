#include<iostream>
#include<stack>
#include<vector>
int main(){
	std::stack<int> st;
	std::vector<int> vec;
	int a=0;
	while(1){
		int n;
		std::cin>>n;
		if(std::cin.eof())break;
		if(n!=0)st.push(n);
		else vec.push_back(st.top()),a++,st.pop();
	}
	for(int i=0;i<a;i++)std::cout<<vec[i]<<std::endl;
	return 0;
}