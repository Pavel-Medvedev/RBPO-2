module Medvedev1bib21050;

namespace RBPO {
	namespace Lab2 {
		namespace Variant15 {
			namespace Task3 {
				double f4(double);
				double a(int);
			};
		};
	};
};

double RBPO::Lab2::Variant15::Task3::f4(double eps) {
	double sum = 0; int i = 1;
	for (double temp = a(0), temp1 = a(1); eps < temp - temp1; sum += temp, temp = temp1, temp1 = a(++i));
	return i - 1 ? sum : a(0);
};
