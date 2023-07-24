#include <iostream>
#include "ToyFactory.cpp"
#include "Singleton.cpp"

int main() {
	/////////////////////FACTORY DESIGN PATTERN/////////////////////////////////
	//client code starts
	/*int type;
	while (1) {
		std::cout << std::endl << "Enter type or zero for exit" << std::endl;
		std::cin >> type;
		if (!type)
			break;
		Toy* v = ToyFactory::createToy(type);
		if (v) {
			v->showProduct();
			delete v;
		}
	}
	std::cout << "Exit..." << std::endl;
	//client code ends
	return 0;*/
	///////////////////////////////////////////////////////////////////////////

	/////////////////////////////SINGLETON/////////////////////////////////////
	GameSettings& settings = GameSettings::getInstance();
	settings.displaySettings();
	return 0;
	///////////////////////////////////////////////////////////////////////////
}