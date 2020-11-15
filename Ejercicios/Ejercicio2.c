/*
 * Ejercicio2.c
 *
 *  Created on: Nov 6, 2020
 *      Author: joaki
 */


#include "Ejercicio2.h"

bool ejercicio2(int *a, int*b){

	int a1 = 0;
	int b1 = 0;
	a1 = *a;
	b1 = *b;

	bool res = false;

		if (0 < a1 && a1 < b1) {

			res|= false;

		}

		while (a1 >= b1) {

			if (a1 == b1) {
				res|= true;
			} else {

				res|=false;
			}

			a1=a1-b1;

		}

		return res;


}


bool ejercicio2RecursivoFinal2(int* a, int* b, bool* c) {
		// TODO Auto-generated method stub

		bool aux;
		aux = *c;
		int a1 = *a;
		int b1 = *b;
		if (a1 == 0) {
			aux = true;

		} else if (0 < a1 && a1 < b1) {

			aux = false;

		} else if (a1 >= b1) {

			int aux2= a1-b1;
			return ejercicio2RecursivoFinal2(&aux2, &b1, &aux);

		}

		return aux;

}

bool ejercicio2RecursivoFinal(int* a, int* b) {

		bool aux = false;
		bool res = ejercicio2RecursivoFinal2(a, b, &aux);
		return res;
	}


