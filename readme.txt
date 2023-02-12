HOW TO COMPILE:

To compile the code use the following command in this folder:
g++ -c -Wall *.c
g++ -Wall *.o -o exe

HOW TO USE:

In the comand prompt use the following syntax:
.\CropFile.exe [FROM_LINE]-[TO_LINE] FILE_TO_READ FILE_TO_WRITE

For example:
.\CropFile.exe 5-10 .\Poezie.txt .\Rezumat.txt
.\CropFile.exe -10 .\Poezie.txt .\Rezumat.txt
.\CropFile.exe 5- .\Poezie.txt .\Rezumat.txt