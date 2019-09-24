#include<iostream>
#include<string>
#include<time.h>
using namespace std;
void Display(int num[5][6]);
void Graph(int num[5][6]);

int main()
{
	srand(time(NULL));
	int num[5][6];
	for(int f = 0; f < 5; f++)
	{
		for(int n = 0; n < 6; n++)
		{
			num[f][n] = 0 + rand()% 9;
			cout << num[f][n] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	Display(num);
	Graph(num);
	return 0;
}

void Display(int num[5][6])
{
	cout << "--------------------Display Graph--------------------\n";
	for(int n = 0; n < 6; n++)
	{
		cout << "\t" << n;
	}
	cout << endl;
	cout << "-----------------------------------------------------\n";
}

void Graph(int num[5][6])
{
	for(int f = 0; f < 5; f++)
	{
		cout << f;
		for(int n = 0; n < 6; n++)
		{
			if(num[f][n] != 0)
			{
				cout << "\t*";
			}
			else if(num[f][n] == 0)
			{
				cout << "\t";
			}
		}
		cout << endl;
	}
}