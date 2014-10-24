#include <stdio.h>
struct gpio_desc{
	char *label;
	int nr;
};
struct gpio_desc gpio_desc[15];
int main()
{
	struct gpio_desc *desc;
	desc = &gpio_desc[10];
	return 0;

}
