/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;
	int found_digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
		result = (result * 10) + (s[i] - '0');
		found_digit = 1;
		}
		else if (found_digit)
		{
			break;
		}
		i++;
	}
	return (result * sign);
}
