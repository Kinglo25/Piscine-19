typedef struct	s_list
{
		int		data;
		struct s_list *next;
}			t_list;

void	swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*elem1;
	t_list	*elem2;

	elem1 = lst;
	while (elem1)
	{
		elem2 = elem1->next;
		while(elem2)
		{
			if (!(*cmp)(elem1->data, elem2->data))
			{
				swap(&elem1->data, &elem2->data);
			}
			elem2 = elem2->next;
		}
		elem1 = elem1->next;
	}
	return (lst);
}