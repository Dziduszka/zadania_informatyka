#include <iostream>

int silnia(int n)
{
	if (n == 0)
		return 1;
	else
		return n * silnia(n - 1);
}

int main()
{
	int n;
	std::cout << "podaj n do wyliczenia silnii: ";
	std::cin >> n;
	std::cout << silnia(n) << std::endl;
}
