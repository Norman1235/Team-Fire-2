#include <string>
#include <iostream>

int main()
{
	std::string stringOut = "";
	int currentNumber = 1; //We start printing at the number 1
	int endingPoint = 101;

	for (currentNumber; currentNumber < endingPoint; currentNumber++)
	{
		stringOut = std::to_string(currentNumber) + " ";

		if (currentNumber % 3 == 0) //Fizz prints if currentNmber is divisable by 3
		{
			stringOut += "Fizz";

		}


		if (currentNumber % 5 == 0) //Buzz prints if currentNmber is divisable by 5
		{
			stringOut += "Buzz";

		}

		std::cout << stringOut << "\n";

		stringOut = "";

	}

}
