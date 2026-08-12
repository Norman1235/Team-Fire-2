#include <string>
#include <iostream>
bool IsPrime(int N);

int main()
{
	std::string stringOut = "";
	int currentNumber = 1; //We start printing at the number 1
	int endingPoint = 101;


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

		std::cout << stringOut << "\n";

		stringOut = "";

	}

}

bool IsPrime(int N)
{
	if (N <= 1) return false;

	if (N <= 3) return false;

	if (N % 2 == 0 || N % 3 == 0) return false;

	for (int i = 5; i * i <= N; i += 6)
	{
		if (N % i == 0 || N % (i + 2) == 0)
		{
			return false;
		}
	}
	return true;
}
