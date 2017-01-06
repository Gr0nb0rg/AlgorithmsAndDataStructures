#include "Bucket.h"

Bucket::Bucket()
{
}


Bucket::~Bucket()
{
}

#include <cstdlib>;
#include <iostream>;
#include <vector>;
#include <random>;


using namespace std;


int main()
{
	int vSize;
	cout << "Enter vector size: " << endl;
	cin >> vSize;
	vector<int> v(vSize);

	// Fill the list with random numbers 
	for (int i = 0; i < vSize; i++)
	{
		v[i] = rand() % 100;
	}

	int value = v[0];
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > value)
			value = v[i];
	}


	value++;
	vector<int>w(value);


	for (int i = 0; i < value; i++)
	{
		w[i] = 0;
	}


	for (int i = 0; i < v.size(); i++)
	{
		for (int o = 0; o < w.size(); o++)
		{
			if (v[i] == o)
				w[o]++;
		}
	}


	int vCount = 0;


	for (int i = 0; i < w.size(); i++)
	{
		if (w[i] == 0)
			continue;


		for (int o = 0; o < w[i]; o++)
		{
			v[vCount] = i;
			vCount++;
		}
	}


	for each (int i in v)
	{
		cout << i << ", ";
	}

	system("PAUSE");
	return 0;
}
