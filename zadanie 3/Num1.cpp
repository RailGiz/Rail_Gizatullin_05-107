#include <iostream>
using namespace std;

void F(int x)
{
	if (x < 10) { 
  cout << x; return; }
	F(x / 10);
	cout << " " << x % 10;
	
}

int main()
{
	F(1234);
	cout << endl;
	
}
