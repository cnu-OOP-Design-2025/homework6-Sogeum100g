#include <iostream>
#include "bird.h"

using namespace std;

/*
cry() 메서드: "Quake" 문자열을 출력
생성자: 부모 클래스의 생성자를 호출하여 species 변수를 "Duck" 문자열로 설정, cry() 메서드 호출
소멸자: cry() 메서드 호출
*/
void Duck::cry() { cout << "Quack!" << endl; }
Duck::Duck() : Bird("Duck") { cry(); }
Duck::~Duck() { cry(); }


/*
cry() 메서드: "Squake" 문자열을 출력
fly() 메서드: "This bird can't fly." 문자열을 출력
생성자: 부모 클래스의 생성자를 호출하여 species 변수를 "Penguin" 문자열로 설정, cry() 메서드 호출
소멸자: cry() 메서드 호출
*/
void Penguin::cry() { cout << "Squawk!" << endl;}
void Penguin::fly() { cout << "This bird can't fly." << endl;}
Penguin::Penguin() : Bird("Penguin") { cry(); }
Penguin::~Penguin() { cry(); }


/*
cry() 메서드: "Screech" 문자열을 출력
swim() 메서드: "This bird can't swim." 문자열을 출력
생성자: 부모 클래스의 생성자를 호출하여 species 변수를 "Eagle" 문자열로 설정, cry() 메서드 호출
소멸자: cry() 메서드 호출
*/
void Eagle::cry() { cout << "Screech!" << endl; }
void Eagle::swim() { cout<< "This bird can't swim." << endl; }
Eagle::Eagle() : Bird("Eagle") { cry(); }
Eagle::~Eagle() { cry(); }
