#include <utility>
#include <iostream>
#include <unordered_map>



int main()
{
    // using map_type = std::unordered_map< std::string, int > ;
    typedef std::unordered_map< std::string, int > map_type ; 
    map_type map ;

    std::string longest_word ;

    std::string word ;
    while ( std::cin >> word )
    {
        ++map[word] ;
        if ( longest_word.size() < word.size() )
        {
            longest_word = word ;
        }
    }

    std::pair< map_type::key_type, map_type::mapped_type> most_frequent_word ;
    for ( auto && elem : map )
    {
        if ( most_frequent_word.second < elem.second )
        {
            most_frequent_word = elem ;
            
        }
    }

    std::cout << most_frequent_word.first << ' ' << longest_word << '\n' ;
    
}