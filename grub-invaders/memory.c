#include "memory.h"

static uint8 *nextfree = (uint8*) 0x200000;

void *imalloc (uint32 amount)
{
  void *retval = nextfree;

  nextfree += amount;

  return retval;
};
