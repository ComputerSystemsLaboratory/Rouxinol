#include <iostream>
#include <vector>
 
int main(){
	const int max_number = 20;
	const int min_number = 0;
	int N;
	
	while(std::cin >> N){
		//JOI[N][max_number + 1]
		std::vector<std::vector<unsigned long long> > JOI(N, std::vector<unsigned long long>(max_number + 1, 0));
		std::vector<int> num(N);
		
		for(int i = 0 ; i < N ; ++i){
			std::cin >> num[i];
		}
		JOI[0][num[0]] = 1;
		for(int i = 1 ; i < N - 1 ; ++i){
			for(int j = 0 ; j <= max_number ; ++j){
				if(JOI[i - 1][j] > 0){
					if(j + num[i] <= max_number){
						JOI[i][j + num[i]] += JOI[i - 1][j];
					}
					if(j - num[i] >= min_number){
						JOI[i][j - num[i]] += JOI[i - 1][j];
					}
				}
			}
		}
		std::cout << JOI[N - 2][num[N - 1]] << std::endl;
	}
	
    return 0;
}