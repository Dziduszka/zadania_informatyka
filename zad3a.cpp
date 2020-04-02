#include <iostream>

float fib(int n)
{
	if (n == 1)
		return 2;
	else
		return 3 * fib(n - 1) + 1 / 2;
}

int main()
{
	int n;
	std::cout << "podaj nr elementu ciagu: ";
	std::cin >> n;
	std::cout << fib(n) << std::endl;
}
