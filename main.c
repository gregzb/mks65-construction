#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pokemon {char pokemonName[32]; int pokemonId;};

char pokeList[3][16] = {"Charmander", "Bulbosaur", "Squirtle"};

void printPokemon(struct Pokemon myStruct) {
    printf("Pokemon Data:\n");
    printf("Name: %s\n", myStruct.pokemonName);
    printf("ID: %d\n", myStruct.pokemonId);
    printf("\n");
}

struct Pokemon makeExample() {
    struct Pokemon myStruct;
    strcpy(myStruct.pokemonName, pokeList[rand() % 3]);
    myStruct.pokemonId = rand() % 999 + 1;
    return myStruct;
}

void editPokemon(struct Pokemon *pokemon, char* newName, int newId){
    strncpy(pokemon->pokemonName, newName, 32);
    pokemon->pokemonId = newId;
}

int main() {
    struct Pokemon myFirstPokemon = makeExample();
    printPokemon(myFirstPokemon);
    editPokemon(&myFirstPokemon, "Forkmon", 999);
    printf("Edited Pokemon:\n");
    printPokemon(myFirstPokemon);
    return 0;
}
