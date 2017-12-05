#include <iostream>
#include <string>

using namespace std;

string scales[] = { "C","C#","D","D#","E","F","F#","G","G#","A","A#","B" };
string solfege[] = { "Do","","Re","","Mi","Fa","","So","","La","","Ti" };
int index_finder(string input, string string_array[]) {
	int i = 0;
	for (i = 0; i < 12; i++) {
		if (string_array[i] == input)
			return i;
	}
	return i;
}
int main() {
	int scale_index=0;
	int solf_index = 0;
	int new_index = 0;
	string scale="";
	string solf = "";
	bool continue_ = true;
	while (continue_) {
		cout << "Scale: ";
		cin >> scale;
		cout << "Solfege: ";
		cin >> solf;
		scale_index = index_finder(scale, scales);
		solf_index = index_finder(solf, solfege);
		new_index = (scale_index + solf_index) % 12;
		cout << "notes(\"" << scale << "\", \"" << solf << "\") -> \"" << scales[new_index] << "\"" << endl;
		cout << "type 1 if you want to stop. any other character to repeat";
		char c;
		cin >> c;
		if (c == 1)
			continue_ = false;
	}
}

