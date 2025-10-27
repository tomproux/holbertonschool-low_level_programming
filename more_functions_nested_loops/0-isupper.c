int _isupper(int c)
{
	for (c = 32; c < 127; c++)
	{
		if (c < 65)
		{
			return (0);
		}
		else if ((c > 64) && (c < 91))
		{
			return (1);
		}
		else if (c > 90)
		{
			return (0);
		}
	}
	return (0);
}
