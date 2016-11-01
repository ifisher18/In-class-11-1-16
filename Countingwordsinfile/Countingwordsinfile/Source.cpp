#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	int count = 0;

	fstream iofile("LeviathanText.txt", ios::in | ios::out);
	if (!iofile)
	{
		cout << "ERROR" << endl;
	}
	else
	{
		string word;
		while (iofile >> word)
		{
			count++;
		}
		iofile.clear();
		iofile.seekg(0, ios::end);
		iofile << "\n\nThis file has " << count << " words." << endl;
	}
	iofile.close();
}