// Joshua Monge
// Intro to computer science
// Period 1
// Mr. Williams
// 2019-10-4-Classwork


#include<iostream>
using namespace std;

int main()
{
	//3
	float pi = 4.0 * (1.0 - 1 / 3.0 + 1 / 5.0 - 1 / 7.0 + 1 / 9.0 - 1 / 11.0);
	float pi2 = 4.0 * (1.0 - 1 / 3.0 + 1 / 5.0 - 1 / 7.0 + 1 / 9.0 - 1 / 11.0 + 1 / 13.0);
		
	cout << " pi =" << pi << endl;
	cout << "pi2 =" << pi2 << endl;

	//4
	float c;
	cout << " Enter a degree in celcius ";
	cin >> c;
	float f = (9 / 5) * c + 32;
	cout << c << " in fahrenheit is " << f << endl;

	//5
	float r = 5.5;
	float pi3 = 3.14;
	float p = 2 * r * pi3;
	float a = r * r * pi3;

	cout << " p = " << p << endl;
	cout << "a =" << a << endl;
}