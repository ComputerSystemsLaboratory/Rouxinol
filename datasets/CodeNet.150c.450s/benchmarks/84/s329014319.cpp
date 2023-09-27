
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<utility>

using ull = unsigned long long;


template<class OutputIterator, class F>
auto merge_sort(OutputIterator first, OutputIterator last, F compare) {

	const auto beg = first;
	const auto en = last;
	const auto mid = beg + std::distance(beg, en) / 2;

	// 
	if (!(beg < en - 1))	return ull{};

	//std::cout << *beg << " - " << *(en - 1) << "\n";


	auto lc = merge_sort(beg, mid, compare);
	auto rc = merge_sort(mid, en, compare);


	std::vector< std::decay_t<decltype(*beg)> >
		left{ beg, mid }, right{ mid, en };
	
//	constexpr const ull INF = -1;
//	left.emplace_back( INF );
//	right.emplace_back( INF );

	auto it = beg;
	auto itl = std::begin(left);
	auto itr = std::begin(right);

	auto enl = std::end(left);
	auto enr = std::end(right);

	ull c{lc+rc};
	while (it != en) {

		auto lvalid = itl != enl;
		auto rvalid = itr != enr;


		if (!lvalid && rvalid) {
			*it = *itr;
			++itr; ++it;
			continue;
		}

		if (lvalid && !rvalid) {
			*it = *itl;
			++itl; ++it; 
			continue;
		}

		//left
		if (compare(*itl, *itr)) {
			*it = *itl;
			++itl;
		}
		else {
			*it = *itr;
			++itr;
			++c;
		}
		++it;
	}
	return c;

}

template<class OutputIterator>
auto merge(
	  OutputIterator first
	, OutputIterator mid
	, OutputIterator last) ->ull{
 
//	if (first == last)return 0;

//	std::cout << *beg << " - " << *(en - 1) << "\n";



	std::vector< std::decay_t<decltype(*first)> >
		left{ first, mid }, right{ mid, last };

	constexpr const ull INF = -1;
	left.emplace_back( INF );
	right.emplace_back( INF );

	

	auto it = first;
	auto en = last;
	auto itl = std::begin(left);
	auto itr = std::begin(right);
	auto begl = itl;
	auto begr = itr;
	auto beg = first;
//	auto enr = std::end(right);
	auto ls = left.size() - 1;
	ull c{};

	//TO DO
	while (it != en) {
		/*
		auto lvalid = itl != std::end(left);
		auto rvalid = itr != std::end(right);


		//rightが空
		if (lvalid && !rvalid) {
			*it = *itl;
			c += right.size();
			continue;
		}

		if (!lvalid && rvalid) {
			*it = *itr;
			continue;
		}*/

		if ( *itl < *itr ) {
			*it = *itl;
			++itl;
			if (itr != right.end())
				--ls;

		}
		else {
			*it = *itr;
			
			auto dl = std::distance(begl,itl);
//			if(beg<it)
			auto di = std::distance(beg, it);
			auto dr = std::distance(begr, itr);
			//std::cout << ls << "\n";
				
			if (itl != left.end() - 1) {
				c += ls;
//				std::cout << *itl << " " << *itr << "\n";
			}
			++itr;
//			std::cout << di <<" "<<dl<<" "<<dr<< "\n";
			//if(dr>dl)
			//	std::cout << dr - dl << "\n";
		} 
//		std::cout <<*first<<", "<<*(last-1)<<" "<< c <<"\n";
		++it; 
	}
	return c;

}



template<class OutputIterator>
auto merge_sort(OutputIterator first, OutputIterator last)->ull {
//	std::cout <<"range: "<< std::distance(first, last) << "\n";
	if (first < last - 1) {
		auto mid = first + std::distance(first, last) / 2;
		auto lc = merge_sort(first, mid);
		auto rc = merge_sort(mid, last);
		return merge(first, mid, last) + lc + rc;
	}
	return 0;
}

int main() {

	unsigned int n{}; std::cin >> n;

	std::vector<ull> v; v.resize(n);
	for (auto&e : v)
		std::cin >> e;


	auto x = merge_sort( std::begin(v), std::end(v) );

	std::cout << x << "\n";
//	for (const auto& e : v)
//		std::cout << e << " ";
//	std::cout << "\n";
	return 0;
}

