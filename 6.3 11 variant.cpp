#include <iostream>
using namespace std;

void create(int*& a, int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		a[i] = -20 + rand() % (41);
		cout << a[i] << " ";
	}
}

template <typename T>
void create(T*& a, int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		a[i] = -20 + rand() % (41);
		cout << a[i] << " ";
	}
}

template <typename T>
void sort(T*& q, int n)
{
	int zamina;
	for (int i = 0; i < n - 1; i++)
	{
		int k = 0;
		for (int j = 0; j < n - 1; j++)
			if (q[j] > q[j + 1])
			{
				zamina = q[j];
				q[j] = q[j + 1];
				q[j + 1] = zamina;
				k = 1;
			}
		if (k == 0) return;
	}
}

void sort(int*& q, int n)
{
	int zamina;
	for (int i = 0; i < n-1; i++)
	{
		int k = 0;
		for (int j = 0; j < n-1; j++)
		if (q[j] > q[j + 1])
		{
			zamina = q[j];
			q[j] = q[j + 1];
			q[j + 1] = zamina;
			k = 1;
		}
		if (k == 0) return;
	}
}

void show(int*& q, int n)
{
	for (int i = 0; i < n; i++)
		cout << q[i] << " ";
}

template <typename T>
void show(T*& q, int n)
{
	for (int i = 0; i < n; i++)
		cout << q[i] << " ";
}

int main()
{
	srand((unsigned)time(NULL));
	int n;

	cout << "n="; cin >> n;
	int* q = new int[n];

	create(q, n);
	cout << endl;
	sort(q, n);
	show(q, n);

	return 0;
}