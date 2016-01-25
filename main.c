#include <stdio.h>
#include "intfile.h"

//Fails to run, opens file and reads lines
//Lines read but reads too many
int main() {
	printf("Successful open\n");
	int i;
	FILE *fo, *fs, *output;
	char foname[] = "C:\\users\\MTCA\\Desktop\\List.txt\\";
	char fsname[] = "C:\\users\\MTCA\\Desktop\\\"isv save list\"";
	char outputname[] = "C:\\users\\MTCA\\Desktop\\Out.txt\\";
	fo = fopen(foname, "r");
	fs = fopen(fsname, "r");
	output = fopen(outputname, "w");
	printf("Opened the files\n");
	int list[3][70];
	scanFile(list[0], fo);
	deconstruct(fo, fs, output);
	return 0;
}