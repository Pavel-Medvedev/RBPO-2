module;
#include <cmath>
export module Medvedev1bib21050;

export import :F1;
export import :F2;
export import :A;
export import :F3;
export import :F4;


namespace RBPO {
	namespace Lab2 {
		namespace Variant15 {
			namespace Task1 {
				export double f1(double);
				export double f2(double);
				export double f3(unsigned short);
				export double f4(double);
				double a(unsigned short);
			};
			export namespace Task2 {
				double f1(double);
				double f2(double);
				double f3(unsigned short);
				double f4(double);
			};
			namespace Task3 {
				export double f1(double);
				export double f2(double);
				export double f3(unsigned short);
				export double f4(double);
				double a(unsigned short);
			};
			namespace Task5 {
				export double f1(double);
				export double f2(double);
				export double f3(unsigned short);
				export double f4(double);
				double a(unsigned short);
			};
			namespace Task1 {
				double f1(double x) {
					return sqrt(2 * x + 2 * sqrt(x * x - 4)) / (sqrt(x * x - 4) + x + 2);
				};
				
				double f2(double x) {
					return x < 4 ? cos(abs(2 + x)) : sqrt(x * x + 4);
				};
				
				double f3(unsigned short n) {
					double sum = 0;
					for (int i = -1; i < n; sum += a(++i));
					return sum;
				};
				
				double f4(double eps) {
					double sum = 0; int i = 1;
					for (double temp = a(0), temp1 = a(1); eps < std::abs(temp - temp1); sum += temp, temp = temp1, temp1 = a(++i));
					return i - 1 ? sum : a(0);
				};

				double a(unsigned short i) {
					return (i % 2 == 0 ? 1 : -1) * (i + 1) / double(i * i + 2 * i + 1);
				};
			};
		};
	};
};

module :private;

namespace RBPO {
	namespace Lab2 {
		namespace Variant15 {
			namespace Task5 {
				double f1(double x) {
					return sqrt(2 * x + 2 * sqrt(x * x - 4)) / (sqrt(x * x - 4) + x + 2);
				};

				double f2(double x) {
					return x < 4 ? cos(abs(2 + x)) : sqrt(x * x + 4);
				};

				double f3(unsigned short n) {
					double sum = 0;
					for (int i = 0; i <= n; sum += a(i++));
					return sum;
				};

				double f4(double eps) {
					double sum = 0; int i = 1;
					for (double temp = a(0), temp1 = a(1); eps < std::abs(temp - temp1); sum += temp, temp = temp1, temp1 = a(++i));
					return i - 1 ? sum : a(0);
				}

				double a(unsigned short i) {
					return (i % 2 == 0 ? 1 : -1) * (i + 1) / double(i * i + 2 * i + 1);
				};
			};
		};
	};
};