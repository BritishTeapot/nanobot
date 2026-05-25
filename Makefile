

ifndef BUILDDIR
	BUILDDIR := ./build
endif

ifndef CXX
	CXX := g++
endif

.PHONY: clean

clean:
	rm $(BUILDDIR)/*

$(BUILDDIR)/square.o: square.cpp
	$(CXX) -c square.cpp -o $(BUILDDIR)/square.o

$(BUILDDIR)/main.o: main.cpp
	$(CXX) -c main.cpp -o $(BUILDDIR)/main.o

main: $(BUILDDIR)/main.o $(BUILDDIR)/square.o
	$(CXX) $(BUILDDIR)/main.o $(BUILDDIR)/square.o -o $(BUILDDIR)/main


