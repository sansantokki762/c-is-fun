#include <iostream>
#include <string>
using namespace std;

int main()

{
    //struct jingay {
    //    float score;
    //    int age;
    //    string name;
    //    int eyesight;
    //};

    //jingay jinwoosstatus[10] = {
    //    {1, 11, "jinwoo",-1972},
    //    {100, 17 , "shitake mushroom", -19999999999},
    //    {90, 40,"pork belly", -2}
    //};

    ////cout << jinwoosstatus[0].name << endl;
    ////cout << jinwoosstatus[1].name << endl;
    ////cout << jinwoosstatus[2].name << endl;

    //for (int i = 0; i < 3; i++) { // i = 동작 반복 횟수
    //    cout << "score: " << jinwoosstatus[i].score; // i=0, i=1, i=2
    //    cout << "age: " << jinwoosstatus[i].age;
    //    cout << "name: " << jinwoosstatus[i].name;
    //    cout << "eye sight: " << jinwoosstatus[i].eyesight << endl;
    //}

    /*jingay a1;
    a1.age = 21;
    a1.name = "jingay";
    a1.eyesight = -1234;
    a1.score = 1;

    cout << "age: " << a1.age << endl;
    cout << "name: " << a1.name << endl;
    cout << "eye sight: " << a1.eyesight << endl; 
    cout << "score: " << a1.score << endl;*/

    int x = 19; // 자료의 값 저장
    int *y; // * <= 자료의 주소를 저장 * = &y
    y = &x; // y주소 = &x주소 <= 대입
    cout << &x << endl; // 주소 출력
    cout << y << endl; // = &y
    cout << *y << endl; // y주소 => (19)
}