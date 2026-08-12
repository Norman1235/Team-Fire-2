#include <string>
#include <iostream>
bool IsPrime(int N);

int main()
{
	std::string stringOut = "";
	int currentNumber = 1; //We start printing at the number 1
	int endingPoint = 100;

	int letterCount[26] = {}; // letterCount array for lowercase display

	for (currentNumber; currentNumber <= endingPoint; currentNumber++)
	{
		stringOut = std::to_string(currentNumber) + " ";

		if (currentNumber % 3 == 0) //Fizz prints if currentNmber is divisable by 3
		{
			stringOut += "Fizz";

		}

		if (IsPrime(currentNumber) == true)
		{
			std::cout << "P\n";
		}

		if (currentNumber % 5 == 0) //Buzz prints if currentNmber is divisable by 5
		{
			stringOut += "Buzz";

		}

		if (currentNumber % 10 == 0)
		{
			stringOut += " 10x";
		}


		for (char letter = 'a'; letter <= 'z'; ++letter)
		{
			for (int i = 0; i < stringOut.size(); ++i)
			{
				if (stringOut[i] == letter)
				{
					++letterCount[letter - 'a'];
				}
			}

			if (letterCount[letter - 'a'] != 0)
			{
				std::cout << letter << ": "
					<< letterCount[letter - 'a'] << '\n';
			}
		}

		if (currentNumber % 10 == 0)
		{
			stringOut += " 10x";
		}

		std::cout << stringOut << "\n";

		stringOut = "";

	}

}
