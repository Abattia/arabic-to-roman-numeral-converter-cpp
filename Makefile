GOOGLE_TEST_LIB = gtest
GOOGLE_TEST_INCLUDE = ../GoogleTest/googletest/include

G++ = g++
G++_FLAGS = -std=c++11 -c -Wall -I $(GOOGLE_TEST_INCLUDE)
LD_FLAGS = -L ../GoogleTest/mybuild/lib -l $(GOOGLE_TEST_LIB) -l pthread

OBJECTS = main.o string-compare.o
TARGET = string-compare

all: $(TARGET)

$(TARGET): $(OBJECTS)
	g++ -o $(TARGET) $(OBJECTS) $(LD_FLAGS)

%.o : %.cpp
	$(G++) $(G++_FLAGS) $<

clean:
	rm -f $(TARGET) $(OBJECTS)

.PHONY: all clean
