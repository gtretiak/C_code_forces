#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_get_answer(int x, int y, int depth)
{
	char	*s1 = "Tom has found it!";
	char	*s2 = "Sam has found it!";
	int	cycle;
	int	last;
	
	if (depth <= 0 || x > depth || x + y == 0)
		return (s2);
	cycle = x + y;
	last = depth % cycle;
	if (last >= x)
		return (s1);
	else
		return (s2);
}

int	main(void)
{
	int	num_of_test_cases;
	int	i;
	int	digged_by_Sam;
	int	digged_by_Tom;
	int	depth_of_treasure;
	char	**s;

	printf("Enter the number of test cases: ");
	scanf("%d", &num_of_test_cases);
	i = 0;
	s = malloc(sizeof(char *) * num_of_test_cases);
	while (i < num_of_test_cases)
	{
		printf("\nThe %d test case...\nSam digs (meters): ", i + 1);
	       	scanf("%d", &digged_by_Sam);
		printf("Tom digs (meters): ");
		scanf("%d", &digged_by_Tom);
		printf("The treasure is burried at a depth (meters): ");
		scanf("%d", &depth_of_treasure);
		s[i] = ft_get_answer(digged_by_Sam, digged_by_Tom, depth_of_treasure);
		i++;
	}
	i = 0;
	printf("\n");
	while (i < num_of_test_cases)
	{
		printf("In the %d test case ", i + 1);
		puts(s[i]);
		i++;
	}
	free(s);
}
