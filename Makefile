CC = g++
CFLAGS = -Wall -std=c++11

SRC = EBank.cpp main.cpp mysql_conn.cpp
OBJ = $(filter-out mysql_conn.o, $(SRC:.cpp=.o))
EXECUTABLE = EBank

all: $(EXECUTABLE) mysql_conn

$(EXECUTABLE): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

mysql_conn: mysql_conn.cpp
	$(CC) $< -o  $@ `mysql_config --cflags --libs` 

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXECUTABLE) mysql_conn mysql_conn.o