#include <stdio.h>
#include "FileIO.h"
#include <stdlib.h>
#include <new>

int main(int argc, char** argv)

{
	FileIO file;
	file.Read(argv[1]);

	char* x = file.GetBuffer();
	char* y = file.GetFileName();
	file.Write();

	

	//(argc, argv);  //  if OK, mainControl will return 0
	return 0;
}



//class People
//{
//public:
//	int num;
//};