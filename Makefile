CC = g++
LSFML = -lsfml-graphics -lsfml-window -lsfml-system
CFLAGS = -Wall -Werror -pedantic
DEPS = Triangle.h

all:TFractal

TFractal: TFractal.o Triangle.o
	$(CC) $(CFLAGS) -o $@ $^ $(LSFML)

%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c $^

clean:
	rm TFractal *.o *.gch
