#include <cmath>
#include <cstdlib>
#include <iostream>
#include <bitset>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>
#include <chrono>
#include <random>
#include <tuple>
#include <utility>
#include <fstream>
 
const long INF = (1l << 30);
const long LINF = (1l << 60);

long n;

int main(){
	scanf("%ld", &n);
	for(int i = 0; i < n; i++){
		std::set<std::string> st;
		std::string str;
		std::cin >> str;
		for(int j = 0; j < str.length(); j++){
			std::string s[2];
			s[0] = str.substr(0, j);
			s[1] = str.substr(j);
			for(int k = 0; k < 4; k++){
				for(int l = 0; l < 2; l++){
					if(k & (1 << l)){
						std::reverse(s[l].begin(), s[l].end());
					}
				}
				for(int l = 0; l < 2; l++){
					//std::cout << j << " " << k << " " << l << " " <<  s[l] + s[(l+1)%2] << std::endl;
					/*
					if(st.count(s[l] + s[(l+1)%2]) == 0){
						printf("  Unique!\n");
					}
					//*/
					st.insert(s[l] + s[(l+1)%2]);
				}
				for(int l = 0; l < 2; l++){
					if(k & (1 << l)){
						std::reverse(s[l].begin(), s[l].end());
					}
				}
			}
		}
		printf("%ld\n", st.size());
	}
	return 0;
}

