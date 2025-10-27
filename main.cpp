#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
 
int main() {
	cout << "State++ by Soutt9" << endl;
	cout << "Enter directory for repository: ";
	string dir; cin >> dir;
	cout << "Enter amount of commits before push (500+ is recommended): ";
	int push; cin >> push;
	while (true) {
		for (int i = 1; i < push; i++) {
			string command = "cd " + dir + " && git commit --allow-empty -m \"Commit_" + to_string(i) + "\"";
			system(command.c_str());
		}
		string command = "cd " + dir + " && git push";
		system(command.c_str());
	}
	return 0;
}