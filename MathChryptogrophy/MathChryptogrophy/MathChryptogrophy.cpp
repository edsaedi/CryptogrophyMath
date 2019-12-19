#include <iostream>
#include <memory>
#include <vector>

std::vector<int> Factor(int number)
{
	std::vector<int> factors;
	for (size_t i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			factors.push_back(i);
		}
	}
	return factors;
}

int GCF(int num1, int num2)
{
	std::vector<int> factor1 = Factor(num1);
	std::vector<int> factor2 = Factor(num2);
	int GCF{};
	for (int i = factor1.size() - 1; i > 0; i--)
	{
		for (int j = factor2.size() - 1; j > 0; j--)
		{
			if (factor1[i] == factor2[j])
			{
				return factor1[i];
			}
		}
	}
	return 1;
}

bool RelativelyPrime(int num1, int num2)
{
	if (GCF(num1, num2) == 1)
	{
		return true;
	}
	return false;
}

bool Prime(int num)
{
	std::vector<int> factors = Factor(num);
	if (factors.size() == 2)
	{
		return true;
	}
	return false;
}

int main()
{
	//Factors
	/*std::cout << "Type in a number to factor.";
	int number{};
	std::cin >> number;
	std::vector<int> factors = Factor(number);
	for (size_t i = 0; i < factors.size(); i++)
	{
		std::cout << factors[i] << ", ";
	}*/

	//GCF
	//std::cout << "Enter in the first number for GCF.";
	//int num1{};
	//std::cin >> num1;

	//std::cout << "Enter in the second number for GCF.";
	//int num2{};
	//std::cin >> num2;

	//std::cout << GCF(num1, num2);

	//Relatively Prime
	/*std::cout << "Enter in the first number for Relatively Prime.";
	int num1{};
	std::cin >> num1;

	std::cout << "Enter in the second number for Relatively Prime.";
	int num2{};
	std::cin >> num2;

	bool rp = RelativelyPrime(num1, num2);
	if (rp)
	{
		std::cout << "It is relatively prime.";
	}
	else
	{
		std::cout << "It is not relatively prime.";
	}*/

	std::cout << "Enter in a number.";
	int number{};
	std::cin >> number;
	bool pr = Prime(number);
	if (pr)
	{
		std::cout << "True";
	}
	else
	{
		std::cout << "False";
	}
}