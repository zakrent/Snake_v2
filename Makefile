
default: build
	rm *.o

build:
	g++ -c src/*.cpp src/*.h
	g++ *.o -o snake.out -l curses

clean:
		rm *.o 
