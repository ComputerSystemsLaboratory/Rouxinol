#include <iostream>
#include <string>
#include <vector>

template<class T>
T myMin(const T& arg){
	return arg;
}
template<class F, class... S>
F myMin(const F& first, const S&... second){
	F m = myMin(second...);
	if (m > first){
		return first;
	}else{
		return m;
	}
}
int f(std::string::iterator str1, const std::string& str2, const std::vector<int>& vec){
	std::vector<int> new_v;
	new_v.push_back(vec[0] + 1);
	{
		auto v = vec.begin() + 1;
		for (auto i = str2.begin(); i != str2.end(); ++i, ++v){
			if (*i == *str1){
				new_v.push_back(*(v - 1));
			}else{
				new_v.push_back(myMin(*v + 1, new_v.back() + 1));
			}
		}
	}
	if (*(++str1) != '\0'){
		return f(str1, str2, new_v);
	}else{
		return new_v.back();
	}
}
int main(){
	int n;
	std::cin >> n;
	for (int i = 0; i < n; ++i){
		std::string str1, str2;
		std::cin >> str1 >> str2;
		std::vector<int> vec;
    vec.push_back(0);
		for (int j = 0; j < str2.size(); ++j){
			vec.push_back(j);
		}
		std::cout << (str1.size() + str2.size() - f(str1.begin(), str2, vec)) / 2 << "\n";
	}
}