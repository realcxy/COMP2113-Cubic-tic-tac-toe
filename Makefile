checkMove.o:checkMove.cpp checkMove.h
	g++ -pedantic-errors -std=c++11 -c checkMove.cpp
move.o:move.cpp move.h checkMove.h
	g++ -pedantic-errors -std=c++11 -c move.cpp
print.o:print.cpp print.h
	g++ -pedantic-errors -std=c++11 -c print.cpp
checkWin.o:checkWin.cpp checkWin.h
	g++ -pedantic-errors -std=c++11 -c checkWin.cpp
checkDraw.o:checkDraw.cpp checkDraw.h
	g++ -pedantic-errors -std=c++11 -c checkDraw.cpp
game.o:game.cpp game.h print.h move.h checkWin.h checkDraw.h checkMove.h
	g++ -pedantic-errors -std=c++11 -c game.cpp
MAIN.o:MAIN.cpp MAIN.h game.h print.h move.h checkWin.h checkDraw.h checkMove.h
	g++ -pedantic-errors -std=c++11 -c MAIN.cpp
MAIN:checkMove.o move.o print.o checkWin.o checkDraw.o game.o MAIN.o
	g++ -pedantic-errors -std=c++11 -c checkMove.o move.o print.o checkWin.o checkDraw.o game.o MAIN.o -o MAIN
clean: rm -f checkMove.o move.o print.o checkWin.o checkDraw.o game.o MAIN.o MAIN
.PHONY:clean

