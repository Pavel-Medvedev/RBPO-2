module Medvedev1bib21050:F3;

namespace RBPO {
	namespace Lab2 {
		namespace Variant15 {
			namespace Task4 {
				double f3(unsigned short);
			};
		};
	};
};

double RBPO::Lab2::Variant15::Task4::f3(unsigned short n) {
	double sum = 0;
	for (int i = -1; i < n; sum += a(++i));
	return sum;
};
