#include <iostream>

float fib(int n)
{
	if (n == 1)
		return 0.5;
	else if (n == 2)
		return 1;
	else
		return 3 * fib(n - 2) + fib(n - 1);
}

int main()
{
	int n;
	std::cout << "podaj nr elementu ciagu: ";
	std::cin >> n;
	std::cout << fib(n) << std::endl;
}
