#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    int n ;
    std::vector< long long > a ;
    std::cin >> n ;
    
    for( int i = 0 ; i < n ; i++ ) {
        long long ii ;
        std::cin >> ii ;
        a.push_back( ii ) ;
    }
    std::cout << *std::min_element( a.begin() , a.end() ) << " " << *std::max_element( a.begin() , a.end() ) << " " << std::accumulate( a.begin() , a.end() , 0LL ) << std::endl ;
}

