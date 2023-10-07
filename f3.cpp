module Medvedev1bib21050;

namespace RBPO {
	namespace Lab2 {
		namespace Variant15 {
			namespace Task3 {
				double f3(int);
				double a(int);
			};
		};
	};
};

double RBPO::Lab2::Variant15::Task3::f3(int n) {
	double sum = 0;
	for (int i = 0; i <= n; sum += a(i++));
	return sum;
};
