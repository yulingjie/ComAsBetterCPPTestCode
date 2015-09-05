CC = g++
CFLAG = -std=c++11 -Wall
TARGET = test
INCLUDE = .
LIB = .

$(TARGET): FastString
	$(CC) $(CFLAG) -I $(INCLUDE) main.cpp -o $(TARGET) -L $(LIB) -lFastString

FastString:
	$(CC) $(CFLAG) -fPIC -shared -o libFastString.so FastString.cpp

