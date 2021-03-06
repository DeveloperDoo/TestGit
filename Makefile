default: all

app.o: src/app.cpp
	g++ -c src/app.cpp -o app.o

all: src/app.o
	g++ src/app.o -o TestGit
	-rm -f src/app.o

clean:
	-rm -f src/app.o
	-rm -f TestGit