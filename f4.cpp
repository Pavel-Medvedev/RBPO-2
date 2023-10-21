module;
#include <cmath>
module Medvedev1bib21050;

namespace RBPO {
	namespace Lab2 {
		namespace Variant15 {
			namespace Task3 {
				double f4(double);
				double a(long long);
			};
		};
	};
};

double RBPO::Lab2::Variant15::Task3::f4(double eps) {
	double sum = 0, temp = a(0), temp1 = temp; unsigned long long i = 0;
	do {
		sum += temp1, temp = temp1, temp1 = a(++i);
	} while (eps < std::abs(temp - temp1));
	return sum;
};
