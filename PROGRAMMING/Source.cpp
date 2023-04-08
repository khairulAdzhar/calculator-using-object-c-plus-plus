#include <iostream>
#include "calculator.h";
using namespace std;


int main() {

	calculator calc;
	cout << "tambah: " << calc.add() << endl;
	cout << "tolak: " <<calc.sub() << endl;
	cout << "darab: " << calc.multi_() << endl;
	cout << "bahagi: " << calc.div_() << endl;

	calculator calc1(40,5);
	cout << "tambah: " << calc1.add() << endl;
	cout << "tolak: " << calc1.sub() << endl;
	cout << "darab: " << calc1.multi_() << endl;
	cout << "bahagi: " << calc1.div_() << endl;

	calculator calc3;
	calc3.setXY(10, 5);
	cout << "tambah: " << calc3.add() << endl;
	cout << "tolak: " << calc3.sub() << endl;
	cout << "darab: " << calc3.multi_() << endl;
	cout << "bahagi: " << calc3.div_() << endl;


	return 0;
}

//#include<iostream>
//using namespace std;
//void display() 
//{
//	cout << "Please enter your option" << endl;//prom tetap
//	cout << "Cash withdrawal (W) OR Deposit Account (D) :";//prom tetap
//}
//char input_transaction() 
//{
//	char Type_;// isytihar p/ubah
//	display();
//	cin >> Type_; // user input kedalam nilai
//	while (Type_ != 'w' && Type_ != 'W' && Type_ != 'd' && Type_ != 'D') 
//	{
//		display();// memanggil fungsi display
//		cin >> Type_;
//	}
//	return Type_;
//}
//void inputBaki(float& baki)  // fungsi dengan satu parameter dan berkongsi nilai menggunakan simbol &
//{
//	cout << "Please enter balance in account(RM): ";//prom tetap
//	cin >> baki;// user input kedalam nilai
//	while (baki <= 0) 
//	{
//		cout << "Invalid !!! Please re-enter the amount of balance for your account(RM): ";//prom tetap
//		cin >> baki;
//	}
//}
//void input_Amount(char Type_, float baki, float& total) //fungsi dengan tiga parameter dan saty daripadanya berkongsi nilai menggunakan simbol &
//{
//	if (Type_ == 'w' || Type_ == 'W') //perika syarat Type_ w atau W
//	{
//		cout << "Please key-in amount to withdraw(RM): ";// prom tetap
//		cin >> total;//user input kedalam nilai
//		while (total > baki || total <= 0)
//		{ 
//			cout << "Withdrawal is not allowed" << endl;//prom tetap
//			cout << "BAKI AKAUN TIDAK DI KIRA !!!" << endl;//prom tetap
//			cout << "Please key-in valid amount of withdrawal(RM): ";//prom tetap
//			cin >> total; // user input kedalam nilai
//		}
//	}
//	else {
//		if (Type_ == 'd' || Type_ == 'D')
//		{
//			cout << "Please key-in amount to deposit(RM): ";//prom tetap
//			cin >> total; // user input kedalam nilai
//		}
//		while (total <= 0)//periksa syarat jika total lebih kecil atau sama dengan 0
//		{
//			cout << "Please key-in amount to deposit(RM): ";//prom tetap
//			cin >> total; // user input kedalam nilai
//		}
//	}
//}
//void display_Baki_transation(char Type_, float baki, float total)// fungsi dengan tiga parameter
//{
//	if (Type_ == 'w' || Type_ == 'W')
//	{
//		cout << "BAKI AKAUN ADALAH(RM): " << baki - total << endl;//prom tetap dan memaparkan baki - total
//	}
//	else 
//	{
//		cout << "BAKI AKAUN ADALAH(RM): " << baki + total << endl;//prom tetap dan memaparkan baki + total
//	}
//}
//int main() 
//{
//	char type; // istihar p/ubah jenis char
//	float balance, amount;// istihar p/ubah jenis float
//	type = input_transaction(); // memanggil fungsi input_transaction terima dan simpan nilai dalam type
//	inputBaki(balance);// memanggil fungsi inputBaki
//	input_Amount(type, balance, amount);// memanggil fungsi
//	display_Baki_transation(type, balance, amount);
//}
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//double input()
//{
//	double getNum;
//	cin >> getNum;
//	return getNum;
//}
//
//void cal_A(double air, double& caj)
//{
//	if (air > 0 && air <= 15)
//	{
//		caj = air * 0.5;
//	}
//	else if (air > 15 && air <= 30)
//	{
//		caj = (15 * 0.5) + (air - 15) * 0.65;
//	}
//	else
//	{
//		caj = (15 * 0.5) + (15 * 0.65) + ((air - 30) * 1);
//	}
//}
//
//void diskaun_(double harga, double& dis_harga)
//{
//	if (harga > 100)
//	{
//		dis_harga = harga - harga * 0.05;
//	}
//	else
//	{
//		dis_harga = harga;
//	}
//}
//
//void display_(double consume)
//{
//	double charge_before, charge_final = 0;
//	cal_A(consume, charge_before);
//	diskaun_(charge_before, charge_final);
//	cout << "Charge of water consumption : RM" << setprecision(2) << setiosflags(ios::fixed) << charge_final << endl;
//}
//
//int main()
//{
//	double water = 1;
//	while (water > 0)
//	{
//		cout << "Please key in the water consumption : ";
//		water = input();
//		if (water > 0)
//		{
//			display_(water);
//		}
//		else
//		{
//			cout << "The program is end" << endl;
//		}
//	}
//}
