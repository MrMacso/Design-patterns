#include <iostream>

class Toy {
protected:
	std::string name;
	float price;
public:
	virtual void prepareParts()  = 0;
	virtual void combineParts()  = 0;
	virtual void assembleParts() = 0;
	virtual void applyLabel()    = 0;
	virtual void showProduct()   = 0;
};

class Car : public Toy {
	virtual void prepareParts() { std::cout << "Preparing Car Parts" << std::endl; }
	virtual void combineParts() { std::cout << "Combining Car Parts" << std::endl; }
	virtual void assembleParts() { std::cout << "Assembling Car Parts" << std::endl; }
	virtual void applyLabel() { std::cout << "Applying Car Labels" << std::endl; name = "Car"; price = 10; }
	virtual void showProduct() { std::cout << "Name: " << name<< std::endl << "Price: " << price << std::endl; }
};

class Bike : public Toy {
	virtual void prepareParts() { std::cout << "Preparing Bike Parts" << std::endl; }
	virtual void combineParts() { std::cout << "Combining Bike Parts" << std::endl; }
	virtual void assembleParts() { std::cout << "Assembling Bike Parts" << std::endl; }
	virtual void applyLabel() { std::cout << "Applying Bike Labels" << std::endl; name = "Bike"; price = 20; }
	virtual void showProduct() { std::cout << "Name: " << name << std::endl << "Price: " << price << std::endl; }
};

class Plane : public Toy {
	virtual void prepareParts() { std::cout << "Preparing Plane Parts" << std::endl; }
	virtual void combineParts() { std::cout << "Combining Plane Parts" << std::endl; }
	virtual void assembleParts() { std::cout << "Assembling Plane Parts" << std::endl; }
	virtual void applyLabel() { std::cout << "Applying Plane Labels" << std::endl; name = "Plane"; price = 30; }
	virtual void showProduct() { std::cout << "Name: " << name << std::endl << "Price: " << price << std::endl; }
};