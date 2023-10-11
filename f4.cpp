module;
#include <cmath>
module Medvedev1bib21050;

namespace RBPO {
	namespace Lab2 {
		namespace Variant15 {
			namespace Task3 {
				double f4(double);
				double a(unsigned short);
			};
		};
	};
};

double RBPO::Lab2::Variant15::Task3::f4(double eps) {
	double sum = 0, temp = a(0), temp1 = a(1); int i = 1;
	do
	{
		sum += temp, temp = temp1, temp1 = a(++i);
	} while (eps < std::abs(temp - temp1));
	return i - 1 ? sum : a(0);
};
