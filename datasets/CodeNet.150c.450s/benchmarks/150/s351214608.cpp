#include<iostream>
#include<vector>

template< typename iterator >
void count_sort( iterator first, iterator last )
{
    std::vector<int> C(10000) ;
    std::vector<int> B(last-first) ;
    for( iterator iter = first ; iter != last ; ++iter )
    {
        C.at(*iter) ++ ;
    }
    for( std::size_t i = 1 ; i < C.size() ; ++i )
    {
        C.at(i) += C.at(i-1) ;
    }

    for( iterator iter = last - 1 ; iter >= first ; --iter )
    {
        B.at(C.at(*iter)-1) = *iter ;
        C.at(*iter)-- ;
    }
    for( iterator iter = first ; iter != last ; ++iter )
    {
        *iter = B.at(iter-first) ;
    }
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
    count_sort( A.begin(), A.end() ) ;
    for( int i = 0 ; i < n ; ++i )
    {
        if( i != 0 )
        {
            std::cout << " " ;
        }
        std::cout << A.at(i) ;
    }
    std::cout << std::endl ;
}


