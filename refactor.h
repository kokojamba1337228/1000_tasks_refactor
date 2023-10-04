#include <cmath>
#include <iostream>

template<class T, class UnaryOperation>
T h(T start, T end, T result, UnaryOperation func) {
	for (; start <= end; ++start)
	{
		result = func(result, start);
	}
	return result;
}