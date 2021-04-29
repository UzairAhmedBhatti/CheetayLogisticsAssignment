int * spirallyTraverse(int r, int c, int a[R][C])
{
	int * Result= new int [R*C];
	int resultIndex = 0;

	int i;
	int rowStart = 0;
	int columnStart = 0;

	while (rowStart < r && columnStart < c)
	{
		//row start
		for (i = columnStart; i < c; ++i)
		{
			Result[resultIndex] = a[rowStart][i];
			resultIndex++;
		}
		rowStart++;

		//col last
		for (i = rowStart; i < r; ++i)
		{
			Result[resultIndex] = a[i][c - 1];
			resultIndex++;
		}
		c--;

		//row last
		if (rowStart < r) {
			for (i = c - 1; i >= columnStart; --i)
			{
				Result[resultIndex] = a[r - 1][i];
				resultIndex++;
			}
			r--;
		}

		//col start
		if (columnStart < c)
		{
			for (i = r - 1; i >= rowStart; --i)
			{
				Result[resultIndex] = a[i][columnStart];
				resultIndex++;
			}
			columnStart++;
		}
	}
	return Result;
}