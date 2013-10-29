/*	$NetBSD: vmparam.h,v 1.4 2011/07/09 16:03:01 matt Exp $	*/

#ifndef _EVBMIPS_VMPARAM_H_
#define _EVBMIPS_VMPARAM_H_

#include <mips/vmparam.h>

#define	VM_PHYSSEG_MAX		32

#undef VM_FREELIST_MAX
#define	VM_FREELIST_MAX		4
#if defined(_MIPS_PADDR_T_64BIT) || defined(_LP64)
#define	VM_FREELIST_FIRST4G	3
#endif
#if !defined(_LP64)
#define	VM_FREELIST_FIRST512M	2
#endif
#define VM_FREELIST_ISADMA	1
 
#endif	/* !_EVBMIPS_VMPARAM_H_ */
