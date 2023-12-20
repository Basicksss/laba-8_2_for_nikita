#define B 10
#define A -10

#include <iostream>
#include <cmath> 
#include <stdio.h> 
#include <time.h> 

using namespace std;
int n = 0;
int* ptr_p;
int* p;

int rrand(int min, int max)
{
	return rand() % (max - min + 1) + min;
}

void initialization(int* ptr, int* arr, int size)
{
	ptr = arr;
	while (ptr < arr + size)
	{
		*ptr = rrand(-10, 10);
		ptr++;
	}
}

void Enter_arr_size()
{
	cout << "Введите размер динамического масива:";
	cin >> n;
}

void zadanie(int* ptr, int*& arr, int size)
{
	ptr = arr;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			arr[i] = arr[i] * arr[i];
		}
	}
}

void Out(int* ptr, int* arr, int size)
{
	ptr = arr;
	while (ptr < arr + size)
	{
		cout << *ptr++ << ' ';
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	Enter_arr_size();
	p = new int[n];
	initialization(ptr_p, p, n);
	Out(ptr_p, p, n);
	zadanie(ptr_p, p, n);
	Out(ptr_p, p, n);

}