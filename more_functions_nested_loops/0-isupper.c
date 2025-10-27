int _isupper(int c)
{
	for (c = 32; c < 127; c++)
	{
		while (c < 65 && c > 90)
		{
			return (0);
		}
		return (1);
	}
	return (-1);
}
