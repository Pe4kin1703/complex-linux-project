CXX = g++

SRC_DIR = src

CXX_LIB_FLAG = -fpic -shared

INSTALL_LIB_DIR = 		/usr/local/lib
INSTALL_INCLUDE_DIR = 	/usr/local/include/convertor

lib_NAME = libconvertor.so
converter_LIB_SRC = $(SRC_DIR)/lower.cpp $(SRC_DIR)/upper.cpp
converter_LIB_INCLUDE = $(SRC_DIR)/lower.hpp $(SRC_DIR)/upper.hpp

project_NAME = convertor
project_SRC = $(SRC_DIR)/main.cpp

$(lib_NAME): $(converter_LIB_SRC)
	g++ $(CXX_LIB_FLAG) -o $@ $^

install-$(lib_NAME): $(lib_NAME)
	install -d $(INSTALL_LIB_DIR)
	install -m 755 $(lib_NAME) $(INSTALL_LIB_DIR)
	install -d $(INSTALL_INCLUDE_DIR)
	install -m 644 $(converter_LIB_INCLUDE) $(INSTALL_INCLUDE_DIR)

$(project_NAME): $(project_SRC)
	$(CXX) -o $@ -l convertor $^

clean-all: 
	rm $(lib_NAME) $(project_NAME)

