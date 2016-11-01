#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class point { public: int x; int y; };

class SettingsData {
public:
	string key;
	string value;
};

class Settings {
private:
	vector<SettingsData> data;

public:

	void readDataFromFile() {
		
	}
	void setStringValueForKey(string value, string key) 
	{
		bool updated = false;
		for (int i = o; i < data.size(); i++)
			if (data.at(i).key == key)
			{
				updated = true; \
					data.at(i).value = value;
				break;
			}
	}
	string getStringValueForKey(string key);

	void setIntValueForKey(int value, string key);
	string getIntValueForKey(string key);
};
int main()
{

	Settings settings;

	string name = settings.getStringValueForKey("UsersName");
	if (name.length() == 0) {
		cout << "Enter your name ";
		getline(cin, name);


		`	






	}
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