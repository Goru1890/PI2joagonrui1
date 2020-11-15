/*
 * Ejercicio3.c
 *
 *  Created on: Nov 14, 2020
 *      Author: joaki
 */

#include "Ejercicio3.h"
#include <math.h>

long ejercicio3Iterativo(long *a, int *n) {

	long a1 = 0;
	int n1 = 0;
	a1 = *a;
	n1 = *n;

	long int r = 1L;

	while (n1 > 0) {

		if (n1 % 2 == 1) {

			r = r*a1;

		}

		a1 = a1*a1;

		n1 /= 2;
	}

	return r;

}

long ejercicio3RecursivoNoFinal(long *a, int *n) {

	long a1 = 0;
	int n1 = 0;
	a1 = *a;
	n1 = *n;
	long r;

	if (n1 == 0) {

		r = 1l;
	}

	else if (n1 % 2 == 1) {

		n1 /= 2;
		r = ejercicio3RecursivoNoFinal(&a1, &n1);
		r = r*r*a1;
		//r = (long) (pow(ejercicio3RecursivoNoFinal(&a1, &n1), 2) * a1);

		//r = (long) (Math.pow(ejercicio3RecursivoNoFinal(a1, n1 / 2), 2) * a1);

	} else {

		n1 /= 2;
		r = ejercicio3RecursivoNoFinal(&a1, &n1);
		r = r*r;
		//r = (long) (pow(ejercicio3RecursivoNoFinal(&a1, &n1), 2));
		//r = (long) (Math.pow(ejercicio3RecursivoNoFinal(a1, n1 / 2), 2));

	}

	return r;
}

long ejercicio3RecursivoFinal2(long *a, int *n, long *r) {

	long a1 = 0;
	int n1 = 0;
	a1 = *a;
	n1 = *n;

	long r1 = *r;
	if (n1 == 0) {

		return r1;

	}

	else if (n1 % 2 == 1) {

		n1 /= 2;
		long aux = r1 * a1;
		a1*=a1;
		return ejercicio3RecursivoFinal2(&a1, &n1, &aux);
		//return ejercicio3RecursivoFinal(a1, n1 / 2, (long) (Math.pow(r, 2)) * a);

	} else {

		n1 /= 2;
		a1*=a1;
		return ejercicio3RecursivoFinal2(&a1, &n1, r);

	}

}

long ejercicio3RecursivoFinal(long *a, int *n) {

	long resA = 1L;
	long *res = &resA;
	return ejercicio3RecursivoFinal2(a, n, res);
}

