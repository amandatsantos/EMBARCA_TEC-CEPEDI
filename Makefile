CC = gcc
CFLAGS = -Iinclude -Wall -Wextra -g3
SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)
TARGET = build/conversor.exe

all: $(TARGET)

$(TARGET): $(OBJ)
	@if not exist build mkdir build
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	del /f /q src\\*.o
	del /f /q build\\conversor.exe

run: all
	$(TARGET)

# Nova regra para depuração
debug: $(TARGET)
	gdb $(TARGET)
