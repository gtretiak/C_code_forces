#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	ft_get_answer(int *n)
{
	*n = (*n / 10) + (*n % 10);
}

int	main(void)
{
	int	num_of_test_cases;
	int	i;
	int	*n;

	printf("let's calculate the sum of digits of any two-digit number.\n"
		"Enter the number of test cases: ");
	scanf("%d", &num_of_test_cases);
	i = 0;
	n = malloc(sizeof(int) * num_of_test_cases);
	while (i < num_of_test_cases)
	{
		printf("Enter the %d two-digit number: ", i + 1);
		scanf("%d", &n[i]);
		ft_get_answer(&n[i]);
		i++;
	}
	i = 0;
	while (i < num_of_test_cases)
	{
		printf("The sum of all digits of the %d given number is %d\n", i + 1, n[i]);
		i++;
	}
	free(n);
}
