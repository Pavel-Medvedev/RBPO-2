module Medvedev1bib21050:F2;

namespace RBPO {
	namespace Lab2 {
		namespace Variant15 {
			namespace Task4 {
				double f2(double);
			};
		};
	};
};

double RBPO::Lab2::Variant15::Task4::f2(double x) {
	return x < 4 ? cos(abs(2 + x)) : sqrt(x * x + 4);
};
