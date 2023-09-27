#include<iostream>
#include<string>
#include<vector>
typedef std::pair<char,char> p;

int main(){
	while(1){
		int n;
		std::cin>>n;
		if(n==0)break;
		std::vector<p> vec(n);
		for(int i=0;i<n;i++){
			std::cin>>vec[i].first>>vec[i].second;
		}
		std::string ans;
		int m;
		std::cin >> m;
		for(int i=0;i<m;i++){
			char c;
			std::cin>>c;
			bool f=true;
			for(int j=0;j<n;j++){
				if(vec[j].first == c){
					ans.push_back(vec[j].second);
					f=false;
				}
			}
			if(f)ans.push_back(c);
		}
		std::cout<<ans<<std::endl;
	}

	return 0;
}