#include <iostream>

using namespace std;

int main()
{
	int rows, cols;

	printf("Enter rows: ");
	scanf("%d", &rows);
	printf("Enter cols: ");
	scanf("%d", &cols);


	int mat[rows][cols];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if ((2*i + 8) == j)
			{
				printf("#");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
