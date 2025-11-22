#include <iostream>
#include <string>
using namespace std;

int main()
{
	//cout << "character: "; // 안내
	//string x; // 들어갈 공간 필수
	//cin >> x; // 넣기
	//cout << "my name is: " + x; // 최종 출력

	//cout << "sub is";
	//string sussy;
	//cin >> sussy;
	//cout << "very sub is " + sussy; // << "very sub is " << sussy;

	//cout << "write the number here: ";
	//int mum;
	//cin >> mum;

	//if (mum % 2 == 0) { // 10 / 5 = 5, 10 % 5 = 0
	//	cout << "it's even number";
	//}
	//else {
	//	cout << "it's odd number";
	//}

	//cout << "what is seojoon's gender???? ";
	//string gender;
	//cin >> gender;

	//if (gender == "man" or gender == "M") { // and = 조건문1 교집합 조건문2
	//	cout << "GAY"; // or = 조건문1 합집합 조건문2
	//}
	//else if (gender == "woman" or gender == "F") {
	//	cout << "LES";
	//}
	//else {
	//	cout << "OH, TRANS GENDER?!";
	//}
	
	for (int age = 0; age <= 20; age++) { // 1000 ~ 1010 <= 컴퓨터가 보는 문자열
		cout << "sub's age: " << age << endl; // sub's age: == 1000/ 1001 / 1002...
	}
	cout << "jinwoo" + 2; // 컴퓨터는 "문자" 1000/1001... 주소로 읽는다
}