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

/* ACLRS -- Clear a block of memory.
 * [Specially optimized for Sun/IRAF].
 */
ACLRS (a, n)
XSHORT	*a;
XINT	*n;
{
	memset ((char *)a, 0, *n * sizeof(*a));
}
