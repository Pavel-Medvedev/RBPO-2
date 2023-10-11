module Medvedev1bib21050:F4;

namespace RBPO {
	namespace Lab2 {
		namespace Variant15 {
			namespace Task4 {
				double f4(double);
			};
		};
	};
};

double RBPO::Lab2::Variant15::Task4::f4(double eps) {
	double sum = 0; int i = 1;
	for (double temp = a(0), temp1 = a(1); eps < abs(temp - temp1); sum += temp, temp = temp1, temp1 = a(++i));
	return i - 1 ? sum : a(0);
};
