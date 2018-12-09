CXX = g++
RM = rm -f

ODIR = ./obj
LDIR = ./lib
SRCDIR = ./src

INCLUDES = -I./ -I./src/vendor/spdlog/include/ -I./src
CPPLIBS = 
CPPFLAGS = -c -Wall -Werror -fpic -m64 -std=c++17 

FILES = Log/Log Application/Application

SRCS = $(addprefix $(SRCDIR)/, $(patsubst %,%.cpp,$(FILES)))
OBJS = $(patsubst %.cpp, %.o, $(SRCS))

MAIN = ./lib/libvpfem.so

all = $(MAIN)

$(MAIN): $(OBJS)
	$(CXX) -std=c++11 ./src/vp_pch.h
	$(CXX) -shared -o $(MAIN) $(OBJS) $(CPPLIBS) $(INCLUDES)

%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@ $(CPPLIBS) $(INCLUDES) 


clean:
	$(RM) $(OBJS)
	$(RM) $(MAIN)
