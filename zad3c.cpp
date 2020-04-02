#include <iostream>

float fib(int n)
{
	if (n == 1)
		return 2;
	else if (n == 2)
		return -4;
	else
		return fib(n - 2) + 2 * fib(n - 1) + 0.5;
}

int main()
{
	int n;
	std::cout << "podaj nr elementu ciagu: ";
	std::cin >> n;
	std::cout << fib(n) << std::endl;
}