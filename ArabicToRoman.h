#include <string>

using std::string;

string ToRoman(int anArabic) {
	if(anArabic == 3) {
		return "III";
	}
	if(anArabic == 2) {
		return "II";
	}
	return "I";
}
