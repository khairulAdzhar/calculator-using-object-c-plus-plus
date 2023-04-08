#include <iostream>
#include "calculator.h"
using namespace std;
calculator::calculator(int a,int b) {
	x = a;
	y = b;
}
calculator::calculator() {
	x = 0;
	y = 0;

}
calculator::~calculator(){}
void calculator::setXY(int a, int b)
{
	x = a;
	y = b;
}
void calculator::display() {
	cout << "hell0 world\n";
}
int calculator::add() {
	return  x + y;
}
int calculator::sub() {
	return  x - y;
}
int calculator::multi_() {
	return x * y;
}
int calculator::div_() {
	return x / y;
}
