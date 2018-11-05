#include <iostream>

//TODO #1.1: add a function prototype for fib
int fib(const int N);
//TODO #2.1: add a function prototype for fact

int main()
{
	//TODO: #1.2 call your fib function, print the result
	for (int i = 0; i < 20; i++)
		std::cout << fib(i) << std::endl;
	//TODO: #2.2 call your fact function, print the result

	return 0;
}

//TODO #2.3: add your recursive fib function from class
int fib(const int N)
{
	if (N == 0 || N == 1)
		return N;
	return fib(N - 1) + fib(N - 2);
}

//TODO #2.4: add your recursive fact function from class
