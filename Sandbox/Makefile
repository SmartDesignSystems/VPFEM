CXX = g++
RM = rm -f

ODIR = ./obj
LDIR = ./lib
SRCDIR = ./src

INCLUDES = -I../Vpfem/include
CPPLIBS = -L../Vpfem/lib -Wl,-rpath=Vpfem/lib/ -lvpfem
CPPFLAGS = -Wall -m64 -std=c++17 

FILES = SandboxApp

SRCS = $(addprefix $(SRCDIR)/, $(patsubst %,%.cpp,$(FILES)))
OBJS = $(patsubst %.cpp, %.o, $(SRCS))

MAIN = ./bin/application

all = $(MAIN)

$(MAIN): $(OBJS)
	$(CXX) -o $(MAIN) $(OBJS) $(CPPLIBS) $(INCLUDES)

%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@ $(CPPLIBS) $(INCLUDES) 

clean:
	$(RM) $(OBJS)
	$(RM) $(MAIN)