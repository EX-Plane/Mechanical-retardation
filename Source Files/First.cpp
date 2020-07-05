#include<iostream>
using namespace std;
void questions()
{
	int answer;
	cout << "Hey,can I ask you any questions?(Y(1)/N(other)" << endl;
	cin >> answer;
	if (answer > 0 && answer <= 1)
	{
		int answer2;
		cout << "Perfect,let us start!" << endl;
		cout << "how old are you?" << endl;
		cin >> answer2;
		if (answer2 < 30)
		{
			cout << "Haha,you are an young man!" << endl;
		}
		else
		{
			cout << "Oh,you are an old man..." << endl;
		}
	}
	else
	{
		cout << "OK,but I want to you think again!!" << endl;

	}
}
int main()
{
	questions();
	system("pause");
	return 0;
}