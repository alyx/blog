#include "mowgli.h"
#include <dlfcn.h>

mowgli_heap_t *module_heap;
mowgli_list_t modules;

void modules_init(void)
{
	module_heap = mowgli_heap_create(sizeof(blog_module_t), 256, BH_NOW);
	if (!module_heap)
	{

	}
}