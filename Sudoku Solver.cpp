#include<iostream>
using namespace std;

void main()
{
	int mat[9][9], i, j;
	for (i = 0; i < 9; i++)
		for (j = 0; j < 9; j++)
			mat[i][j] = 0;
	for (i = 0; i < 9; i++)
		for (j = 0; j < 9; j++)
			cout << mat[i][j];
}