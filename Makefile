.PHONY: clean
clean:
	 rm nanobot_route.o nanobot_terminal.o

nanobot_terminal: nanobot_terminal.cpp
   g++ -c nanobot_terminal.cpp -o nanobot_terminal.o

nanobot_route: nanobot_route.cpp
	  g++ -c nanobot_route.cpp -o nanobot_route.o

nanobot:
	  g++ -c nanobot_route.o nanobot_terminal.o




