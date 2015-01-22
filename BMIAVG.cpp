#include<iostream>
#include <math.h>

// Benedikt M. Scheving-Thorsteinsson
// FSF GLPv3 Licence 2015-01-22.
// Please follow the GPL properly and link to my name if you use this. I'd be very thankful.

using namespace std;

void bmi(double& bmianswer) {
	double height, weight;
	cout << "Hvað ertu hár í metrum? (notaðu punkt í stað kommu)" << endl;
	cin >> height;
	cout << "Hvað ertu þungur í kg?" << endl;
	cin >> weight;

	bmianswer = weight / (height * height);
}

void average(double& avganswer) {
	cout << "Hvað viltu margar tölur?" << endl;
	int numberofnumbers;
	cin >> numberofnumbers;
	double numbertotal, number;
	for (int i = 0; i < numberofnumbers; i++) {
		cin >> number;
		numbertotal += number;
	}
	avganswer = numbertotal / numberofnumbers;
}

int main() {
	int whatyouwant;
	bool nofunallowed = true;
	while (nofunallowed) {
		cout << "What would you like to do?" << endl;
		cout << "1: BMI.  2: Average.  3: Exit this mofo." << endl;
		cin >> whatyouwant;
		switch (whatyouwant)
		{
			case 1:
				double bmianswer;
				bmi (bmianswer);
				cout << "Your BMI is: " << bmianswer << endl;
			break;
			case 2:
				double avganswer;
				average (avganswer);
				cout << "Your average is: " << avganswer << endl;
			break;
			case 3:
				nofunallowed = 0;
			break;
		}
		if (nofunallowed == 0) {
			cout << "You have chosen to quit." << endl;
		}
	}
	return 0;
}
