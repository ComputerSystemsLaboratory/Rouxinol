#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
	int n,m,l;
	std::cin >> n >> m >> l;
	std::vector<std::vector<int>> a(n,std::vector<int>(m,0));
	std::vector<std::vector<int>> b(m,std::vector<int>(l,0));
	std::vector<std::vector<long long int>> c(n,std::vector<long long int>(l,0));
	for(int i = 0 ; i < n ; i ++){
		for(int j = 0 ; j < m ; j ++){
			std::cin >>a[i][j] ;
		}
	} 
	for(int i = 0 ; i < m ; i ++){
		for(int j = 0 ; j < l ; j ++){
			std::cin >>b[i][j] ;
		}
	}
	for(int i = 0 ; i < n ; i ++){
		for(int j = 0 ; j < l ; j ++){
			c[i][j] = 0;
			for(int k = 0 ; k< m ; k ++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for(int i = 0 ; i < n ; i ++){
		for(int j = 0 ; j < l -1 ; j ++){
			std::cout << c[i][j] << " " ;
		}
		std::cout << c[i][l-1] << std::endl;
	}
	return 0;
}