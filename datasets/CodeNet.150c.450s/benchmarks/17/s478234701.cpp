#include<iostream>
#include<vector>
std::vector<int> qsort(std::vector<int> xs);


int main(){
	std::vector<int> vec(5);
	for(int i=0;i<5;i++){
		std::cin>>vec[i];
	}
	vec=qsort(vec);
	for(int i=4;i>-1;i--){
		std::cout<<vec[i];
		if(i!=0)std::cout<<" ";
		else std::cout<<std::endl;
	}
	
	
	return 0;
}

std::vector<int> qsort(std::vector<int> xs){

	if(xs.empty())return xs;
	else{
			int x=xs[0];
		std::vector<int> left;
		std::vector<int> right;
		for(int i=1;i<xs.size();i++){
			if(x>xs[i])left.push_back(xs[i]);
			else if(x<=xs[i])right.push_back(xs[i]);
		}
		left=qsort(left);
		right=qsort(right);
		left.push_back(x);
		left.insert(left.end(),right.begin(),right.end());
		return left;
	}
}