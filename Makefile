compile:
	mkdir -p bin
	mkdir -p build

	gcc -Wall -O2 -c ameditor/main.c -o build/main.o
	gcc -Wall -O2 -c ameditor/options.c -o build/options.o
	gcc -Wall -O2 -c ameditor/AxmlParser.c -o build/AxmlParser.o
	gcc -Wall -O2 -c ameditor/AmBinaryEditor.c -o build/AmBinaryEditor.o

	g++ -o bin/ameditor build/* -s

clean:
	rm -rf bin
	rm -rf build
