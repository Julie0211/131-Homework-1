#include <memory>
#include <vector>

#include "GroceryItem.hpp"

int main()
{
	GroceryItem g;

	std::vector<std::unique_ptr<GroceryItem>> groceries;
	while(std::cin >> g)
	{
		groceries.push_back(std::make_unique<GroceryItem>(g));
	}

	for (auto it = groceries.rbegin(); it != groceries.rend(); ++it)
	{
		std::cout << *it->get() << std::endl;
	}
	
	return 0;
}
