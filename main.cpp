#include <gtest/gtest.h>

TEST(StrCompare, CStrEqual){
	EXPECT_STREQ(expectVal, actualValTrue);
}

TEST(StrCompare, CStrNotEqual){
	EXPECT_STREQ(expectVal, actualValFalse);
}

int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}  	  
