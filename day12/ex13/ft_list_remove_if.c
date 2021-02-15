typedef struct	s_list
{
		int		data;
		struct s_list *next;
}			t_list;

void	ft_list_remove_if(t_list **begin_list, void*data_ref, int (*cmp))
{
	t_list *curr;
	t_list *tmp;

	curr = *begin_list;
	while (curr)
}