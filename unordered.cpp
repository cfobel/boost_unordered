#include <string>
#include <iostream>

#include <boost/unordered_map.hpp>
#include <boost/foreach.hpp>

typedef boost::unordered_map<std::string, int> AgeTable;

int main() {
    AgeTable ages;
    
    ages.insert( std::make_pair( "Joe", 25 ) );
    ages.insert( std::make_pair( "Sally", 18 ) );
    ages.insert( std::make_pair( "Billy", 11 ) );
    
    std::cout << "Using iterators:" << std::endl;
    AgeTable::iterator iter;
    for ( iter = ages.begin(); iter != ages.end(); iter++ ) {
        std::cout << "  " << iter->first << " is " << iter->second << std::endl;
    }

    std::cout << "Using Boost.Foreach:" << std::endl;
    BOOST_FOREACH(AgeTable::value_type &data, ages) {
        std::cout << "  " << data.first << " is " << data.second << std::endl;
    }
    std::cout << std::endl;
}
