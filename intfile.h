#ifndef header_included_h
#define header_included_h

class head{
	public:
		void deconstruct(FILE *fp, FILE *fp1, FILE *fp2);
		int charToInt(char x);
		int raises(int x, int y);
		int saveLine(int save[], int size, char buff[], int i);
		int scanFile(int store[], FILE *fp);
}
#endif