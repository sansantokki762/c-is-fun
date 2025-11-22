#include <iostream>
using namespace std;

//class Car // 객체 도면 <= 대상의 공통점을 정의
//{
//public:
//	string color; // 색깔 <= 필요한 데이터
//	int speed; // 스피드 <= 필요한 데이터
//
//	void drive() { // 속도 층정기 <= 기능
//		cout << "the car is running at " << speed << " km/h." << endl;
//	}
//};
class animal { // 동물 객체
public:
	virtual void speak() { // 소리 내기 기능
		cout << "the animal is shouting " << endl;
	}
};

class dog : public animal {
public:
	void speak() override { // 재정의 <= 개가 내는 소리가 있어서
		cout << "mung mung!" << endl;
	}
};

class cat : public animal {
public:
	void speak() override { // 재정의 <= 고양이가 내는 소리가 있어서
		cout << "meow meow!" << endl;
	}
};


int main()
{
	/*Car BOONG;
	BOONG.color = "PINK";
	BOONG.speed = 76;
	BOONG.drive();

	Car Sub;
	Sub.color = "yello";
	Sub.speed = 100;
	Sub.drive();*/
	dog sub;
	sub.speak();
	cat jin;
	jin.speak();
}