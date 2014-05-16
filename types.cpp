/* c++ is a strongly typed language, this means that all variables must be assigned a type. Variables can be assigned several at a time. 

Here are some types:

char -> one byte character
char_16_t -> at least 2 bytes
...

signed char -> char with a sign
signed short int -> at least 2 bytes signed integer

float -> floating point number e.g. 3.14

bool -> true or false

void -> mystery jk no storage

decltype(nullptr) -> wo there, lets not get ahead of ourselves*/
#include<string>
#include<iostream>
using namespace std;

int main()
{

	//lets declare some variables
	int a, b; //two variables at once? fuck yea
	int e = 0;
//	auto c = e; //c is same as a
//	decltype(a) = d; // same as a, not initialized in this program
	float what;

	//what we gonna do?
	a = 2;
	b = 3;
	what = 3.15; //thought that was gonna be pie? you don't know me
	a=a+b; //naturally, b must be an, i mean, THE additive inverse. You really think someone would do that? Just take math syntax and use it differently?

	cout << a << endl; 

	string mystring;
	mystring = "what do you want from me?";
	cout << mystring << endl;

	return 0; //why?

}
