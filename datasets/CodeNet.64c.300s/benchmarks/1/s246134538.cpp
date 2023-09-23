#include<iostream>
#include<vector>
#include<utility>
template<typename iterator>
int partition(iterator first, iterator last, int p = 0 )
{
    iterator X = last - 1 ;
    int i = p - 1 ;
    for( iterator iter = first + p ; iter != last-1 ; ++iter )
    {
        if( *iter <= *X )
        {
            ++i ;
            std::swap( *iter, *(first+i) ) ;
        }
    }
    std::swap( *(first+i+1), *(last-1) ) ;
    return i+1 ;
}

int main()
{
    int n ;
    std::cin >> n ;
    std::vector<int> A(n) ;
    for( int i = 0 ; i < n ; ++i )
    {
        std::cin >> A.at(i) ;
    }

    int k = partition( A.begin(), A.end() ) ;

    for( int i = 0 ; i < n ; ++i )
    {
        if( i != 0 )
        {
            std::cout << " " ;
        }
        if( i == k )
        {
            std::cout << "[" << A.at(i) << "]" ;
            continue ;
        }
        std::cout << A.at(i) ;
    }
    std::cout << std::endl ;
}

