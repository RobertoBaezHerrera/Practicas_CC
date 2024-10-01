# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
#
# @author Roberto Báez Herrera
# @date 30 Septiembre 2024
# @brief Un Makefile para la práctica

CXX = g++
CXXFLAGS = -std=c++11 -Iinclude
LDFLAGS =

# Nombre del ejecutable
EXECUTABLE = bin/practica_1

# Archivos fuente y objeto
SRC_FILES = src/practica_1.cc src/cero.cc src/fpr.cc src/potencia.cc \
            src/producto.cc src/proyeccion.cc src/sucesor.cc src/suma.cc \
            src/uno.cc
OBJ_FILES = $(SRC_FILES:src/%.cc=objects/%.o)

# Regla principal para construir el ejecutable
$(EXECUTABLE): $(OBJ_FILES)
	@$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Regla para compilar los archivos objeto
objects/%.o: src/%.cc
	@$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para limpiar los archivos generados
clean:
	@rm -f objects/*.o $(EXECUTABLE)