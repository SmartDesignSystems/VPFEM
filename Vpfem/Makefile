CXX = g++
RM = rm -f

ODIR = ./obj
LDIR = ./lib
SRCDIR = ./src

INCLUDES = -I./
CPPLIBS = 
CPPFLAGS = -c -Wall -Werror -fpic -m64 -std=c++17 

FILES = Application

SRCS = $(addprefix $(SRCDIR)/$(FILES)/, $(patsubst %,%.cpp,$(FILES)))
OBJS = $(patsubst %.cpp, %.o, $(SRCS))

MAIN = ./lib/libvpfem.so

all = $(MAIN)

$(MAIN): $(OBJS)
	$(CXX) -shared -o $(MAIN) $(OBJS) $(CPPLIBS) $(INCLUDES)

%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@ $(CPPLIBS) $(INCLUDES) 

clean:
	$(RM) $(OBJS)
	$(RM) $(MAIN)
