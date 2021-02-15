typedef struct	s_list
{
		void			*data;
		struct s_list 	*next;
}			t_list;

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*elem;

	elem = begin_list;
	while (elem)
	{
		(*f)(elem->data);
		elem = elem->next;
	}
}