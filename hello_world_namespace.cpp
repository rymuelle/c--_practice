/* using namespaces. Namespaces are a organizational tool designed to make coding less verbose and more readable. in std::cout, std is the namespace and cout is a function in side of std. Instead, we could write 

{

	using namespace std;
	cout << "Hello World";

}

Namespaces can also be defined anonymously to avoid naming conflicts and avoid declaring global static variables. 

namespace
{	
	int local_but_not_static;
}

*/

#include<iostream>
using namespace std;

namespace
{
	int local;
}

int main()
{
	local = 1;
	cout << "Local = " << local << endl;
}
