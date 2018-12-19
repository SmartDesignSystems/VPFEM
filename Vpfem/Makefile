CXX = g++
RM = rm -f

ODIR = ./obj
LDIR = ./lib
SRCDIR = ./src

INCLUDES = -I./ -I./src/vendor/spdlog/include/ -I./src/include
CPPLIBS = 
CPPFLAGS = -c -Wall -Werror -fpic -m64 -std=c++17 

FILES = Log/Log Application/Application Model/Model

SRCS = $(addprefix $(SRCDIR)/, $(patsubst %,%.cpp,$(FILES)))
OBJS = $(patsubst %.cpp, %.o, $(SRCS))

MAIN = ./lib/libvpfem.so
PRECOMPILED_HEATHER = ./src/include/vppch.h.gch

all = $(MAIN)

$(MAIN): $(PRECOMPILED_HEATHER) $(OBJS)
	$(CXX) -shared -o $(MAIN) $(OBJS) $(CPPLIBS) $(INCLUDES)

%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@ $(CPPLIBS) $(INCLUDES)

$(PRECOMPILED_HEATHER): ./src/vppch.h
	$(CXX) $(CPPFLAGS) -c $< -o $@ $(CPPLIBS) $(INCLUDES) 

clean:
	$(RM) $(OBJS)
	$(RM) $(MAIN)