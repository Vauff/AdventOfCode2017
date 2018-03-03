#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::string input;
	int sum = 0;
	int lastint;
	int firstint;
	int iterations = 0;
	std::vector<int> array;

	std::cout << "Please enter the input for the puzzle:" << std::endl; 
	std::cin >> input;
	
	for(char& c : input) 
	{
		int i = c - '0';

		iterations++;

		if (iterations == 1)
		{
			firstint = i;
		}

		if (i == lastint)
		{
			sum = sum + i;
		}

		lastint = i;
	}

	if (firstint == lastint)
	{
		sum = sum + lastint;
	}

	std::cout << "The result for the first part of the puzzle is: " + std::to_string(sum) << std::endl;
	sum = 0;
	iterations = 0;

	for(char& c : input) 
	{
		int i = c - '0';

		array.push_back(i);
	}

	for(char& c : input) 
	{
		int i = c - '0';

		iterations++;

		if (i == array[array.size() / 2 + iterations])
		{
			sum = sum + i;
		}
	}

	std::cout << "The result for the second part of the puzzle is: " + std::to_string(sum) << std::endl;
	return 0;
}