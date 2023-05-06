// Implements a dictionary's functionality
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <strings.h>
#include <stdbool.h>
#include <string.h>
#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
unsigned int word_count = 0;
const unsigned int N = 65336;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    int hvalue = hash(word);
    node *cursor = table[hvalue];
    while( cursor != 0) {
        if (strcasecmp(word, cursor->word) == 0) {
            return true;
        }
        cursor = cursor->next;
    }
    return false;
}
// Hashes word to a number
unsigned int hash(const char *word)
{
    
    unsigned long hash = 5381;

    for (int i = 0; i < strlen(word); i++)
    {

        hash = ((hash << 5) + hash) + tolower(word[i]);
    }

    return hash % N;
}
// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    FILE *file = fopen(dictionary, "r");
    if (file == NULL) {
        printf("File cant be opened %s\n", dictionary);
        return false;
    }
    char word [LENGTH + 1];

    while (fscanf(file, "%s", word) != EOF) {
        node *n = malloc(sizeof(node));
        if (n == NULL) {
            return 1;
        }
        strcpy(n->word, word);
        int hvalue = hash(word);
        n->next = table[hvalue];
        table[hvalue] = n;
        word_count++;
    }
    fclose(file);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{

    if (word_count > 0)
    {

        return word_count;
    }
    else
    {

        return 0;
    }
}
// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    for(int i = 0; i<N; i++)
    {
        node *cursor = table[i];
        while(cursor)
        {
            node *temp = cursor;
            cursor = cursor->next;
            free(temp);
        }
    }

    return true;
}