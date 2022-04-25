#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void print(char inp[]){
	cout << inp << endl;
}

int main()
{
	int g = 0, i = 0, a = 0;
	srand(time(NULL));
	print("Lenght of password: ");
	cin >> a;
	char ps[a], randps[a];
	print("Password: ");
	for (int j = 0; j < a; j++)
	{
		cin >> ps[j];
	}
	
	for (int j = 0; j < a; j++)
	{
		while (ps[j] != i)
		{
			i = (rand()%94 + 32);
			g++;	
		}
		randps[j] = i;
	}
	
	print("Selectioned password: ");
	for (int j = 0; j < a; j++)
	{
		cout << randps[j];
	}
	cout << endl;
	print("Number of interations: ");
	cout << g-1;
}
