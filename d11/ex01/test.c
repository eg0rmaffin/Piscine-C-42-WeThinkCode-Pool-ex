#include "ft_list.h"
#include <stdio.h>

void ft_list_push_back(t_list **begin_list, void *data);

t_list* ft_create_elem(void* data);

void crap_a_list(t_list* list)
{
		for (; list != 0; list = list->next)
					printf("%s,", (char*)list->data);
			printf("\n");
}

int main()
{
		t_list* list = 0;
			ft_list_push_back(&list, "asdf");
				crap_a_list(list);
					ft_list_push_back(&list, "qwer");
						ft_list_push_back(&list, "zxcv");
							crap_a_list(list);
								list = 0;
									ft_list_push_back(&list, "uiop");
										ft_list_push_back(&list, "hjkl");
											crap_a_list(list);
}
