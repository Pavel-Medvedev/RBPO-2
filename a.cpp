module Medvedev1bib21050;

namespace RBPO {
	namespace Lab2 {
		namespace Variant15 {
			namespace Task3 {
				double a(unsigned short);
			};
		};
	};
};

double RBPO::Lab2::Variant15::Task3::a(unsigned short i) {
	return (i % 2 == 0 ? 1 : -1) * (i + 1) / double(i * i + 2 * i + 1);
};
