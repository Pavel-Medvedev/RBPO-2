export module Medvedev1bib21050:F3;

import :A;

namespace RBPO {
	namespace Lab2 {
		namespace Variant15 {
			namespace Task4 {
				export double f3(int);
			};
		};
	};
};

double RBPO::Lab2::Variant15::Task4::f3(int n) {
	double sum = 0;
	for (int i = 0; i <= n; sum += a(i++));
	return sum;
};
