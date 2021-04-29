int activitySelection(int start[], int end[], int n)
{
	int activityCount = 0;
	int i, j;

	//choose activity 1
	i = 0;
	activityCount++;
	
	//other activities
	for (j = 1; j < n; j++)
	{
		if (start[j] > end[i])
		{
			activityCount++;
			i = j;
		}
	}
	return activityCount;
}