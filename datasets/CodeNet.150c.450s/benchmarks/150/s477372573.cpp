#include <iostream>
#include <vector>

constexpr const int maxElem = 10000;

void CountingSort( std::vector<int>& v ){
    std::vector<int> count( maxElem + 1 ); // 0-origin, C inlec
    for( auto& cElem : count ){
        cElem = 0;
    }

    int i = 1;
    for( ; i <= v.size(); ++i ){
        ++count[v[i]];
    }

    for( i = 1; i <= maxElem; ++i ){
        count[i] += count[i-1];
    }

    //----test----
    // for( const auto& elem : count ){
    //     std::cout << elem << " ";
    // }
    // std::cout << "\n";
    //------------

    std::vector<int> result( v.size() );
    for( i = v.size(); i > 0; --i ){
        result[count[v[i]]] = v[i];
        --count[v[i]];
    }
    v = std::move(result);
}


int main(){
    int n;
    std::cin.tie(0);
    std::cin >> n;

    std::vector<int> v( n + 1 );
    for( int i = 1; i <= n; ++i ){
        std::cin >> v[i];
    }

    CountingSort(v);

    for( int i = 2; i <= v.size(); ++i ){
        std::cout << v[i] << ( ( i != v.size() )? " " : "\n" );
    }
}
