#include <iostream>
#include <string>
using namespace std;

int main() {

	//int x = 2; // 스택
	//int* y;  // 아무것도 없음 주소 X 데이터 없음 아무것도 실행
	//y = &x;

	//cout << *y << endl;

	//int* a = new int; // 임의의 주소를 할당시킴, 없기엔 뭐하니까 그냥 아무 주소나 던져 줌 거지면 안되니까

	//// int a = 4;
	//*a = 4;
	//cout << *a << endl; // 아무 주소가 들어감

	//delete a; // 메모리 데이터 삭제 하기(수동으로 해야함)

	//struct MyStruct
	//{
	//	int age;
	//	string gender; // 어떤 데이터 타입인지 선언
	//};

	//MyStruct daon; // 그 데이터 타입으로 변수를 선언-
	//cin >> daon.age;

	//int a[10] = { 1, 2, 3, 4, 5 }; // 0 0 0 0 0

	//int sub = 14; // 변수의 자료형(데이터타입)의 할당 byte 크기 구하기

	//cout << sizeof(sub) << endl;

	//for (int i = 0; i < sizeof(a) / sizeof(a[4]); i++) { // 40byte / 4byte = 10 <= 배열 전체의 크기
	//	cout << a[i] << endl; // a[0] > a[1] ... a[9]
	//}

	//for (int i = 0; i <= 5; i++) {
	//	for (int j = 0; j < i; j++) {
	//		cout << "*"; // 별찍기 줄내림X
	//	}
	//	cout << endl; // 줄내림
	//}
	int i = 0;
	while (i >= 0) { // for 대상을 정해서 무조건 정확한 순회 <= 끝이있는 
		cout << i;  // 0 = 0, 1 = 1, 10 = 10
		if (i > 10) { // 0 > 10, 1 > 10, 10 > 10
			break; // 강제 종료
		} // 거짓이면 실행X
		i++; // 0 = 1, 1 = 2, 10 = 11
	}

} // 데이터 다 삭제 => 메모리 데이터 삭제

