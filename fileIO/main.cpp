#include <stdio.h>
#include "FileIO.h"
#include <stdlib.h>


int main(int argc, char** argv)

{
	FileIO file = new FileIO();
	file.Read(argv[1]);
	file.Write();

	//(argc, argv);  //  if OK, mainControl will return 0
	return 0;
}
