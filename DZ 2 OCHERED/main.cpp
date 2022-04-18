#include <iostream>
#include <string>
#include <fstream>
#include "queue.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	queue credit;
	queue vklad;
	load_data("data.txt", credit, vklad);
	to_file("credit.txt", credit);
	to_file("vklad.txt", vklad);
	load_data("data.txt", credit, vklad);
	cout << "Люди, которые взяли кредит:" << endl;
	show_data(credit);
	cout << "Люди, которые взяли вклад:"<< endl;
	show_data(vklad);
	clear(credit);
	clear(vklad);
}
