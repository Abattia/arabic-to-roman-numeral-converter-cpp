#include <string>
#include <map>

using std::string;
using std::map;

map <int, string> symbol = {{10,"X"},{1,"I"}};
int levels[] = {10, 1};

string ToRoman(int anArabic) {
	string result = string();

	for (const int &level : levels) {
		if (anArabic >= level) {
			do {
				result += symbol[level];
				anArabic -= level;
			} while (anArabic >= level);
		}
	}
	return result;
}
