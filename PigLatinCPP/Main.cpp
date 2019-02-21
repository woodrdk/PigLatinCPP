
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
bool isVowel(char ch);

int main()
{
	// creation of 5 character strings, each length MAX
	char word[5][MAX];
	int i;    	// loop counter
	cout << "Input 5 words: ";
	for (i = 0; i < 5; i++)
		cin >> word[i];
		cout << "\nPig Latin version of the 5 words:\n";
	for (i = 0; i < 5; i++)
	{
		toPigLatin(word[i]);
		cout << word[i] << ' ';
	}

	// Note that the above outputs illustrate that the original
	//  string itself has been converted.  The outputs below illustrate
	//  that a pointer to this string is also being returned from the function.

	//cout << toPigLatin(word[3]) << ' ' << endl
	//	<< toPigLatin(word[4]) << '\n';
	
	system("pause");
	return 0;
}

char * toPigLatin(char * word)
{
	// Find index of first vowel
	int vowelIndex = -1;
	for (size_t i = 0; i < strlen(word); ++i) 
	{
		if (isVowel(word[i])) {
			vowelIndex = i;
			break;
		}
		
	}
	if (vowelIndex == 0 || vowelIndex == -1) {
		strncat(word, "-ay", 3);
	}

	else {
		char prefix[MAX] = { '\0' };
		int len = strlen(word);
		strncpy(prefix, word, vowelIndex);
		for (size_t i = 0; i <= strlen(word) - vowelIndex; ++i) {
			word[i] = word[i + vowelIndex];
		}
		strncat(word, "-",1);
		strncat(word, prefix, strlen(prefix));
		strncat(word, "ay", 2);
	}
	
	return word;
}

bool isVowel(char ch) {
	return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
		   ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

