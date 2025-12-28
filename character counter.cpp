#include"iostream"
#include"string"
using namespace std;
int main()
{
	string s1;
	char s2;
	cout << "Enter the word :";
	getline(cin, s1);
	cout << "Enter your character to find : ";
	cin >> s2;
	int counter = 0;

	for (int i = 0; i < s1.size(); i++)
	{
		if (s1[i] == s2)
		{
			counter++;
		}
	}
	if (counter == 0)
	{
		cout << "The entered character is not in the word";
	}
	else if (counter == 1)
	{
		cout << "There is " << counter << " " << s2 << " in the word" << endl;
	}
	else
	{
		cout << "There are " << counter << " " << s2 << " in the word" << endl;
	}
}