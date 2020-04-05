#include <Bangtal.h>
#pragma comment(lib, "Bangtal.lib")

ObjectID picturerow[3];
ObjectID picturecol[3];


int picture1X = 252, picture1Y = 451, picture2X = 510, picture2Y = 451, picture3X = 768, picture3Y = 451,
picture4X = 252, picture4Y = 268, picture5X = 510, picture5Y = 268, picture6X = 768, picture6Y = 268,
blackX = 252, blackY = 85, picture8X = 510, picture8Y = 85, picture9X = 768, picture9Y = 85;

SceneID scene1;

ObjectID naruto1, naruto2, naruto3, naruto4, naruto5, naruto6, black, naruto8, naruto9;

ObjectID createObject(const char* name, const char* image, SceneID scene, int x, int y, bool shown) {
	ObjectID object = createObject(name, image);
	locateObject(object, scene, x, y);
	if (shown) {
		showObject(object);
	}

	return object;
}

void swap(int& a, int& b) {
	int t = a;
	a = b;
	b = t;
}



void mouseCallback(ObjectID object, int x, int y, MouseAction action) {
	if (object == naruto1) {
		swap(picture1X, blackX);
		swap(picture1Y, blackY);
		locateObject(black, scene1, blackX, blackY);
		locateObject(naruto1, scene1, picture1X, picture1Y);
	}

	else if (object == naruto2) {
		swap(picture2X, blackX);
		swap(picture2Y, blackY);
		locateObject(black, scene1, blackX, blackY);
		locateObject(naruto2, scene1, picture2X, picture2Y);
	}

	else if (object == naruto3) {
		swap(picture3X, blackX);
		swap(picture3Y, blackY);
		locateObject(black, scene1, blackX, blackY);
		locateObject(naruto3, scene1, picture3X, picture3Y);
	}

	else if (object == naruto4) {
		swap(picture4X, blackX);
		swap(picture4Y, blackY);
		locateObject(black, scene1, blackX, blackY);
		locateObject(naruto4, scene1, picture4X, picture4Y);
	}

	else if (object == naruto5) {
		swap(picture5X, blackX);
		swap(picture5Y, blackY);
		locateObject(black, scene1, blackX, blackY);
		locateObject(naruto5, scene1, picture5X, picture5Y);
	}

	else if (object == naruto6) {
		swap(picture6X, blackX);
		swap(picture6Y, blackY);
		locateObject(black, scene1, blackX, blackY);
		locateObject(naruto6, scene1, picture6X, picture6Y);
	}

	else if (object == naruto8) {
		swap(picture8X, blackX);
		swap(picture8Y, blackY);
		locateObject(black, scene1, blackX, blackY);
		locateObject(naruto8, scene1, picture8X, picture8Y);
	}

	else if (object == naruto9) {
		swap(picture9X, blackX);
		swap(picture9Y, blackY);
		locateObject(black, scene1, blackX, blackY);
		locateObject(naruto9, scene1, picture9X, picture9Y);
	}
	
	if (picture1X == 768 && picture1Y == 451 && picture2X == 510 && picture2Y == 451 && picture3X == 252 && picture3Y == 451 &&
		picture4X == 510 && picture4Y == 85 && picture5X == 252 && picture5Y == 85 && picture6X == 510 && picture6Y == 268 &&
		blackX == 768 && blackY == 85 && picture8X == 252 && picture8Y == 268 && picture9X == 768 && picture9Y == 268) {
		setObjectImage(black, "나루토원본_009.jpeg");
		showMessage("성공~~");
	}
}








int main() {

	setMouseCallback(mouseCallback);

	scene1 = createScene("나루토", "흰색배경.png");


	naruto1 = createObject("나루토1", "나루토원본_003.jpeg", scene1, picture1X, picture1Y, true);
	

	naruto2 = createObject("나루토2", "나루토원본_002.jpeg", scene1, picture2X, picture2Y, true);


	naruto3 = createObject("나루토3", "나루토원본_001.jpeg", scene1, picture3X, picture3Y, true);
	

	naruto4 = createObject("나루토4", "나루토원본_008.jpeg", scene1, picture4X, picture4Y, true);
	

	naruto5 = createObject("나루토5", "나루토원본_007.jpeg", scene1, picture5X, picture5Y, true);
	

	naruto6 = createObject("나루토6", "나루토원본_005.jpeg", scene1, picture6X, picture6Y, true);
	

	black = createObject("검은사각형", "검은사각형.jpg", scene1, blackX, 85, true);
	

	naruto8 = createObject("나루토8", "나루토원본_004.jpeg", scene1, picture8X, picture8Y, true);
	

	naruto9 = createObject("나루토9", "나루토원본_006.jpeg", scene1, picture9X, picture9Y, true);
	

	
	startGame(scene1);
}