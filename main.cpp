#include <iostream>
#include <memory>
#include <vector>

#include "GroceryItem.hpp"

int main()
{
	GroceryItem grocery;

	std::vector<std::unique_ptr<GroceryItem>> groceries;
	while(std::cin >> grocery)
	{
		groceries.push_back(std::make_unique<GroceryItem>(grocery));
	}

	for (auto it = groceries.rbegin(); it != groceries.rend(); ++it)
	{
		std::cout << *it << '\n';
	}
	
	return 0;
}
