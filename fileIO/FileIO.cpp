/*
* File:			FileIO.cpp
* Project:      CNTR2115 - Assignment #02
* Programmer:   Zhendong Tang, Xing Xiong
* First version:2019-02-16
* Description:
*/

#include "FileIO.h"

/*
* Function:		FileIO
* Description:	This is the constructor of the FileIO class.
* Parameters:	N/A
* Return Value:	N/A
*/
FileIO::FileIO()

{
	
}


/*
* Function:		~FileIO
* Description:	This is the destructor of the FileIO class.
* Parameters:	N/A
* Return Value:	N/A
*/
FileIO::~FileIO() 
{
	free(buffer);  // free the buffer
}




/*
* Function:		Read
* Description:	This method will read from a specified file to a buffer.
* Parameters:	char* path : The path of specified file
* Return Value:	N/A
*/
void FileIO::Read(char* path)
{

	/* Read file */
	pFile = fopen(path, "rb");
	if (pFile == NULL)
	{
		fputs("File error", stderr);
		exit(1);
	}

	/* Get the size of the file*/
	fseek(pFile, 0, SEEK_END);
	lSize = ftell(pFile);
	rewind(pFile);

	/* allocate memory for the file*/
	buffer = (char*)malloc(sizeof(char)*lSize);
	if (buffer == NULL)
	{
		fputs("Memory error", stderr);
		exit(2);
	}

	/* write from file to the buffer*/
	result = fread(buffer, 1, lSize, pFile);
	if (result != lSize)
	{
		fputs("Reading error", stderr);
		exit(3);
	}
	/*for testing */
	printf("%s", buffer);

	/* once done reading, close the file */
	fclose(pFile);	
}



/*
* Function:		Write
* Description:	This method will write from the buffer to a file.
* Parameters:	N/A
* Return Value:	N/A
*/
void FileIO::Write()
{

	/* Get local path */

	char fn[30], *p;
	//char pathname[80] = "e:\\1\\2\\abc.dat";

	strcpy(fn, (p = strrchr(path, '\\')) ? p + 1 : path);
	
	printf("%s\n", fn);//���������
	
	
	getcwd(path, MAX_PATH);
	

	
	fclose(pFile);
}



