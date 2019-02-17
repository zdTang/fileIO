/*
* File:			FileIO.h
* Project:      CNTR2115 - Assignment #02
* Programmer:   Zhendong Tang, Xing Xiong
* First version:2019-02-16
* Description:
*/
#define _CRT_SECURE_NO_WARNINGS
#ifndef _FileIO_h_
#define _FileIO_h_
#define MAX_PATH  100   // The length for the path of local directory

#include <stdio.h>
#include <stdlib.h>
#include <direct.h>
#include <string.h>

class FileIO {



private:
	
	char*    buffer;                // Content of the original file
	char     fileName[MAX_PATH];              // Name of the original file
	char     path[MAX_PATH];        // The path used for both Server/Client
	FILE*    pFile;                 // File pointer to the target file
	long     lSize;                 // Hold the size of the file
	size_t   result;                //

	
	

	




public:
	FileIO();	                     // Singleton, private constructor
	~FileIO();
	void Read(char* path); // Reading file from specified path to the buffer
	void Write();          // Writing file to a specified file from buffer

};


#endif