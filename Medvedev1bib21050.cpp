module;
#include <cmath>

module Medvedev1bib21050;

namespace RBPO {
	namespace Lab2 {
		namespace Variant15 {
			namespace Task2 {
				double f1(double);
				double f2(double);
				double f3(unsigned short);
				double f4(double);
				double a(unsigned short);
			};
		};
	};
};

double RBPO::Lab2::Variant15::Task2::f1(double x) {
	return sqrt(2 * x + 2 * sqrt(x * x - 4)) / (sqrt(x * x - 4) + x + 2);
};

double RBPO::Lab2::Variant15::Task2::f2(double x) {
	if (x < 4)
		return cos(abs(2 + x));
	return sqrt(x * x + 4);
};

double RBPO::Lab2::Variant15::Task2::a(unsigned short i) {
	return (i % 2 == 0 ? 1 : -1) * (i + 1) / double(i * i + 2 * i + 1);
};

double RBPO::Lab2::Variant15::Task2::f3(unsigned short n) {
	double sum = 0; int i = -1;
	while (i < n)
		sum += a(++i);
	return sum;
};

double RBPO::Lab2::Variant15::Task2::f4(double eps) {
	double sum = 0, temp = a(0), temp1 = a(1); int i = 1;
	while (eps < abs(temp - temp1))
		sum += temp, temp = temp1, temp1 = a(++i);
	return i - 1 ? sum : a(0);
};


