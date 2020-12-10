#include <iostream>
#include <string>

using namespace std;

class ScreenSetting {

	static ScreenSetting *instance;

	int brightness;
	int width;
	int height;
  int redRatio;
  int blueRatio;
  int greenRatio;

	ScreenSetting(): width(1280), height(720), brightness(0), 
  redRatio(100), blueRatio(100), greenRatio(100) {

  }


public:
	static ScreenSetting *getInstace() {

		if (!instance) {
          instance = new ScreenSetting;
        }
        return instance;
    }
	  void setWidth(int width) {

    width = width;

    }

	void setHeight(int height) {

    height = height;

    }
	void setBrighness(int brightness) {

    brightness = brightness;

    }

	int getWidth() {

    return width;

    }

	int getHeight() {

    return height;
    }
	int getBrightness() {

    return brightness;
    }
	void displaySetting() {
    cout << "Screen Green Ratio "<< greenRatio << endl;
    cout << "Screen Blue Ratio "<< blueRatio<< endl;
    cout << "Screen red Ratio "<< redRatio<< endl;
		cout <<"Screen Brightness " <<brightness<< endl;
		cout << "Screen Height " << height << endl;
		cout << "Screen Width " << width << endl << endl;
	}
};

ScreenSetting *ScreenSetting:: instance = nullptr;

void changeSettings () {
	ScreenSetting *s = ScreenSetting::getInstace();
	s->displaySetting();
}

int main() {

	ScreenSetting *s = ScreenSetting::getInstace();
	s->displaySetting();
	s->setBrighness(55);
  s->setWidth(1080);
  
	
  changeSettings();
    return 0;
}