#include <string>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void play_game(const vector<string> &words) {
	cout << "We playin" << endl;
}

int main() {
	ifstream fin("words.txt");
	vector<string> wordlist;
	string s;

	while (fin >> s) {
		wordlist.push_back(s);
	}

	play_game(wordlist);

	return 0;
}