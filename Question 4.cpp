int * candyStore(int arr[], int n, int k)
{
	int * Res = new int[2];
	int resIND = 0;
	int min = 0;
	int max = 0;
	int maxIND = 0;

	int copyN = n;

	for (int i = 0; i < copyN; i++) 
	{
		min += arr[i];
		copyN = copyN - k;
	}
	
	for (int i = n - 1; i >= maxIND; i--)
	{
		max += arr[i];
		maxIND += k;
	}

	Res[resIND] = min;
	resIND++;
	Res[resIND] = max;

	return Res;
}