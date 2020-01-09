#include <iostream>
#include <memory>
#include <vector>
#include <math.h>
#include <set>
#include "Pair.h"
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

void MersennePrime()
{
	int count = 0;
	int power = 0;
	while (count < 9)
	{
		int number = pow(2, power) - 1;
		if (Prime(number))
		{
			std::cout << number << "\n";
			count++;
		}
		power++;
	}
}

int ModularMultiplicativeInverse(int number1, int number2)
{
	int answer = -1;
	bool rp = RelativelyPrime(number1, number2);
	if (!rp)
	{
		throw new _exception();
	}
	while (rp)
	{
		int leftSide = (number1 * answer) % number2;
		if (leftSide == 1)
			return answer;
		answer++;
	}
	return answer;
}

void Permutations(std::set<std::string> &set, std::string a, int l, int r)
{
	//std::vector<std::string> ans;

	if (l == r)
	{
		set.insert(a);
		//std::cout << a << std::endl;
		//ans.push_back(a);
	}
	else
	{
		for (size_t i = l; i <= r; i++)
		{
			std::swap(a[l], a[i]);
			//ans.push_back(gstring);
			Permutations(set, a, l + 1, r);
			std::swap(a[l], a[i]);
		}
	}

	//return ans;
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

	//Prime Numbers
	/*std::cout << "Enter in a number.";
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
	}*/

	//Mersenne Prime
	//MersennePrime();

	//UniquePairs of RelativelyPrimeNumbers
	/*for (size_t i = 0; i < 101; i++)
	{
		for (size_t j = i; j < 101; j++)
		{
			if (RelativelyPrime(i, j))
			{
				std::cout << i << ", " << j << "\n";
			}
		}
	}*/

	/*Pair p(5, 4);
	Pair t(4, 5);
	Pair z(5, 6);

	std::cout << (p == z) << std::endl;*/

	/*std::vector<Pair> pairs;
	for (size_t i = 0; i < 101; i++)
	{
		for (size_t j = 0; j < 101; j++)
		{
			Pair p(i, j);
			if (RelativelyPrime(i, j))
			{
				bool unique = true;
				for (size_t k = 0; k < pairs.size(); k++)
				{
					if (pairs[k] == p)
					{
						unique = false;
						break;
					}
				}
				if (unique)
				{
					pairs.push_back(p);
					std::cout << i << ", " << j << "\n";
				}
			}
		}
	}*/

	//Modular multiplicative inverse
	/*std::cout << "Enter in a number";
	int num1;
	std::cin >> num1;
	std::cout << "Enter in a number";
	int num2;
	std::cin >> num2;

	std::cout << ModularMultiplicativeInverse(num1, num2);*/

	std::cout << "Enter in a string to permutate \n";
	std::string pstring;
	std::cin >> pstring;
	std::set<std::string> test;
	Permutations(test, pstring, 0, pstring.size() - 1);
	/*for (size_t i = 0; i < vect.size(); i++)
	{
		std::cout << vect[i] << "\n";
	}*/

	for (auto i : test)
	{
		std::cout << i << std::endl;
	}

}