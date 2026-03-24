TARGET = hello_world
CC = gcc
CFLAGS = -Wall -Wextra -g

all: $(TARGET)

$(TARGET): hello_world.c
	$(CC) $(CFLAGS) hello_world.c -o $(TARGET)

clean:
	rm -f $(TARGET)# Nom de l'exécutable
TARGET = hello_world

# Compilateur et options
CC = gcc
CFLAGS = -Wall -Wextra -g

# Règle principale : compile hello_world.c en hello_world
all: $(TARGET)

$(TARGET): hello_world.c
	$(CC) $(CFLAGS) -o $(TARGET) hello_world.c

# Règle pour nettoyer les fichiers compilés
clean:
	rm -f $(TARGET)
