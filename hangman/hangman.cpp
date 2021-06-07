#include <string>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void play_game(const vector<string> &words) {
	int score = 0, round = 1;
	char c;
	bool playing = 1;

	while (playing) {
		//future: improve randomness
		string word = words[rand() % words.size()];
		int length = word.length();

		cout << "Round: " << round << endl;
		cout << length << " letters remaining!" << endl << endl;

		for (int i = 0; i < length; ++i) {
			cout << "_ ";
		}
		cout << endl;


		playing = 0;
	}
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