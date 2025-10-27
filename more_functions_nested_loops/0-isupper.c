int _isupper(int c)
{
	for (c = 32; c < 127; c++)
	{
		if (c < 65 && c > 90)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (-1);
}
