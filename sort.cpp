/* hopefully this is a sorting alogrythm*/

#include<iostream>
using namespace std;

int main()
{

	int array_length;
	int sort_array [100];		
	cout << "What is the length?" << endl;
	std::cin >> array_length;
	//std::cout << array_length;
	if (array_length <100 && array_length > 0) //makes sure the length of the list can fit in array
	{
		for (int i = array_length; i>0 ; i--)
		{
			cout <<"Imput" << i << endl;
			cin >> sort_array[i];
		//	cout << sort_array[i];
		}
		
		
	} else if (array_length >= 100 || array_length <= 0)	//catching exceptions
	{
		cout << "Nope!";
	}
	
}

