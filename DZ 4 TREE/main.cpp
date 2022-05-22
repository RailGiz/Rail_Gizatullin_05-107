#include<iostream>
#include<string>
#include<fstream>
#include "tre.h"


int main() {
	setlocale(LC_ALL, "Rus");
	tree* root = nullptr;

	cout << "Выберите сортировку дерева: " << endl;
	cout << "Введите 1 если хотите сортировку по фамилии. " << endl;
	cout << "Введите 2 если хотите сортировку по среднему баллу. " << endl;
	int flag;
	cin >> flag;
	load_data("student.txt", root, flag);
	cout << endl;
	show_correct(root);
	cout << endl;

	cout << "Баллы студентов с фамилией на букву И:" << endl;
	search_in_tree("student.txt", root, 'И');
	cout << endl;
	cout << "Баллы студентов с фамилией на букву Б:" << endl;
	search_in_tree("student.txt", root, 'Б');
	return 0;
}
