/*
 * ejercicio1.c
 *
 *  Created on: Nov 6, 2020
 *      Author: joaki
 */

#include "Ejercicio1.h"


int ejercicio1Iterativo2(char *a, char *b) {

	int i = 0;
	int res = 0;
	int pos = 0;
	pos = strlen(a);
	int k = i + pos / 2;

	while (i < pos) {

		k = (i + pos) / 2;
		bool q = a[k] == b[k];
		if (i+1 == pos) {
			res = i+1;
			break;
		} else if (q) {

			i = k;

		} else {

			pos = k;

		}

	}

	return res;
}

int ejercicio1RecursivoFinal2DyV(char *a, char *b, int *n, int *m) {
	// TODO Auto-generated method stub

	int kn = *n;
	int km = *m;
	int k = 1;
	k = (kn + km) / 2;
	int aux = *n + 1;

	if (aux == *m) {

		return aux;
	}

	else if (a[k] == b[k]) {

		return ejercicio1RecursivoFinal2DyV(a, b, &k, m);

	} else {

		return ejercicio1RecursivoFinal2DyV(a, b, n, &k);

	}

}

int ejercicio1RecursivoFinalDyV(char *a, char *b) {

	int n = 0;
	int pos = 0;
	string str = string_empty();
	string_add_pchar(&str, a);
	pos = string_size(&str);
	return ejercicio1RecursivoFinal2DyV(a, b, &n, &pos);
}

