#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <array>

template <typename Container>
void Print(const Container& container, const char *sep) 
{
	auto it=container.begin();
	std::cout << *it;
	for ( it++; it!=container.end(); ++it) 
		{
			std::cout << sep << *it;
		}
	std::cout << std::endl;
}

int main() 
{
	std::vector<int> V={1,2,3,4,5};
	Print(V," ");

	std::list<std::string> L={"A","B","C"};
	Print(L," , ");

	std::deque<double> Deq={1.1, 2.2, 3.3, 4.4};
	Print(Deq," | ");

	std::array<int, 5> Arr={2, 4, 8, 16, 32};
	Print(Arr," _ ");
	return 0;
}