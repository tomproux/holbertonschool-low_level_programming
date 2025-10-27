int _isupper(int c)
{
	for (c = 32; c < 127; c++)
	{
		while (c > 64 && c < 91)
		{
			return (1);
		}
	}
	return (0);
}
