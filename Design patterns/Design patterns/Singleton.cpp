#include <iostream>
#include <string>

class GameSettings {
private:
	int _brightness;
	int _width;
	int _height;
	GameSettings() : _width(786), _height(1300), _brightness(75){} //Constructor
public:
	//======Heart of singleton======================
	static GameSettings& getInstance() {

		static GameSettings _instance;
		return _instance;
	}
	GameSettings(GameSettings const&) = delete;
	void operator= (GameSettings const&) = delete;
	//==============================================

	void setWidth(int width)			{ _width = width; }
	void setHeight(int height)			{ _height = height; }
	void setBrightness(int brightness)	{ _brightness = brightness; }

	int getWidth()		{ return _width; }
	int getHeight()		{ return _height; }
	int getBrightness() { return _brightness; }

	void displaySettings() {
		std::cout << "brightness: " << _brightness << std::endl;
		std::cout << "height: " << _height << std::endl;
		std::cout << "width: " << _width << std::endl;
	}
};