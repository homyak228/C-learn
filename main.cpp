#include <iostream>

int main()
{
	setlocale(LC_ALL, "RU");

	std::string adj = "";
	std::string verb = "";
	std::string noun = "";

	std::cout << "Привет, введи любое существительное:" << std::endl;
	std::cin >> noun;
	std::cout << "Красава, а теперь введи любое прилагательное тогоже пола, что и существительное:" << std::endl;
	std::cin >> adj;
	std::cout << "Молодец, ну а сейчас мне нужен любой глагол в настоящем времени." << std::endl;
	std::cin >> verb;

	std::cout << "Вот, что у тебя получилось:" << '\n' << adj << " " << noun << " " << verb << " как одержимый(ая)!" << std::endl;

	return 0;
}
