module;
#include <cmath>

module Medvedev1bib21050;

namespace RBPO {
	namespace Lab2 {
		namespace Variant15 {
			namespace Task3 {
				double f1(double);
			};
		};
	};
};

double RBPO::Lab2::Variant15::Task3::f1(double x) {
	return sqrt(2 * x + 2 * sqrt(x * x - 4)) / (sqrt(x * x - 4) + x + 2);
};
