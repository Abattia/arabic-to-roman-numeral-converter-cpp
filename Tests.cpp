#include <gtest/gtest.h>
#include "ArabicToRoman.h"

TEST(ArabicToRoman, ShouldReturnX) {
	string result = ToRoman(10);
	
	EXPECT_EQ("X", result);
}

TEST(ArabicToRoman, ShouldReturnIII) {
	string result = ToRoman(3);
	
	EXPECT_EQ("III", result);
}

TEST(ArabicToRoman, ShouldReturnII) {
	string result = ToRoman(2);
	
	EXPECT_EQ("II", result);
}

TEST(ArabicToRoman, ShouldReturnI) {
	string result = ToRoman(1);
	
	EXPECT_EQ("I", result);
}


int main (int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
