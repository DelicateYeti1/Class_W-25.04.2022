#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	int g = 0, i = 0, a = 0;
	srand(time(NULL));
	cout << "Lenght of password: " << endl;
	cin >> a;
	char ps[a], randps[a];
	cout << "Password: " << endl;
	for (int j = 0; j < a; j++)
	{
		cin >> ps[j];
	}
	
	for (int j = 0; j < a; j++)
	{
		while (ps[j] != i)
		{
			i = (rand()%100 + 18);
			g++;	
		}
		randps[j] = i;
	}
	
	cout << "Selectioned password: " << endl;
	for (int j = 0; j < a; j++)
	{
		cout << randps[j];
	}
	cout << endl;
	cout << "Number of interations: " << g-1;
}
