CC = g++
CFLAGS = -Wall -std=c++11

SRC = EBank.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
EXECUTABLE = EBank

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXECUTABLE)
