#include "intfile.h"

void deconstruct(FILE *fp, FILE *fp1, FILE *fp2){
	fclose(fp);
	fclose(fp1);
	fclose(fp2);
}

int charToInt(char x){
	return (int)x - 48;
}

int raises(int x, int y){
	int i, total;
	total = 1;
	for (i = 0; i < y; i++){
		total *= x;
	}
	return total;
}

//gets the char string and turns it into an int and saves it to array
int saveLine(int save[], int size, char buff[], int i){
	int j, total, power;
	total = 0;
	power = 0;
	for (j = i; j > 0; j--){
		total += charToInt(buff[j])*raises(10,power);
		power++;
	}
	save[size] = total;
	printf("Saved: %d", total);
	return total;
}

/* Scans the file given and returns an int 1 if succes and 0 
 * if fails. Stores contents in given int array
 */
int scanFile(int store[], FILE *fp){
	char buff[50];
	if (fp != NULL){
		int i = 0;
		int size = 0;
		while (buff[i] = fgetc(fp) != EOF){
			if (buff[i] == '\n'){
				i++;
				if (saveLine(store, size, buff, i) != 0)
					printf("line stored");
				else
					perror("line failed to store");
				size++;
				i = 0;
			}
		}
		return 1;
	} else {
		perror("File does not exist\n");
		return 0;
	}
}