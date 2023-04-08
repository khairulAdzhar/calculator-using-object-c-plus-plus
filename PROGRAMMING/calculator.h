#pragma once
#ifndef CALC_H
#define CALC_H
class calculator {
	private:
		int x,y;
	public:
		calculator(int a,int b);
		calculator();
		~calculator();
		void setXY(int a, int b);
		void display();
		int add();
		int sub();
		int multi_();
		int div_();
};
#endif
