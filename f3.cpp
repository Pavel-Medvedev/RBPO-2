module Medvedev1bib21050;

namespace RBPO {
	namespace Lab2 {
		namespace Variant15 {
			namespace Task3 {
				double f3(unsigned short);
				double a(unsigned short);
			};
		};
	};
};

double RBPO::Lab2::Variant15::Task3::f3(unsigned short n) {
	double sum = 0; int i = -1;
	do {
		sum += a(++i);
	} while (i < n);
	return sum;
};
