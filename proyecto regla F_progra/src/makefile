# Makefile para compilar y ejecutar el programa

# Variables de compilación
CXX = g++
CXXFLAGS = -std=c++11

# Archivos fuente y objeto
SRC = main.cpp
OBJ = main.o

# Nombre del ejecutable
TARGET = programa

# Regla principal
all: $(TARGET)

# Regla de compilación
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Regla de construcción de objetos
$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $(SRC)

# Regla de limpieza
clean:
	rm -f $(OBJ) $(TARGET)


/*
En este Makefile, se definen las siguientes reglas:

all: La regla principal que compila el programa objetivo.
$(TARGET): Regla para compilar el programa objetivo a partir de los archivos objeto.
$(OBJ): Regla para compilar los archivos fuente y generar los archivos objeto.
clean: Regla para eliminar los archivos objeto y el ejecutable.
*/