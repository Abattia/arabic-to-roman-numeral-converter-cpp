#include <string>

using std::string;

string ToRoman(int anArabic) {
	string result = string();

	do {
		result += "I";
		anArabic -= 1;
	while (anArabic >= 1);
	return result;
}
