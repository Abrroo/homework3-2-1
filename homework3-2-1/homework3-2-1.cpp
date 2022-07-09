#include <iostream>

enum class months
{
	January = 1, February, March,
	April, May, June, July,
	August, September, October,
	November, December
};


int main()
{
	setlocale(LC_ALL, "Russian");

	int month = 0;
	months enum_month = months::January;

	do
	{
		std::cout << "Введите номер месяца: ";
		std::cin >> month;
		if (month > 13 || month < 0)
		{
			std::cout << "Нет такого месяца!" << std::endl;
		}
		else
		{
			enum_month = static_cast<months>(month);
			switch (enum_month)
			{
			case months::January:	std::cout << "Январь" << std::endl; break;
			case months::February:	std::cout << "Февраль" << std::endl; break;
			case months::March:		std::cout << "Март" << std::endl; break;
			case months::April:		std::cout << "Апрель" << std::endl; break;
			case months::May:		std::cout << "Май" << std::endl; break;
			case months::June:		std::cout << "Июнь" << std::endl; break;
			case months::July:		std::cout << "Июль" << std::endl; break;
			case months::August:	std::cout << "Август" << std::endl; break;
			case months::September:	std::cout << "Сентябрь" << std::endl; break;
			case months::October:	std::cout << "Октябрь" << std::endl; break;
			case months::November:	std::cout << "Ноябрь" << std::endl; break;
			case months::December:	std::cout << "Декабрь" << std::endl; break;
			default:				break;
			}
		} 
	} while (month);
	return 0;
}