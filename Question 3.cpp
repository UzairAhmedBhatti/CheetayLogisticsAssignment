int countMin(char str[], int cL, int size)
{
	if (cL > size)
	{
		return INT_MAX;
	}
	if (cL == size)
	{ 
		return 0;
	}
	if (cL == size - 1)
	{
		return (str[cL] == str[size]) ? 0 : 1;
	}
	return (str[cL] == str[size]) ?	countMin(str, cL + 1, size - 1):(min(countMin(str, cL, size - 1),countMin(str, cL + 1, size)) + 1);
}