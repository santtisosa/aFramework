#include "EjerciciosComienzo.h"

int suma(int a, int b) {
	return a + b;
}


void tablaDel(unsigned int tablaDel, unsigned int desde, unsigned int hasta) {
	for (unsigned int i = desde; i <= hasta; i++) {
		if (i > desde) cout << ";";
		cout << i << "*" << tablaDel << "=" << (i * tablaDel);
	}
	cout << endl;
}


int maximoComunDivisor(int a, int b) {
	if (b == 0) return a;
	return maximoComunDivisor(b, a % b);
}
void simplificar(int n, int d) {

	if (d != 0) {
		if (n == 0) {
			cout << "0/" << d << endl;
		}
		else {
			int mcd = maximoComunDivisor(n, d);
			cout << (n / mcd) << "/" << (d / mcd) << endl;
		}
	}



}

int ocurrencias123Repetidos(int* vector, int largo) {
	int cont = 0;
	int estado = 1;

	for (int i = 0; i < largo; i++) {
		if (estado == 1 && vector[i] == 1) estado = 2;
		else if (estado == 2) {
			if (vector[i] == 2) estado = 3;
			else if (vector[i] == 1) estado = 2;
			else estado = 1;
		}
		else if (estado == 3) {
			if (vector[i] == 3) {
				cont++;
				estado = 1;
			}
			else if (vector[i] == 2) estado = 3;
			else if (vector[i] == 1) estado = 2;
			else estado = 1;
		}
	}
	return cont;
}



int maximoNumero(unsigned int n) {
	int num;
	int* nums = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> num;
		nums[i] = num;
	}
	int max = INT_MIN;
	for (int j = 0; j < n; j++) {
		if (nums[j] > max) {
			max = nums[j];
		}
	}
	return max;
}

void ordenarVecInt(int* vec, int largoVec) {
	for (int i = 0; i < largoVec - 1; i++) {
		for (int j = 0; j < largoVec - i - 1; j++) {
			if (vec[j] > vec[j + 1]) {
				int aux = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = aux;
			}
		}
	}
}


int* intercalarVector(int* v1, int* v2, int l1, int l2) {
	int* v3 = (int*)malloc((l1 + l2) * sizeof(int));
	for (int i = 0; i < l1; i++) {
		v3[i] = v1[i];
	}
	for (int i = 0; i < l2; i++) {
		v3[l1 + i] = v2[i];
	}
	for (int i = 0; i < l1 + l2 - 1; i++) {
		for (int j = 0; j < l1 + l2 - i - 1; j++) {
			if (v3[j] > v3[j + 1]) {
				int aux = v3[j];
				v3[j] = v3[j + 1];
				v3[j + 1] = aux;
			}
		}
	}
	if (l1 + l2 == 0) {
		return NULL;
	}
	else {
		return v3;
	}
}

bool subconjuntoVector(int* v1, int* v2, int l1, int l2) {

	int cont = 0;
	for (int i = 0; i < l1; i++) {
		for (int j = 0; j < l2; j++) {
			if (v1[i] == v2[j]) {
				cont++;
			}
		}
	}
	if (l1 == 0 || cont >= l1) {
		return true;
	}
	else {
		return false;
	}
}
int largoStr(char* str) {
	int cont = 0;
	for  (int i = 0; str[i]!='\0'; i++){
		cont++;
	}
	return cont;
}

char* invertirCase(char* str){
    char* texto = (char*)malloc((largoStr(str) + 1) * sizeof(char));
    for (int i = 0; i < largoStr(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            texto[i] = str[i] - 32; 
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            texto[i] = str[i] + 32; 
        }
        else {
            texto[i] = str[i]; 
        }
    }
    texto[largoStr(str)] = '\0'; 
    return texto;
}

int islas(char** mapa, int col, int fil) {
	// IMPLEMENTAR SOLUCION
	return 0;
}

unsigned int ocurrenciasSubstring(char** vecStr, int largoVecStr, char* substr)
{
	// IMPLEMENTAR SOLUCION
	return 0;
}






char** ordenarVecStrings(char** vecStr, int largoVecStr) {
	if (vecStr==NULL || largoVecStr <= 0) { 
		return NULL;
	}

	char** vec = (char**)malloc(largoVecStr * sizeof(char*));
	if (vec==NULL) {
		return NULL; 
	}

	for (int i = 0; i < largoVecStr; i++) {
		int len = 0;
		while (vecStr[i][len] != '\0') {
			len++; 
		}

		vec[i] = (char*)malloc(len + 1);
		for (int j = 0; j <= len; j++) {
			vec[i][j] = vecStr[i][j];
		}
	}

	for (int i = 0; i < largoVecStr - 1; i++) {
		for (int j = 0; j < largoVecStr - i - 1; j++) {
			int k = 0;
			while (vec[j][k] != '\0' && vec[j + 1][k] != '\0' && vec[j][k] == vec[j + 1][k]) {
				k++;
			}
			if ((unsigned char)vec[j][k] > (unsigned char)vec[j + 1][k]) {
				char* tmp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = tmp;
			}
		}
	}

	return vec;
}

char** splitStr(char* str, char separador, int& largoRet)
{
	// IMPLEMENTAR SOLUCION
	return NULL;
}

void ordenarVecIntMergeSort(int* vector, int largo)
{
	// IMPLEMENTAR SOLUCION
}