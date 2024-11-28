#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course 4 Solution_5 
// Hire A Driver Case 2.

struct strInfo
{
	int Age;
	bool HasDriverLicense;
	bool HasRecommendation;
};

strInfo ReadInfo()
{
	strInfo Info;

	cout << "Enter Your Age ? " << endl;
	cin >> Info.Age;

	cout << "Do You Have Driver License ?  1 = Yes / 0 = No " << endl;
	cin >> Info.HasDriverLicense;

	cout << "Do You Have Recommendation?  1 = Yes / 0 = No " << endl;
	cin >> Info.HasRecommendation;

	return Info;
}

bool IsAccepted(strInfo Info)
{
	if (Info.HasRecommendation)
	{
		return true;
	}
	else
	{
		return (Info.Age > 21 && Info.HasDriverLicense);
	}
}

void PrintInfo(strInfo Info) {

	if (IsAccepted(Info))
	{
		cout << " You Are Hired" << endl;
	}
	else
	{
		cout << "You Are Rejected" << endl;
	}

}

int main()
{
	PrintInfo(ReadInfo());

	return 0;
}

