#include <iostream> 

#include "stack.h" 



using namespace std;



int main()

{



	Stack<int> stack;

	int n = 6;

	for (int i = 0; i < n; i++)

		stack.push(i);

	for (int i = 0; i<n; i++)

		cout << stack.pop() << endl;

	Stack<char> stackch;
	
	
	stackch.push('h');
	stackch.push('e');
	stackch.push('l');
	stackch.push('l');
	stackch.push('o');
	
	cout << endl << endl;

	cout << stackch.pop() << endl;
	cout << stackch.pop() << endl;
	cout << stackch.pop() << endl;
	cout << stackch.pop() << endl;
	cout << stackch.pop() << endl;


	return 0;

}
