export module Medvedev1bib21050:F1;
import "cmath";

namespace RBPO {
	namespace Lab2 {
		namespace Variant15 {
			namespace Task4 {
				export double f1(double);
			};
		};
	};
};

double RBPO::Lab2::Variant15::Task4::f1(double x) {
	return sqrt(2 * x + 2 * sqrt(x * x - 4)) / (sqrt(x * x - 4) + x + 2);
};
