/*
 * Test.c
 *
 *  Created on: Nov 6, 2020
 *      Author: joaki
 */

#include <stdio.h>
#include <stdlib.h>
#include <types/list.h>
#include <types/types.h>
#include <types/hash_table.h>

#include "Ejercicios/Ejercicio3.h"
#include "Ejercicios/Ejercicio2.h"
#include "Ejercicios/Ejercicio1.h"


int main() {

	//leerFichero1("Ficheros/PI2Ej1DatosEntrada.txt");
	//leerFichero2("Ficheros/PI2Ej2DatosEntrada.txt");
	leerFichero3("Ficheros/PI2Ej3DatosEntrada.txt");

}



void leerFichero1(char *fichero) {

	char mem[1000];
	iterator it = file_iterable_pchar(fichero);
	while (iterable_has_next(&it)) {

		char *line = (char*) iterable_next(&it);
		iterator it = split_iterable_pchar(line, "#");

		char *a = (char*) iterable_next(&it);
		char *b = (char*) iterable_next(&it);

		printf("%s\n", line);
		printf("1. Iterativa (while): %d\n", ejercicio1Iterativo2(a,b));
		printf("2. Recursivo: %d\n", ejercicio1RecursivoFinalDyV(a, b));
		printf("______________________________________\n");


	}

}

void actualizaLista2(list *ls, char *line) {

	iterator it = split_iterable_pchar(line, ",");
	while (iterable_has_next(&it)) {
		char *x = (char*) iterable_next(&it);
		int e = int_parse_s(x);
		list_add(ls, &e);
	}

}

void leerFichero2(char *fichero) {

	char mem[1000];
	iterator it = file_iterable_pchar(fichero);
	while (iterable_has_next(&it)) {

		char *line = (char*) iterable_next(&it);
		list ls = list_empty(int_type);
		actualizaLista2(&ls, line);
		int *a = (int*) list_get(&ls, 0);
		int *b = (int*) list_get(&ls, 1);
		printf("%s\n", line);
		printf("1. Iterativa (while): %d\n", ejercicio2(a, b));
		printf("2. Recursiva final: %d\n", ejercicio2RecursivoFinal(a, b));
		printf("______________________________________\n");
	}

}

void actualizaLista3(list *ls, char *line) {

	iterator it = split_iterable_pchar(line, ",");
	while (iterable_has_next(&it)) {
		char *x = (char*) iterable_next(&it);
		int e = int_parse_s(x);
		list_add(ls, &e);
	}

}

void leerFichero3(char *fichero) {

	char mem[1000];
	iterator it = file_iterable_pchar(fichero);
	while (iterable_has_next(&it)) {

		char *line = (char*) iterable_next(&it);
		list ls = list_empty(int_type);
		actualizaLista2(&ls, line);
		long *a = (long*) list_get(&ls, 0);
		int *b = (int*) list_get(&ls, 1);
		printf("%s\n", line);
		printf("1. Iterativa (while): %ld\n", ejercicio3Iterativo(a, b));
		printf("2. Recursiva no final: %ld\n", ejercicio3RecursivoNoFinal(a, b));
		printf("2. Recursiva final: %ld\n", ejercicio3RecursivoFinal(a, b));
		printf("______________________________________\n");
	}

}

