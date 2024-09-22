CXX = g++
CXX_FLAGS = -std=c++17

SRC_DIR = src
OBJ_DIR = obj

libcalc_SRC = $(SRC_DIR)/calc.cpp
libcalc_OBJ = $(SRC_DIR)/calc.o

calculator_SRC = $(SRC_DIR)/main.cpp

lib_NAME = libcalc.a
project_NAME = calculator

INSTALL_INCLUDE_DIR = /usr/local/include
INSTALL_LIB_DIR = /usr/local/lib


$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXX_FLAGS) -c $< -o $@

$(lib_NAME): $(libcalc_OBJ)
	ar -rc $@ $^


calculator: src/main.o $(lib_NAME)
	$(CXX) $(CXX_FLAGS) $< -L . -l calc   -o $@ 

clean-calculator:
	rm $(project_NAME) $(lib_NAME) $(SRC_DIR)/*.o