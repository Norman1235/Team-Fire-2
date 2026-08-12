#include <string>
#include <iostream>

int main()
{
	std::string stringOut = "";

	for (int currentNumber = 1; currentNumber < 101; currentNumber++)
	{
		stringOut = std::to_string(currentNumber) + " ";

		if (currentNumber % 3 == 0)
		{
			stringOut += "Fizz";

		}


		if (currentNumber % 5 == 0)
		{
			stringOut += "Buzz";

		}

		std::cout << stringOut << "\n";

		stringOut = "";

	}

}