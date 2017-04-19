/* Copyright(c) 1986 Association of Universities for Research in Astronomy Inc.
 */

#define import_spp
#define import_knames

/*
 * rds, this line was:
 *                    #include <iraf.h>
 * I changed the reference to the .iraf directory.
 */

#include </home/steele/.iraf/iraf.h>

/* AMOVL -- Copy a block of memory.
 * [Specially optimized for Sun/IRAF].
 */
AMOVL (a, b, n)
XLONG	*a, *b;
XINT	*n;
{
	if (a != b)
	    memmove ((char *)b, (char *)a, *n * sizeof(*a));
}
