#include <iostream> 
using namespace std; 
 
int main() { 
	setlocale(LC_ALL, "Russian"); 
	char string[256]; 
	char word[32];

	cout << "Введите стрoку: ";
	gets_s(string);
	cout << "Введите слово, количество которого нужно найти: ";
	gets_s(word);

	int lenSTR = strlen(string); 
	int lenWRD = strlen(word); 
	int c = 0; 
	for (int i = 0; i < lenSTR - lenWRD + 1; i++) { 
		bool t = true; 
		for (int j = 0; j < lenWRD; j++) { 
			if (string[i + j] != word[j]) t = false; 
		} 
		if (t) c++; 
	}  
	cout << c << " раз входит в символьную строку заданное слово";
	  
	return 0; 
} 
