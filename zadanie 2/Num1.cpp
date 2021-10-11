#include <iostream>
#include <ctime>

using namespace std;

int generator()
{
	return rand() % 6 + 1;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	cout << "Вас приветствует программа, которая моделирует бросание двух игральных кубиков" << endl;
	cout << "Первый куб: " << generator() << endl;
    cout << "Второй куб: " << generator() << endl;
}
