
// Robert Wood Jr.
// 2/21/19
// CPP inclass exercise
// Pig Latin C++ Strings

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

const int MAX = 43;
char * toPigLatin(char* word);

int main()
{
	// creation of 5 character strings, each length MAX
	char word[5][MAX];
	int i;    	// loop counter
	cout << "Input 5 words: ";
	for (i = 0; i < 5; i++)
		cin >> word[i];
		cout << "\nPig Latin version of the 5 words:\n";
	for (i = 0; i < 3; i++)
	{
		toPigLatin(word[i]);
		cout << word[i] << ' ';
	}

	// Note that the above outputs illustrate that the original
	//  string itself has been converted.  The outputs below illustrate
	//  that a pointer to this string is also being returned from the function.

	cout << toPigLatin(word[3]) << ' '
		<< toPigLatin(word[4]) << '\n';return 0;
}

char * toPigLatin(char * word)
{

	return ;
}

