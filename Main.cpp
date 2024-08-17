#include "iostream"

void f(bool b, int n)
{
	for (int i = b; i <= n; i += 2)
		std::cout << i << "; ";
}
int main()
{
	const int n = 50;
	f(false, n);
}