/*
 * Generated by dtrace(1M).
 */

#ifndef	_SIMPLE_PROBES_H
#define	_SIMPLE_PROBES_H

#include <unistd.h>

#ifdef	__cplusplus
extern "C" {
#endif

#if _DTRACE_VERSION

#define	SIMPLE_SAW_LINE(arg0) \
	__dtrace_simple___saw__line(arg0)
#define	SIMPLE_SAW_LINE_ENABLED() \
	__dtraceenabled_simple___saw__line()
#define	SIMPLE_SAW_WORD(arg0) \
	__dtrace_simple___saw__word(arg0)
#define	SIMPLE_SAW_WORD_ENABLED() \
	__dtraceenabled_simple___saw__word()


extern void __dtrace_simple___saw__line(int);
extern int __dtraceenabled_simple___saw__line(void);
extern void __dtrace_simple___saw__word(int);
extern int __dtraceenabled_simple___saw__word(void);

#else

#define	SIMPLE_SAW_LINE(arg0)
#define	SIMPLE_SAW_LINE_ENABLED() (0)
#define	SIMPLE_SAW_WORD(arg0)
#define	SIMPLE_SAW_WORD_ENABLED() (0)

#endif


#ifdef	__cplusplus
}
#endif

#endif	/* _SIMPLE_PROBES_H */