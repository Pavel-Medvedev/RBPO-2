#include <iostream>

import Medvedev1bib21050;

int main() {
	char q;
	do
	{
		std::cin >> q;
		switch (q)
		{
			int n; double x, eps;
		case '1':
			std::cout << "You choose 1 Task to test." << std::endl
					  << "Input x, n and epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant15::Task1::f1(x) << std::endl
					  << "f2(x) = " << RBPO::Lab2::Variant15::Task1::f2(x) << std::endl
					  << "f3(n) = " << RBPO::Lab2::Variant15::Task1::f3(n) << std::endl
					  << "f4(eps) = " << RBPO::Lab2::Variant15::Task1::f4(eps) << std::endl;
			break;
		case '2':
			std::cout << "You choose 2 Task to test." << std::endl
				<< "Input x, n and epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant15::Task2::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant15::Task2::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant15::Task2::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant15::Task2::f4(eps) << std::endl;
			break;
		case '3':
			std::cout << "You choose 3 Task to test." << std::endl
				<< "Input x, n and epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant15::Task3::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant15::Task3::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant15::Task3::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant15::Task3::f4(eps) << std::endl;
			break;
		case '4':
			std::cout << "You choose 4 Task to test." << std::endl
				<< "Input x, n and epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant15::Task4::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant15::Task4::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant15::Task4::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant15::Task4::f4(eps) << std::endl;
			break;
		case '5':
			std::cout << "You choose 5 Task to test." << std::endl
				<< "Input x, n and epsilon:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant15::Task5::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant15::Task5::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant15::Task5::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant15::Task5::f4(eps) << std::endl;
			break;
		case 'Q':
			break;
		default:
			std::cout << "Inputed data is incorrect!";
		}
	} while (q != 'Q');


	return 0;
}
/*
* 1 12.34 100 0.0001 2 12.34 100 0.0001 3 12.34 100 0.0001 4 12.34 100 0.0001 5 12.34 100 0.0001 Q
*/