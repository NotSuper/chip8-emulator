all:
	g++ -I src/include -L src/lib -o build main.cpp -l mingw32 -l SDL2main -l SDL2