<h1 align="center">ft_printf</h1>
<p>🖨 Recreating printf function of C programming language

## Usage

1. Create a `main.c` file inside project `ft_printf` folder

```c
#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("Hello %d | %s", 42, "Rio");
}
```

## Run

```sh
 make -s && cc main.c ./libftprintf.a && ./a.out && rm ./a.out && make -s fclean
```
