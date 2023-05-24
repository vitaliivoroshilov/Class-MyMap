#include <iostream>
using namespace std;

class MyMap
{
private:
	string* values;
	string* keys;
	int n;
public:
	MyMap(int _n)
	{
		n = _n;
		values = new string[n];
		keys = new string[n];
	}

	~MyMap()
	{
		delete[] values;
		delete[] keys;
	}

	void setElements()
	{
		cout << "key value" << endl;
		for (int i = 0; i < n; i++)
		{
			cin >> keys[i] >> values[i];
		}
	}

	void printMyMap()
	{
		for (int i = 0; i < n; i++)
			cout << "MyMap[" << keys[i] << "] = " << values[i] << endl;
	}
};

int main()
{
	MyMap map(5);
	map.setElements();
	map.printMyMap();
}