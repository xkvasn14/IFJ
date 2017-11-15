/*
 * Předmět  :   IFJ / IAL
 * Soubor   :   bintree.h - Hlavičkový soubor binárního stromu
 * Projekt  :   Implementace překladače imperativního jazyka IFJ17
 * Tým č    :   21
 * Varianta :   1
 * Autoři   : xhribe02, David Hříbek (projekt IAL2 c401)
 *            xkoval14, Marek Kovalčík
 *            xvalus02, Ondřej Valušek
 *            xrutad00, Dominik Ruta
 */
#include "stdbool.h"

#ifndef IFJ_BINTREE_H
#define IFJ_BINTREE_H

typedef enum {
    tVariable,
    tFunction
}identificatorType;


/* ----------uzel stromu---------- */
typedef struct tBSTNode {
    char* Key;	                                     /* klíč */
    int Type;                                        /* typ identifikatoru (proměnná/funkce) */
    void* Data;                                      /* užitečný obsah uzlu */
    struct tBSTNode * LPtr;                          /* levý podstrom */
    struct tBSTNode * RPtr;                          /* pravý podstrom */
} *tBSTNodePtr;

/* ----------prototypy funkcí---------- */
void BSTInit   (tBSTNodePtr *);
tBSTNodePtr BSTSearch (tBSTNodePtr, char*);
void BSTInsert (tBSTNodePtr *, char*, void*);
void BSTDelete (tBSTNodePtr *, char*);
void BSTDispose(tBSTNodePtr *);

/* ----------funkce pro ladeni---------- */
void Print_tree2(tBSTNodePtr TempTree, char* sufix, char fromdir); /* pomocna funkce pro vykresleni sktruktury binarniho stromu */
void Print_tree(tBSTNodePtr TempTree); /* volana funkce pro vykresleni funkce binarniho stromu */
#endif //IFJ_BINTREE_H
