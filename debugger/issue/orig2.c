
typedef unsigned long size_t;
extern void *memcpy (void * __dest, const void * __src,
       size_t __n) ;
extern void *memmove (void *__dest, const void *__src, size_t __n)
     ;
extern void *memset (void *__s, int __c, size_t __n) ;
extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     ;
extern void *memchr (const void *__s, int __c, size_t __n)
      ;
extern char *strcpy (char * __dest, const char * __src)
     ;
extern char *strncpy (char * __dest,
        const char * __src, size_t __n)
     ;
extern char *strcat (char * __dest, const char * __src)
     ;
extern char *strncat (char * __dest, const char * __src,
        size_t __n) ;
extern int strcmp (const char *__s1, const char *__s2)
     ;
extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     ;
extern int strcoll (const char *__s1, const char *__s2)
     ;
extern size_t strxfrm (char * __dest,
         const char * __src, size_t __n)
     ;
extern char *strchr (const char *__s, int __c)
     ;
extern char *strrchr (const char *__s, int __c)
     ;
extern size_t strcspn (const char *__s, const char *__reject)
     ;
extern size_t strspn (const char *__s, const char *__accept)
     ;
extern char *strpbrk (const char *__s, const char *__accept)
     ;
extern char *strstr (const char *__haystack, const char *__needle)
     ;
extern char *strtok (char * __s, const char * __delim)
     ;
extern char *__strtok_r (char * __s,
    const char * __delim,
    char ** __save_ptr)
     ;
extern size_t strlen (const char *__s)
     ;
extern char *strerror (int __errnum) ;


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;
typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long double _Float64x;
typedef float float_t;
typedef double double_t;
extern int __fpclassify (double __value)
     ;
extern int __signbit (double __value)
     ;
extern int __isinf (double __value) ;
extern int __finite (double __value) ;
extern int __isnan (double __value) ;
extern int __iseqsig (double __x, double __y) ;
extern int __issignaling (double __value)
     ;
extern double acos (double __x) ; extern double __acos (double __x) ;
extern double asin (double __x) ; extern double __asin (double __x) ;
extern double atan (double __x) ; extern double __atan (double __x) ;
extern double atan2 (double __y, double __x) ; extern double __atan2 (double __y, double __x) ;
 extern double cos (double __x) ; extern double __cos (double __x) ;
 extern double sin (double __x) ; extern double __sin (double __x) ;
extern double tan (double __x) ; extern double __tan (double __x) ;
extern double cosh (double __x) ; extern double __cosh (double __x) ;
extern double sinh (double __x) ; extern double __sinh (double __x) ;
extern double tanh (double __x) ; extern double __tanh (double __x) ;
extern double acosh (double __x) ; extern double __acosh (double __x) ;
extern double asinh (double __x) ; extern double __asinh (double __x) ;
extern double atanh (double __x) ; extern double __atanh (double __x) ;
 extern double exp (double __x) ; extern double __exp (double __x) ;
extern double frexp (double __x, int *__exponent) ; extern double __frexp (double __x, int *__exponent) ;
extern double ldexp (double __x, int __exponent) ; extern double __ldexp (double __x, int __exponent) ;
 extern double log (double __x) ; extern double __log (double __x) ;
extern double log10 (double __x) ; extern double __log10 (double __x) ;
extern double modf (double __x, double *__iptr) ; extern double __modf (double __x, double *__iptr) ;
extern double expm1 (double __x) ; extern double __expm1 (double __x) ;
extern double log1p (double __x) ; extern double __log1p (double __x) ;
extern double logb (double __x) ; extern double __logb (double __x) ;
extern double exp2 (double __x) ; extern double __exp2 (double __x) ;
extern double log2 (double __x) ; extern double __log2 (double __x) ;
 extern double pow (double __x, double __y) ; extern double __pow (double __x, double __y) ;
extern double sqrt (double __x) ; extern double __sqrt (double __x) ;
extern double hypot (double __x, double __y) ; extern double __hypot (double __x, double __y) ;
extern double cbrt (double __x) ; extern double __cbrt (double __x) ;
extern double ceil (double __x) ; extern double __ceil (double __x) ;
extern double fabs (double __x) ; extern double __fabs (double __x) ;
extern double floor (double __x) ; extern double __floor (double __x) ;
extern double fmod (double __x, double __y) ; extern double __fmod (double __x, double __y) ;
extern double copysign (double __x, double __y) ; extern double __copysign (double __x, double __y) ;
extern double nan (const char *__tagb) ; extern double __nan (const char *__tagb) ;
extern double erf (double) ; extern double __erf (double) ;
extern double erfc (double) ; extern double __erfc (double) ;
extern double lgamma (double) ; extern double __lgamma (double) ;
extern double tgamma (double) ; extern double __tgamma (double) ;
extern double rint (double __x) ; extern double __rint (double __x) ;
extern double nextafter (double __x, double __y) ; extern double __nextafter (double __x, double __y) ;
extern double nexttoward (double __x, long double __y) ; extern double __nexttoward (double __x, long double __y) ;
extern double remainder (double __x, double __y) ; extern double __remainder (double __x, double __y) ;
extern double scalbn (double __x, int __n) ; extern double __scalbn (double __x, int __n) ;
extern int ilogb (double __x) ; extern int __ilogb (double __x) ;
extern double scalbln (double __x, long int __n) ; extern double __scalbln (double __x, long int __n) ;
extern double nearbyint (double __x) ; extern double __nearbyint (double __x) ;
extern double round (double __x) ; extern double __round (double __x) ;
extern double trunc (double __x) ; extern double __trunc (double __x) ;
extern double remquo (double __x, double __y, int *__quo) ; extern double __remquo (double __x, double __y, int *__quo) ;
extern long int lrint (double __x) ; extern long int __lrint (double __x) ;

extern long long int llrint (double __x) ; extern long long int __llrint (double __x) ;
extern long int lround (double __x) ; extern long int __lround (double __x) ;

extern long long int llround (double __x) ; extern long long int __llround (double __x) ;
extern double fdim (double __x, double __y) ; extern double __fdim (double __x, double __y) ;
extern double fmax (double __x, double __y) ; extern double __fmax (double __x, double __y) ;
extern double fmin (double __x, double __y) ; extern double __fmin (double __x, double __y) ;
extern double fma (double __x, double __y, double __z) ; extern double __fma (double __x, double __y, double __z) ;
extern int __fpclassifyf (float __value)
     ;
extern int __signbitf (float __value)
     ;
extern int __isinff (float __value) ;
extern int __finitef (float __value) ;
extern int __isnanf (float __value) ;
extern int __iseqsigf (float __x, float __y) ;
extern int __issignalingf (float __value)
     ;
extern float acosf (float __x) ; extern float __acosf (float __x) ;
extern float asinf (float __x) ; extern float __asinf (float __x) ;
extern float atanf (float __x) ; extern float __atanf (float __x) ;
extern float atan2f (float __y, float __x) ; extern float __atan2f (float __y, float __x) ;
 extern float cosf (float __x) ; extern float __cosf (float __x) ;
 extern float sinf (float __x) ; extern float __sinf (float __x) ;
extern float tanf (float __x) ; extern float __tanf (float __x) ;
extern float coshf (float __x) ; extern float __coshf (float __x) ;
extern float sinhf (float __x) ; extern float __sinhf (float __x) ;
extern float tanhf (float __x) ; extern float __tanhf (float __x) ;
extern float acoshf (float __x) ; extern float __acoshf (float __x) ;
extern float asinhf (float __x) ; extern float __asinhf (float __x) ;
extern float atanhf (float __x) ; extern float __atanhf (float __x) ;
 extern float expf (float __x) ; extern float __expf (float __x) ;
extern float frexpf (float __x, int *__exponent) ; extern float __frexpf (float __x, int *__exponent) ;
extern float ldexpf (float __x, int __exponent) ; extern float __ldexpf (float __x, int __exponent) ;
 extern float logf (float __x) ; extern float __logf (float __x) ;
extern float log10f (float __x) ; extern float __log10f (float __x) ;
extern float modff (float __x, float *__iptr) ; extern float __modff (float __x, float *__iptr) ;
extern float expm1f (float __x) ; extern float __expm1f (float __x) ;
extern float log1pf (float __x) ; extern float __log1pf (float __x) ;
extern float logbf (float __x) ; extern float __logbf (float __x) ;
extern float exp2f (float __x) ; extern float __exp2f (float __x) ;
extern float log2f (float __x) ; extern float __log2f (float __x) ;
 extern float powf (float __x, float __y) ; extern float __powf (float __x, float __y) ;
extern float sqrtf (float __x) ; extern float __sqrtf (float __x) ;
extern float hypotf (float __x, float __y) ; extern float __hypotf (float __x, float __y) ;
extern float cbrtf (float __x) ; extern float __cbrtf (float __x) ;
extern float ceilf (float __x) ; extern float __ceilf (float __x) ;
extern float fabsf (float __x) ; extern float __fabsf (float __x) ;
extern float floorf (float __x) ; extern float __floorf (float __x) ;
extern float fmodf (float __x, float __y) ; extern float __fmodf (float __x, float __y) ;
extern float copysignf (float __x, float __y) ; extern float __copysignf (float __x, float __y) ;
extern float nanf (const char *__tagb) ; extern float __nanf (const char *__tagb) ;
extern float erff (float) ; extern float __erff (float) ;
extern float erfcf (float) ; extern float __erfcf (float) ;
extern float lgammaf (float) ; extern float __lgammaf (float) ;
extern float tgammaf (float) ; extern float __tgammaf (float) ;
extern float rintf (float __x) ; extern float __rintf (float __x) ;
extern float nextafterf (float __x, float __y) ; extern float __nextafterf (float __x, float __y) ;
extern float nexttowardf (float __x, long double __y) ; extern float __nexttowardf (float __x, long double __y) ;
extern float remainderf (float __x, float __y) ; extern float __remainderf (float __x, float __y) ;
extern float scalbnf (float __x, int __n) ; extern float __scalbnf (float __x, int __n) ;
extern int ilogbf (float __x) ; extern int __ilogbf (float __x) ;
extern float scalblnf (float __x, long int __n) ; extern float __scalblnf (float __x, long int __n) ;
extern float nearbyintf (float __x) ; extern float __nearbyintf (float __x) ;
extern float roundf (float __x) ; extern float __roundf (float __x) ;
extern float truncf (float __x) ; extern float __truncf (float __x) ;
extern float remquof (float __x, float __y, int *__quo) ; extern float __remquof (float __x, float __y, int *__quo) ;
extern long int lrintf (float __x) ; extern long int __lrintf (float __x) ;

extern long long int llrintf (float __x) ; extern long long int __llrintf (float __x) ;
extern long int lroundf (float __x) ; extern long int __lroundf (float __x) ;

extern long long int llroundf (float __x) ; extern long long int __llroundf (float __x) ;
extern float fdimf (float __x, float __y) ; extern float __fdimf (float __x, float __y) ;
extern float fmaxf (float __x, float __y) ; extern float __fmaxf (float __x, float __y) ;
extern float fminf (float __x, float __y) ; extern float __fminf (float __x, float __y) ;
extern float fmaf (float __x, float __y, float __z) ; extern float __fmaf (float __x, float __y, float __z) ;
extern int __fpclassifyl (long double __value)
     ;
extern int __signbitl (long double __value)
     ;
extern int __isinfl (long double __value) ;
extern int __finitel (long double __value) ;
extern int __isnanl (long double __value) ;
extern int __iseqsigl (long double __x, long double __y) ;
extern int __issignalingl (long double __value)
     ;
extern long double acosl (long double __x) ; extern long double __acosl (long double __x) ;
extern long double asinl (long double __x) ; extern long double __asinl (long double __x) ;
extern long double atanl (long double __x) ; extern long double __atanl (long double __x) ;
extern long double atan2l (long double __y, long double __x) ; extern long double __atan2l (long double __y, long double __x) ;
 extern long double cosl (long double __x) ; extern long double __cosl (long double __x) ;
 extern long double sinl (long double __x) ; extern long double __sinl (long double __x) ;
extern long double tanl (long double __x) ; extern long double __tanl (long double __x) ;
extern long double coshl (long double __x) ; extern long double __coshl (long double __x) ;
extern long double sinhl (long double __x) ; extern long double __sinhl (long double __x) ;
extern long double tanhl (long double __x) ; extern long double __tanhl (long double __x) ;
extern long double acoshl (long double __x) ; extern long double __acoshl (long double __x) ;
extern long double asinhl (long double __x) ; extern long double __asinhl (long double __x) ;
extern long double atanhl (long double __x) ; extern long double __atanhl (long double __x) ;
 extern long double expl (long double __x) ; extern long double __expl (long double __x) ;
extern long double frexpl (long double __x, int *__exponent) ; extern long double __frexpl (long double __x, int *__exponent) ;
extern long double ldexpl (long double __x, int __exponent) ; extern long double __ldexpl (long double __x, int __exponent) ;
 extern long double logl (long double __x) ; extern long double __logl (long double __x) ;
extern long double log10l (long double __x) ; extern long double __log10l (long double __x) ;
extern long double modfl (long double __x, long double *__iptr) ; extern long double __modfl (long double __x, long double *__iptr) ;
extern long double expm1l (long double __x) ; extern long double __expm1l (long double __x) ;
extern long double log1pl (long double __x) ; extern long double __log1pl (long double __x) ;
extern long double logbl (long double __x) ; extern long double __logbl (long double __x) ;
extern long double exp2l (long double __x) ; extern long double __exp2l (long double __x) ;
extern long double log2l (long double __x) ; extern long double __log2l (long double __x) ;
 extern long double powl (long double __x, long double __y) ; extern long double __powl (long double __x, long double __y) ;
extern long double sqrtl (long double __x) ; extern long double __sqrtl (long double __x) ;
extern long double hypotl (long double __x, long double __y) ; extern long double __hypotl (long double __x, long double __y) ;
extern long double cbrtl (long double __x) ; extern long double __cbrtl (long double __x) ;
extern long double ceill (long double __x) ; extern long double __ceill (long double __x) ;
extern long double fabsl (long double __x) ; extern long double __fabsl (long double __x) ;
extern long double floorl (long double __x) ; extern long double __floorl (long double __x) ;
extern long double fmodl (long double __x, long double __y) ; extern long double __fmodl (long double __x, long double __y) ;
extern long double copysignl (long double __x, long double __y) ; extern long double __copysignl (long double __x, long double __y) ;
extern long double nanl (const char *__tagb) ; extern long double __nanl (const char *__tagb) ;
extern long double erfl (long double) ; extern long double __erfl (long double) ;
extern long double erfcl (long double) ; extern long double __erfcl (long double) ;
extern long double lgammal (long double) ; extern long double __lgammal (long double) ;
extern long double tgammal (long double) ; extern long double __tgammal (long double) ;
extern long double rintl (long double __x) ; extern long double __rintl (long double __x) ;
extern long double nextafterl (long double __x, long double __y) ; extern long double __nextafterl (long double __x, long double __y) ;
extern long double nexttowardl (long double __x, long double __y) ; extern long double __nexttowardl (long double __x, long double __y) ;
extern long double remainderl (long double __x, long double __y) ; extern long double __remainderl (long double __x, long double __y) ;
extern long double scalbnl (long double __x, int __n) ; extern long double __scalbnl (long double __x, int __n) ;
extern int ilogbl (long double __x) ; extern int __ilogbl (long double __x) ;
extern long double scalblnl (long double __x, long int __n) ; extern long double __scalblnl (long double __x, long int __n) ;
extern long double nearbyintl (long double __x) ; extern long double __nearbyintl (long double __x) ;
extern long double roundl (long double __x) ; extern long double __roundl (long double __x) ;
extern long double truncl (long double __x) ; extern long double __truncl (long double __x) ;
extern long double remquol (long double __x, long double __y, int *__quo) ; extern long double __remquol (long double __x, long double __y, int *__quo) ;
extern long int lrintl (long double __x) ; extern long int __lrintl (long double __x) ;

extern long long int llrintl (long double __x) ; extern long long int __llrintl (long double __x) ;
extern long int lroundl (long double __x) ; extern long int __lroundl (long double __x) ;

extern long long int llroundl (long double __x) ; extern long long int __llroundl (long double __x) ;
extern long double fdiml (long double __x, long double __y) ; extern long double __fdiml (long double __x, long double __y) ;
extern long double fmaxl (long double __x, long double __y) ; extern long double __fmaxl (long double __x, long double __y) ;
extern long double fminl (long double __x, long double __y) ; extern long double __fminl (long double __x, long double __y) ;
extern long double fmal (long double __x, long double __y, long double __z) ; extern long double __fmal (long double __x, long double __y, long double __z) ;
enum
  {
    FP_NAN =
      0,
    FP_INFINITE =
      1,
    FP_ZERO =
      2,
    FP_SUBNORMAL =
      3,
    FP_NORMAL =
      4
  };

typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;
typedef long int int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long int uint_least64_t;
typedef signed char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef long int intptr_t;
typedef unsigned long int uintptr_t;
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;

extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     ;
extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     ;
extern void __assert (const char *__assertion, const char *__file, int __line)
     ;


struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t; struct _IO_FILE;
typedef void _IO_lock_t;
struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  int _pos;
};
enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
struct _IO_FILE {
  int _flags;
  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;
  int _mode;
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
typedef struct _IO_FILE _IO_FILE;
struct _IO_FILE_plus;
extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);
typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);
typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);
typedef int __io_close_fn (void *__cookie);
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) ;
extern int _IO_ferror (_IO_FILE *__fp) ;
extern int _IO_peekc_locked (_IO_FILE *__fp);
extern void _IO_flockfile (_IO_FILE *) ;
extern void _IO_funlockfile (_IO_FILE *) ;
extern int _IO_ftrylockfile (_IO_FILE *) ;
extern int _IO_vfscanf (_IO_FILE * , const char * ,
   __gnuc_va_list, int *);
extern int _IO_vfprintf (_IO_FILE *, const char *,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);
extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);
extern void _IO_free_backup_area (_IO_FILE *) ;
typedef _G_fpos_t fpos_t;
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
extern int remove (const char *__filename) ;
extern int rename (const char *__old, const char *__new) ;
extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s) ;
extern int fclose (FILE *__stream);
extern int fflush (FILE *__stream);
extern FILE *fopen (const char * __filename,
      const char * __modes) ;
extern FILE *freopen (const char * __filename,
        const char * __modes,
        FILE * __stream) ;
extern void setbuf (FILE * __stream, char * __buf) ;
extern int setvbuf (FILE * __stream, char * __buf,
      int __modes, size_t __n) ;
extern int fprintf (FILE * __stream,
      const char * __format, ...);
extern int printf (const char * __format, ...);
extern int sprintf (char * __s,
      const char * __format, ...) ;
extern int vfprintf (FILE * __s, const char * __format,
       __gnuc_va_list __arg);
extern int vprintf (const char * __format, __gnuc_va_list __arg);
extern int vsprintf (char * __s, const char * __format,
       __gnuc_va_list __arg) ;
extern int snprintf (char * __s, size_t __maxlen,
       const char * __format, ...)
     ;
extern int vsnprintf (char * __s, size_t __maxlen,
        const char * __format, __gnuc_va_list __arg)
     ;
extern int fscanf (FILE * __stream,
     const char * __format, ...) ;
extern int scanf (const char * __format, ...) ;
extern int sscanf (const char * __s,
     const char * __format, ...) ;
extern int __isoc99_fscanf (FILE * __stream,
       const char * __format, ...) ;
extern int __isoc99_scanf (const char * __format, ...) ;
extern int __isoc99_sscanf (const char * __s,
       const char * __format, ...) ;
extern int vfscanf (FILE * __s, const char * __format,
      __gnuc_va_list __arg)
     ;
extern int vscanf (const char * __format, __gnuc_va_list __arg)
     ;
extern int vsscanf (const char * __s,
      const char * __format, __gnuc_va_list __arg)
     ;
extern int __isoc99_vfscanf (FILE * __s,
        const char * __format,
        __gnuc_va_list __arg) ;
extern int __isoc99_vscanf (const char * __format,
       __gnuc_va_list __arg) ;
extern int __isoc99_vsscanf (const char * __s,
        const char * __format,
        __gnuc_va_list __arg) ;
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);
extern int getchar (void);
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);
extern int putchar (int __c);
extern char *fgets (char * __s, int __n, FILE * __stream)
     ;
extern char *gets (char *__s) ;
extern int fputs (const char * __s, FILE * __stream);
extern int puts (const char *__s);
extern int ungetc (int __c, FILE *__stream);
extern size_t fread (void * __ptr, size_t __size,
       size_t __n, FILE * __stream) ;
extern size_t fwrite (const void * __ptr, size_t __size,
        size_t __n, FILE * __s);
extern int fseek (FILE *__stream, long int __off, int __whence);
extern long int ftell (FILE *__stream) ;
extern void rewind (FILE *__stream);
extern int fgetpos (FILE * __stream, fpos_t * __pos);
extern int fsetpos (FILE *__stream, const fpos_t *__pos);
extern void clearerr (FILE *__stream) ;
extern int feof (FILE *__stream) ;
extern int ferror (FILE *__stream) ;
extern void perror (const char *__s);

static void
platform_main_begin(void)
{
}
static void
platform_main_end(uint32_t crc, int flag)
{
 printf ("checksum = %X\n", crc);
}
static int8_t
(safe_unary_minus_func_int8_t_s)(int8_t si )
{
 
  return
    -si;
}
static int8_t
(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
(safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_s)(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
(safe_unary_minus_func_int16_t_s)(int16_t si )
{
 
  return
    -si;
}
static int16_t
(safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
(safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
(safe_unary_minus_func_int32_t_s)(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
(safe_mul_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
(safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
(safe_lshift_func_int32_t_s_s)(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
(safe_lshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
(safe_rshift_func_int32_t_s_s)(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
(safe_rshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
(safe_unary_minus_func_uint8_t_u)(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
(safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
(safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
(safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
(safe_unary_minus_func_uint16_t_u)(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
(safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
(safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
(safe_rshift_func_uint16_t_u_s)(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
(safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
(safe_unary_minus_func_uint32_t_u)(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
(safe_mul_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
(safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
(safe_lshift_func_uint32_t_u_s)(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
(safe_lshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
(safe_rshift_func_uint32_t_u_s)(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
(safe_rshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
(safe_add_func_float_f_f)(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * 0x1.fffffep+127F)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
(safe_sub_func_float_f_f)(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * 0x1.fffffep+127F)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
(safe_mul_func_float_f_f)(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * 0x1.fffffep+127F))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
(safe_div_func_float_f_f)(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * 0x1.fffffep+127F))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
(safe_add_func_double_f_f)(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * 0x1.fffffffffffffp+1023)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
(safe_sub_func_double_f_f)(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * 0x1.fffffffffffffp+1023)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
(safe_mul_func_double_f_f)(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * 0x1.fffffffffffffp+1023))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
(safe_div_func_double_f_f)(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * 0x1.fffffffffffffp+1023))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
(safe_convert_func_float_to_int32_t)(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static void
crc32_gentab (void)
{
 uint32_t crc;
 const uint32_t poly = 0xEDB88320UL;
 int i, j;
 for (i = 0; i < 256; i++) {
  crc = i;
  for (j = 8; j > 0; j--) {
   if (crc & 1) {
    crc = (crc >> 1) ^ poly;
   } else {
    crc >>= 1;
   }
  }
  crc32_tab[i] = crc;
 }
}
static void
crc32_byte (uint8_t b) {
 crc32_context =
  ((crc32_context >> 8) & 0x00FFFFFF) ^
  crc32_tab[(crc32_context ^ b) & 0xFF];
}
static void
crc32_8bytes (uint32_t val)
{
 crc32_byte ((val>>0) & 0xff);
 crc32_byte ((val>>8) & 0xff);
 crc32_byte ((val>>16) & 0xff);
 crc32_byte ((val>>24) & 0xff);
}
static void
transparent_crc (uint32_t val, char* vname, int flag)
{
 crc32_8bytes(val);
 if (flag) {
    printf("...checksum after hashing %s : %X\n", vname, crc32_context ^ 0xFFFFFFFFU);
 }
}
static void
transparent_crc_bytes (char *ptr, int nbytes, char* vname, int flag)
{
    int i;
    for (i=0; i<nbytes; i++) {
        crc32_byte(ptr[i]);
    }
 if (flag) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
 }
}
volatile uint32_t csmith_sink_ = 0;
static long __undefined;
static int8_t g_3 = 0x97;
static int32_t g_31 = 0xD4E70302;
static int32_t g_38 = 0;
static int32_t g_39 = 1;
static int32_t g_41[3][9] = {{0x61FB9A31, 0x61FB9A31, 0x61FB9A31, 0x61FB9A31, 0x61FB9A31, 0x61FB9A31, 0x61FB9A31, 0x61FB9A31, 0x61FB9A31}, {0x61FB9A31, 0x61FB9A31, 0x61FB9A31, 0x61FB9A31, 0x61FB9A31, 0x61FB9A31, 0x61FB9A31, 0x61FB9A31, 0x61FB9A31}, {0x61FB9A31, 0x61FB9A31, 0x61FB9A31, 0x61FB9A31, 0x61FB9A31, 0x61FB9A31, 0x61FB9A31, 0x61FB9A31, 0x61FB9A31}};
static int32_t * const *g_47 = (void*)0;
static int32_t *g_189[10] = {&g_41[2][2], &g_41[2][2], &g_41[2][2], &g_41[2][2], &g_41[2][2], &g_41[2][2], &g_41[2][2], &g_41[2][2], &g_41[2][2], &g_41[2][2]};
static int32_t **g_188[3][2] = {{&g_189[1], &g_189[1]}, {&g_189[1], &g_189[1]}, {&g_189[1], &g_189[1]}};
static int32_t g_195 = 1;
static int32_t g_220 = 0;
static uint16_t g_269 = 65529U;
static int16_t g_275[1] = {4};
static int32_t ***g_316 = (void*)0;
static int16_t g_442 = (-7);
static const int32_t g_490 = 0xE7F8A156;
static const int32_t *g_494 = &g_220;
static int32_t g_546 = 0x7A720E3B;
static uint8_t g_582 = 255U;
static uint32_t g_599 = 0xE82E559F;
static int32_t *** const *g_687 = (void*)0;
static int32_t *g_769 = &g_195;
static int32_t *g_929 = &g_31;
static int32_t ****g_1030[9] = {&g_316, (void*)0, &g_316, (void*)0, &g_316, (void*)0, &g_316, (void*)0, &g_316};
static int32_t *****g_1029[6] = {(void*)0, (void*)0, &g_1030[6], (void*)0, (void*)0, &g_1030[6]};
static uint16_t func_29(void);
static int32_t * func_32(int32_t * p_33);
static int32_t * func_48(int8_t p_49, uint16_t p_50);
static int32_t ** func_96(int32_t * p_97, uint32_t p_98, int32_t * p_99);
static int32_t * func_101(uint32_t p_102, uint32_t p_103);
static uint32_t func_104(int8_t p_105, int32_t ** p_106, const int32_t p_107, uint32_t p_108, uint32_t p_109);
static uint8_t func_110(int16_t p_111);
static const int32_t * func_115(int32_t p_116, int32_t ** p_117);
static int32_t ** func_118(int32_t * const * p_119, int32_t * p_120, uint8_t p_121, uint32_t p_122, uint32_t p_123);
static int32_t * func_126(uint8_t p_127);
static uint16_t func_29(void)
{
    int32_t *l_30[6] = {&g_31, &g_31, &g_31, &g_31, &g_31, &g_31};
    int32_t **l_1133 = &g_189[1];
    uint16_t l_1134 = 0xE1C1;
    int i;
    g_31 = (1 < g_3);
    (*l_1133) = func_32(l_30[4]);
    (*g_929) &= (*g_769);
    return l_1134;
}
static int32_t * func_32(int32_t * p_33)
{
    int32_t *l_37 = &g_31;
    int32_t l_948[3];
    const uint8_t l_991 = 246U;
    uint32_t l_1059 = 4294967295U;
    int32_t l_1066[10] = {0x2E4FB035, 1, 0x2E4FB035, 1, 0x2E4FB035, 1, 0x2E4FB035, 1, 0x2E4FB035, 1};
    const int32_t **l_1095 = &g_494;
    const int32_t *** const l_1094 = &l_1095;
    uint32_t l_1127 = 0U;
    int i;
    for (i = 0; i < 3; i++)
        l_948[i] = 0x37656AD3;
    for (g_3 = 0; (g_3 > 0); g_3 = safe_add_func_uint16_t_u_u(g_3, 7))
    {
        int16_t l_36[6][7] = {{0xBA4D, 0x9297, 0xC254, (-1), (-1), 0xC254, 0x9297}, {0xBA4D, 0x9297, 0xC254, (-1), (-1), 0xC254, 0x9297}, {0xBA4D, 0x9297, 0xC254, (-1), (-1), 0xC254, 0x9297}, {0xBA4D, 0x9297, 0xC254, (-1), (-1), 0xC254, 0x9297}, {0xBA4D, 0x9297, 0xC254, (-1), (-1), 0xC254, 0x9297}, {0xBA4D, 0x9297, 0xC254, (-1), (-1), 0xC254, 0x9297}};
        int32_t l_42 = 7;
        int32_t l_43 = 0;
        int32_t ***l_931 = (void*)0;
        int8_t l_943[3][4][4] = {{{0x56, 8, 0x56, 0x0F}, {0x56, 8, 0x56, 0x0F}, {0x56, 8, 0x56, 0x0F}, {0x56, 8, 0x56, 0x0F}}, {{0x56, 8, 0x56, 0x0F}, {0x56, 8, 0x56, 0x0F}, {0x56, 8, 0x56, 0x0F}, {0x56, 8, 0x56, 0x0F}}, {{0x56, 8, 0x56, 0x0F}, {0x56, 8, 0x56, 0x0F}, {0x56, 8, 0x56, 0x0F}, {0x56, 8, 0x56, 0x0F}}};
        int32_t l_963 = 0xA65B2035;
        int32_t l_964 = 0;
        int32_t l_965 = 0x6AD6ABB6;
        int32_t l_967[4];
        int16_t l_972 = 0x3C82;
        uint16_t l_973[7];
        uint32_t l_1036[5] = {4294967295U, 0x3F8D270A, 4294967295U, 0x3F8D270A, 4294967295U};
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_967[i] = 0x47989E0F;
        for (i = 0; i < 7; i++)
            l_973[i] = 0xBABE;
        if (l_36[4][6])
            break;
        if (g_31)
            break;
        (*p_33) = g_3;
        for (g_31 = 5; (g_31 >= 1); g_31 -= 1)
        {
            uint32_t l_44 = 0xC0266D99;
            int32_t ***l_932 = (void*)0;
            int32_t l_947 = 0xE534D9DC;
            int32_t l_952 = (-8);
            int32_t l_958 = 0xB196254B;
            int32_t l_959 = (-6);
            int32_t l_960 = 0x0F948F77;
            int32_t l_961 = 0xBA540384;
            int32_t l_962 = 0x9EABD0A5;
            int32_t l_966 = (-1);
            int32_t l_968 = 0xECB3A1BE;
            int32_t l_969 = 0;
            int32_t l_970 = 0xC87C95AD;
            int32_t l_971 = 0;
            const uint16_t l_988 = 1U;
            int32_t *l_1024 = &l_948[1];
            int32_t *l_1058 = &l_959;
        }
    }
    (*g_769) ^= (*l_37);
    for (g_546 = (-27); (g_546 < (-24)); g_546 = safe_add_func_uint16_t_u_u(g_546, 2))
    {
        int32_t ***l_1098[3];
        uint32_t l_1132 = 0x74817C45;
        int i;
        for (i = 0; i < 3; i++)
            l_1098[i] = (void*)0;
        (*l_37) = (-9);
        if ((safe_sub_func_int8_t_s_s((l_1094 == ((safe_lshift_func_uint16_t_u_s(((__builtin_ffsll((0xD8 & (***l_1094))) , &l_1095) == (void*)0), (**l_1095))) , l_1098[0])), (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(g_269, g_490)), 8)))))
        {
            for (g_195 = 0; g_195 < 9; g_195 += 1)
            {
                g_1030[g_195] = &l_1098[0];
            }
        }
        else
        {
            const int32_t ***l_1105[1][3];
            const int32_t **** const l_1104[9] = {&l_1105[0][1], &l_1105[0][1], &l_1105[0][1], &l_1105[0][1], &l_1105[0][1], &l_1105[0][1], &l_1105[0][1], &l_1105[0][1], &l_1105[0][1]};
            const int32_t **** const *l_1103 = &l_1104[5];
            int32_t l_1118 = 1;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1105[i][j] = &l_1095;
            }
            if ((*p_33))
                break;
            if ((&l_1094 != &l_1098[0]))
            {
                const int32_t **** const l_1107 = (void*)0;
                const int32_t **** const *l_1106 = &l_1107;
                l_1106 = l_1103;
                for (g_3 = 16; (g_3 < (-2)); g_3 = safe_sub_func_int32_t_s_s(g_3, 4))
                {
                    uint16_t l_1110 = 0xC80B;
                    int32_t ***l_1119 = &g_188[1][1];
                    for (g_38 = 7; (g_38 >= 2); g_38 -= 1)
                    {
                        int32_t l_1117[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1117[i] = 0x46A97197;
                        (*p_33) ^= ((***l_1094) & l_1110);
                        (*p_33) = (safe_rshift_func_uint16_t_u_s(((void*)0 == &l_1098[0]), 5));
                        l_1118 = ((((void*)0 != l_1098[0]) > 0x3393ECC9) , ((0x2194 < ((safe_lshift_func_int8_t_s_u((***l_1094), 4)) | (__builtin_clzl(g_3) , (safe_sub_func_int32_t_s_s((l_1117[1] < l_1110), 6U))))) , (*p_33)));
                        (*p_33) = (*p_33);
                    }
                    if ((*p_33))
                        continue;
                    l_1118 ^= (((__builtin_ffs((*p_33)) || ((*p_33) == ((void*)0 != l_1119))) != (((0x4C89 | g_546) != (**l_1095)) == (((safe_sub_func_int8_t_s_s(func_110((g_275[0] >= g_39)), 0x18)) ^ g_546) >= g_220))) >= 0x7F);
                }
            }
            else
            {
                int32_t ****l_1125 = &l_1098[0];
                for (g_582 = (-23); (g_582 < 1); g_582 = safe_add_func_int16_t_s_s(g_582, 7))
                {
                    int32_t ****l_1124[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1124[i] = &l_1098[1];
                    l_1125 = l_1124[0];
                }
            }
        }
        (*g_929) = ((!((-3) > l_1127)) != (safe_lshift_func_uint16_t_u_s(((((g_490 < g_269) && ((safe_rshift_func_int8_t_s_s((***l_1094), 1)) > (((**l_1095) , &l_1095) != l_1098[1]))) , (void*)0) == l_1098[1]), g_195)));
        (*l_37) &= l_1132;
    }
    return p_33;
}
static int32_t * func_48(int8_t p_49, uint16_t p_50)
{
    int16_t l_58 = 0x609E;
    int32_t l_59 = 0x375BB799;
    int32_t l_64 = 1;
    int32_t l_66[9] = {0x7289F16C, 0x7289F16C, 1, 0x7289F16C, 0x7289F16C, 1, 0x7289F16C, 0x7289F16C, 1};
    uint32_t l_69 = 0U;
    uint16_t l_82 = 0x85AB;
    uint32_t l_800 = 0xC6888A9F;
    uint8_t l_803 = 1U;
    uint8_t l_820 = 0x90;
    int32_t l_908 = 0x29CDE193;
    int i;
    if (p_49)
    {
        int32_t l_62 = 0x21D2A6A8;
        int32_t l_63 = 0;
        int32_t l_65 = (-1);
        int32_t l_67 = 0xCF2D0609;
        int32_t l_68 = 0xB093197C;
        uint32_t l_72 = 0x1D8FC8FA;
        int32_t *l_75 = &g_41[1][2];
        int32_t *l_76 = &l_62;
        int32_t *l_77 = &l_63;
        int32_t *l_78 = &l_66[6];
        int32_t *l_79 = (void*)0;
        int32_t *l_80 = &l_64;
        int32_t *l_81[3];
        int i;
        for (i = 0; i < 3; i++)
            l_81[i] = &l_66[6];
        for (p_49 = 0; (p_49 == 26); p_49 = safe_add_func_uint8_t_u_u(p_49, 7))
        {
            int32_t l_57 = 0;
            int32_t l_60 = 0;
            int32_t l_61[10] = {1, 9, 0xF9C6A002, 0xF9C6A002, 9, 1, 9, 0xF9C6A002, 0xF9C6A002, 9};
            int i;
            for (p_50 = (-19); (p_50 <= 17); ++p_50)
            {
                int32_t *l_55 = &g_41[0][4];
                int32_t *l_56[2][10] = {{&g_41[2][2], &g_41[2][2], &g_41[2][2], &g_41[2][2], &g_41[2][2], &g_41[2][2], &g_41[2][2], &g_41[2][2], &g_41[2][2], &g_41[2][2]}, {&g_41[2][2], &g_41[2][2], &g_41[2][2], &g_41[2][2], &g_41[2][2], &g_41[2][2], &g_41[2][2], &g_41[2][2], &g_41[2][2], &g_41[2][2]}};
                int i, j;
                ++l_69;
                ++l_72;
                l_61[5] = 0;
            }
        }
        l_82--;
    }
    else
    {
        uint8_t l_93 = 250U;
        int32_t l_795[9];
        int32_t l_796 = 0x00BF6EB1;
        int32_t l_797 = (-4);
        int32_t l_798 = 0xA0AE6E49;
        int32_t l_799 = 0x86E7BEE5;
        uint32_t l_821[2][8][1] = {{{0xAF39CC65}, {0xAF39CC65}, {0xAF39CC65}, {0xAF39CC65}, {0xAF39CC65}, {0xAF39CC65}, {0xAF39CC65}, {0xAF39CC65}}, {{0xAF39CC65}, {0xAF39CC65}, {0xAF39CC65}, {0xAF39CC65}, {0xAF39CC65}, {0xAF39CC65}, {0xAF39CC65}, {0xAF39CC65}}};
        int32_t * const **l_870 = &g_47;
        int32_t l_881 = 5;
        int32_t l_883 = 0x609123B8;
        int32_t l_884 = 0x9E9A9AC8;
        int32_t l_886 = 0;
        uint16_t l_887 = 0U;
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_795[i] = 0;
lbl_911:
        for (l_69 = 9; (l_69 < 56); ++l_69)
        {
            int32_t l_90 = 0x11FF246F;
            int32_t l_91 = 6;
            int32_t l_92 = 0xB5946A68;
            int32_t **l_811 = &g_769;
            if (p_50)
                break;
            for (l_82 = 0; (l_82 <= 6); ++l_82)
            {
                int32_t *l_89[7][5][7] = {{{&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}}, {{&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}}, {{&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}}, {{&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}}, {{&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}}, {{&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}}, {{&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}, {&g_39, &g_39, &l_66[4], &l_66[6], &l_66[6], &l_66[0], &g_39}}};
                int32_t **l_782 = &l_89[1][3][6];
                int i, j, k;
                ++l_93;
            }
            l_796 &= (safe_mod_func_int8_t_s_s((l_795[3] , (((((-4) > ((+(((l_800 , (-1)) || (safe_rshift_func_int8_t_s_s((p_50 , func_104(l_90, l_811, (safe_lshift_func_int8_t_s_u((g_41[2][2] <= g_599), 4)), p_50, g_269)), 4))) , 0x1A)) <= l_800)) >= 0) != 4294967286U) , 1)), 249U));
        }
        if (((0x8640 < (((safe_add_func_uint32_t_u_u(4294967291U, ((((0U ^ (l_66[6] && p_50)) > l_821[1][6][0]) && g_220) , g_31))) ^ 8) ^ 0x7E)) , 1))
        {
            uint32_t l_825[2];
            int i;
            for (i = 0; i < 2; i++)
                l_825[i] = 0U;
            if (p_49)
            {
                int32_t *l_822[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_822[i] = &g_31;
                return l_822[3];
            }
            else
            {
                l_825[1] = (safe_mod_func_int32_t_s_s((1U == (func_110(g_275[0]) <= p_50)), 1U));
            }
        }
        else
        {
            int32_t **l_842 = &g_189[3];
            int32_t l_872 = 0x36731EF1;
            int32_t l_877 = 0xE6B81925;
            int32_t l_880[8] = {0, 0x86CD6F28, 0, 0x86CD6F28, 0, 0x86CD6F28, 0, 0x86CD6F28};
            int i;
            for (g_442 = 0; (g_442 > 15); ++g_442)
            {
                for (g_220 = 0; (g_220 != (-7)); g_220--)
                {
                    uint8_t l_841 = 0xCA;
                    int32_t l_843 = (-1);
                    for (l_82 = 0; (l_82 == 27); l_82 = safe_add_func_int8_t_s_s(l_82, 1))
                    {
                        l_843 |= (safe_add_func_int32_t_s_s((((((g_275[0] != (safe_sub_func_uint8_t_u_u((g_195 != g_220), p_50))) && ((safe_lshift_func_int8_t_s_u(p_50, (safe_mod_func_int16_t_s_s(1, l_795[0])))) || (+l_841))) , l_842) == (void*)0) , p_49), g_546));
                    }
                    l_843 = (1U | (safe_rshift_func_int16_t_s_u(__builtin_ctzll((g_275[0] != (-1))), 15)));
                }
            }
            for (l_803 = 0; (l_803 > 16); l_803++)
            {
                int32_t l_852[3];
                int32_t *l_860 = &g_38;
                int32_t ***l_871 = &g_188[1][0];
                int32_t l_876 = 0xBE288A53;
                int32_t l_878 = 0xB34F2246;
                int32_t l_879 = (-5);
                int32_t l_882 = 0x1A54580F;
                int32_t l_885 = 0xF4C61730;
                int i;
                for (i = 0; i < 3; i++)
                    l_852[i] = 0x00033BBD;
                for (l_798 = 0; (l_798 <= 23); ++l_798)
                {
                    int32_t *l_850 = &l_64;
                    int32_t *l_851[9] = {&g_195, &l_796, &g_195, &l_796, &g_195, &l_796, &g_195, &l_796, &g_195};
                    uint16_t l_853 = 0xFBE0;
                    int i;
                    l_853++;
                }
                for (l_93 = (-9); (l_93 != 57); l_93++)
                {
                    const uint32_t l_858 = 4294967295U;
                    int32_t *l_859 = &l_66[1];
                    (*l_859) = (p_50 , l_858);
                    return l_860;
                }
                if (((((safe_rshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_u((p_50 | g_38), 5)) >= ((((((safe_rshift_func_int16_t_s_u((g_269 , (+(*l_860))), 1)) , (&l_66[2] != l_860)) < p_50) && (safe_mod_func_uint8_t_u_u(255U, (*l_860)))) , l_870) != l_871)), p_49)) > g_220) | 3U) ^ p_50))
                {
                    const uint32_t l_873[9] = {4294967286U, 4294967286U, 4294967286U, 4294967286U, 4294967286U, 4294967286U, 4294967286U, 4294967286U, 4294967286U};
                    int i;
                    l_872 &= (l_66[0] , 4);
                    if (l_873[8])
                        break;
                }
                else
                {
                    int32_t *l_874 = &l_64;
                    int32_t *l_875[9][9] = {{&l_59, &g_195, &l_64, &l_64, &g_195, &l_59, (void*)0, &g_41[2][2], &l_798}, {&l_59, &g_195, &l_64, &l_64, &g_195, &l_59, (void*)0, &g_41[2][2], &l_798}, {&l_59, &g_195, &l_64, &l_64, &g_195, &l_59, (void*)0, &g_41[2][2], &l_798}, {&l_59, &g_195, &l_64, &l_64, &g_195, &l_59, (void*)0, &g_41[2][2], &l_798}, {&l_59, &g_195, &l_64, &l_64, &g_195, &l_59, (void*)0, &g_41[2][2], &l_798}, {&l_59, &g_195, &l_64, &l_64, &g_195, &l_59, (void*)0, &g_41[2][2], &l_798}, {&l_59, &g_195, &l_64, &l_64, &g_195, &l_59, (void*)0, &g_41[2][2], &l_798}, {&l_59, &g_195, &l_64, &l_64, &g_195, &l_59, (void*)0, &g_41[2][2], &l_798}, {&l_59, &g_195, &l_64, &l_64, &g_195, &l_59, (void*)0, &g_41[2][2], &l_798}};
                    int i, j;
                    l_887++;
                    for (l_885 = (-20); (l_885 >= 4); l_885 = safe_add_func_uint8_t_u_u(l_885, 1))
                    {
                        uint32_t l_892[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_892[i] = 0x59148F49;
                        (*l_874) &= l_892[0];
                        (**l_871) = &l_64;
                    }
                    for (l_799 = 0; (l_799 < (-16)); l_799--)
                    {
                        const int32_t l_907 = 0x307D12F1;
                        l_880[2] = (safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(0, __builtin_ffs(func_110(g_38)))), p_49));
                        l_908 = ((((safe_mod_func_uint32_t_u_u(p_50, (*l_860))) != __builtin_ffs((g_39 || (g_31 && (safe_add_func_uint16_t_u_u(((p_50 >= (safe_lshift_func_int8_t_s_s(p_50, 4))) <= (p_49 > l_881)), (safe_sub_func_uint8_t_u_u((((((l_907 < p_50) >= l_907) < p_50) && 0x9CB8) >= l_907), 0xB3)))))))) != (-6)) ^ p_50);
                    }
                    if (p_49)
                        continue;
                }
            }
        }
        for (l_798 = (-18); (l_798 <= 25); ++l_798)
        {
            uint8_t l_926 = 0x45;
            if (p_49)
                break;
            if (g_442)
                goto lbl_911;
            if (l_66[6])
            {
                int32_t *l_912 = &g_41[2][2];
                return l_912;
            }
            else
            {
                for (l_887 = 0; (l_887 != 36); l_887 = safe_add_func_uint16_t_u_u(l_887, 6))
                {
                    int32_t *l_915 = &l_64;
                    int32_t *l_916 = &l_64;
                    int32_t *l_917 = &g_220;
                    int32_t *l_918 = &l_881;
                    int32_t *l_919 = &l_59;
                    int32_t *l_920 = &l_883;
                    int32_t *l_921 = &l_66[4];
                    int32_t *l_922 = &l_796;
                    int32_t *l_923 = (void*)0;
                    int32_t *l_924 = (void*)0;
                    int32_t *l_925[1][9][7] = {{{&l_799, &l_799, &l_66[6], &l_884, &l_799, &l_66[6], &l_797}, {&l_799, &l_799, &l_66[6], &l_884, &l_799, &l_66[6], &l_797}, {&l_799, &l_799, &l_66[6], &l_884, &l_799, &l_66[6], &l_797}, {&l_799, &l_799, &l_66[6], &l_884, &l_799, &l_66[6], &l_797}, {&l_799, &l_799, &l_66[6], &l_884, &l_799, &l_66[6], &l_797}, {&l_799, &l_799, &l_66[6], &l_884, &l_799, &l_66[6], &l_797}, {&l_799, &l_799, &l_66[6], &l_884, &l_799, &l_66[6], &l_797}, {&l_799, &l_799, &l_66[6], &l_884, &l_799, &l_66[6], &l_797}, {&l_799, &l_799, &l_66[6], &l_884, &l_799, &l_66[6], &l_797}}};
                    int i, j, k;
                    --l_926;
                    if (p_49)
                        break;
                }
            }
        }
    }
    return g_929;
}
static int32_t ** func_96(int32_t * p_97, uint32_t p_98, int32_t * p_99)
{
    int32_t l_773[7];
    int32_t l_774[7];
    int32_t **l_781 = (void*)0;
    int i;
    for (i = 0; i < 7; i++)
        l_773[i] = 0x4FD0B508;
    for (i = 0; i < 7; i++)
        l_774[i] = (-9);
    for (g_269 = 0; (g_269 != 45); g_269 = safe_add_func_int8_t_s_s(g_269, 9))
    {
        int32_t *l_775 = &l_774[0];
        int32_t *l_776 = &l_774[1];
        int32_t *l_777[5][7][7] = {{{(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}}, {{(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}}, {{(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}}, {{(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}}, {{(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}, {(void*)0, (void*)0, &g_38, (void*)0, &g_195, &l_774[0], &l_774[4]}}};
        uint16_t l_778[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_778[i] = 0x47D6;
        l_778[0]--;
        return l_781;
    }
    (*p_97) |= __builtin_clzll((p_98 , g_38));
    p_97 = p_97;
    return l_781;
}
static int32_t * func_101(uint32_t p_102, uint32_t p_103)
{
    int32_t l_495 = 0;
    int32_t **l_496 = &g_189[2];
    int32_t l_537[2];
    uint16_t l_623 = 0x9CFE;
    const int32_t *l_646 = (void*)0;
    int32_t l_693[8][1] = {{(-5)}, {(-5)}, {(-5)}, {(-5)}, {(-5)}, {(-5)}, {(-5)}, {(-5)}};
    uint32_t l_754 = 0x111EBBB1;
    const int32_t *l_765 = &l_537[1];
    int i, j;
    for (i = 0; i < 2; i++)
        l_537[i] = 0xDFF2831B;
lbl_694:
    (*l_496) = func_126(l_495);
    for (g_220 = (-15); (g_220 != 9); g_220 = safe_add_func_int16_t_s_s(g_220, 1))
    {
        int16_t l_499 = (-4);
        int32_t *l_538 = &g_39;
        int32_t l_547[4][9] = {{0, 0xBBEE6B1F, (-10), (-10), 0xBBEE6B1F, 0, 0xBBEE6B1F, (-10), (-10)}, {0, 0xBBEE6B1F, (-10), (-10), 0xBBEE6B1F, 0, 0xBBEE6B1F, (-10), (-10)}, {0, 0xBBEE6B1F, (-10), (-10), 0xBBEE6B1F, 0, 0xBBEE6B1F, (-10), (-10)}, {0, 0xBBEE6B1F, (-10), (-10), 0xBBEE6B1F, 0, 0xBBEE6B1F, (-10), (-10)}};
        uint32_t l_567 = 0x298A637A;
        uint16_t l_570 = 65534U;
        const int32_t ***l_584 = (void*)0;
        int32_t l_622 = 0x88ED4EDE;
        uint8_t l_714 = 0U;
        uint32_t l_738 = 0xF539AC5C;
        int32_t *l_770 = &g_31;
        int i, j;
        if ((((g_31 >= l_499) < (((safe_lshift_func_uint8_t_u_u(0U, (safe_sub_func_uint32_t_u_u((p_103 < (((((p_103 || p_103) || p_103) || p_102) ^ ((((-7) != g_39) > 0) && 0xF440B755)) == l_495)), l_499)))) && p_102) == (-8))) > p_102))
        {
            int32_t ***l_508 = &g_188[1][0];
            int32_t l_540 = 6;
            int16_t l_551 = 7;
            int32_t l_555 = (-8);
            int32_t l_564 = 0x50E06EF1;
            int32_t l_565 = (-4);
            uint32_t l_591 = 0xC2655C96;
            int32_t l_615 = (-1);
            int32_t l_616 = 0x466BED02;
            int32_t l_617 = 1;
            int32_t l_618 = (-1);
            int32_t l_619 = 0xED3C673B;
            int32_t l_620 = 4;
            int32_t l_621 = 0;
            if ((l_499 , 0xC12A2641))
            {
                int8_t l_511[9][1][7] = {{{1, 0, 1, 1, 0, 1, 0x75}}, {{1, 0, 1, 1, 0, 1, 0x75}}, {{1, 0, 1, 1, 0, 1, 0x75}}, {{1, 0, 1, 1, 0, 1, 0x75}}, {{1, 0, 1, 1, 0, 1, 0x75}}, {{1, 0, 1, 1, 0, 1, 0x75}}, {{1, 0, 1, 1, 0, 1, 0x75}}, {{1, 0, 1, 1, 0, 1, 0x75}}, {{1, 0, 1, 1, 0, 1, 0x75}}};
                int32_t * const *l_515 = (void*)0;
                int i, j, k;
                for (p_102 = 0; (p_102 <= 2); p_102 += 1)
                {
                    int32_t **l_514[2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_514[i] = &g_189[0];
                    g_41[p_102][(p_102 + 5)] = g_41[p_102][(p_102 + 5)];
                    g_41[p_102][(p_102 + 3)] = (((g_41[p_102][(p_102 + 2)] > g_41[2][2]) == (((1U != (__builtin_ctzl(__builtin_ffsll((g_490 > (((-1) >= (safe_mod_func_int16_t_s_s((l_508 != (g_220 , l_508)), (safe_add_func_uint16_t_u_u(l_511[3][0][6], p_103))))) , g_38)))) >= l_495)) , &g_188[2][1]) != &g_47)) >= 0xC78D);
                    for (g_442 = 2; (g_442 >= 0); g_442 -= 1)
                    {
                        int32_t *l_518 = &g_41[p_102][(p_102 + 5)];
                        int i;
                        g_189[(g_442 + 4)] = func_126((__builtin_ctz((safe_rshift_func_uint16_t_u_u(((l_514[0] == (p_103 , ((p_102 == g_220) , func_118(l_515, func_126((((__builtin_ctzll((g_3 != (((g_275[0] > (p_102 > (safe_rshift_func_int8_t_s_s(0x00, l_499)))) , (void*)0) == l_518))) >= g_490) >= 0x1398) , (*l_518))), p_103, p_103, g_39)))) > g_275[0]), p_102))) | p_102));
                        (**l_508) = (((p_103 == (safe_rshift_func_uint8_t_u_u(p_103, ((-2) ^ ((safe_lshift_func_int8_t_s_u(p_103, (safe_add_func_int8_t_s_s(((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(g_41[0][4], (g_3 < p_102))), __builtin_ctz(((safe_sub_func_uint8_t_u_u(((p_103 || ((0 || p_102) , (-6))) == p_102), (-9))) != p_102)))) & g_41[0][2]) < g_3) != g_195), l_499)), 0U)) , g_220), g_195)))) != p_102))))) , l_537[1]) , l_538);
                    }
                    return (*l_496);
                }
                if ((*l_538))
                    break;
                for (g_442 = 1; (g_442 >= 0); g_442 -= 1)
                {
                    const int32_t *l_539 = &l_537[0];
                    int i, j;
                    l_539 = func_115(g_41[g_442][(g_442 + 4)], (g_31 , &l_538));
                    for (g_195 = 1; (g_195 >= 0); g_195 -= 1)
                    {
                        return (*l_496);
                    }
                    (*l_496) = l_538;
                }
            }
            else
            {
                return l_538;
            }
            if (p_103)
                break;
            if (l_540)
            {
                uint8_t l_541 = 0xE7;
                l_547[2][0] &= (l_541 != (safe_rshift_func_uint8_t_u_s((g_41[2][2] || ((safe_mod_func_uint32_t_u_u(((func_110((((0x1BB7A6E4 <= (0x17E0 > p_103)) < g_195) != g_442)) , (p_102 == l_541)) && g_546), l_499)) ^ g_39)), g_31)));
            }
            else
            {
                int32_t l_552 = 0x418FCF84;
                int32_t l_554 = 0x9A45ADFE;
                int32_t l_557 = 1;
                int32_t l_558 = 0xF5073453;
                int32_t l_559 = (-6);
                int32_t l_563 = 0x7E366726;
                uint32_t l_579 = 0xDD3D5CEF;
                int32_t **** const l_598 = &g_316;
                int32_t *l_602 = &l_558;
                int32_t *l_603 = &g_41[2][4];
                int32_t *l_604 = &l_495;
                int32_t *l_605 = &l_559;
                int32_t *l_606 = (void*)0;
                int32_t *l_607 = &l_537[1];
                int32_t *l_608 = &l_547[1][1];
                int32_t *l_609 = &l_547[1][8];
                int32_t *l_610 = &l_552;
                int32_t *l_611 = &l_552;
                int32_t *l_612 = &l_563;
                int32_t *l_613 = &l_563;
                int32_t *l_614[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_614[i] = &l_547[2][0];
                for (p_102 = 0; (p_102 <= 9); p_102 += 1)
                {
                    uint32_t l_548 = 0U;
                    int32_t l_553 = 0x53B13124;
                    int32_t l_556 = 0xC7EC1F56;
                    int32_t l_560 = 0x4C9385F7;
                    int32_t l_561 = 0x805C9840;
                    int32_t l_562 = 0xD42B3CA0;
                    int8_t l_566[1][4];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_566[i][j] = 0;
                    }
                    l_547[2][1] ^= l_548;
                    for (g_442 = 8; (g_442 >= 0); g_442 -= 1)
                    {
                        int32_t *l_549 = &l_547[1][2];
                        int32_t *l_550[7][2] = {{&g_41[2][2], &l_547[2][0]}, {&g_41[2][2], &l_547[2][0]}, {&g_41[2][2], &l_547[2][0]}, {&g_41[2][2], &l_547[2][0]}, {&g_41[2][2], &l_547[2][0]}, {&g_41[2][2], &l_547[2][0]}, {&g_41[2][2], &l_547[2][0]}};
                        int i, j;
                        l_495 |= p_103;
                        l_567++;
                        (*l_549) = l_570;
                    }
                }
                for (l_567 = 3; (l_567 <= 9); l_567 += 1)
                {
                    int32_t **l_572 = &g_189[1];
                    int32_t *l_573 = &l_537[1];
                    int32_t ****l_574 = &l_508;
                    int32_t l_587 = (-7);
                    int32_t l_588 = 1;
                    int32_t l_589 = 0x17C08BC4;
                    int32_t l_590[4][8] = {{0x0397E46F, 1, 0x72AE1687, 1, 0x0397E46F, 0xE618E4D8, 0x0397E46F, 1}, {0x0397E46F, 1, 0x72AE1687, 1, 0x0397E46F, 0xE618E4D8, 0x0397E46F, 1}, {0x0397E46F, 1, 0x72AE1687, 1, 0x0397E46F, 0xE618E4D8, 0x0397E46F, 1}, {0x0397E46F, 1, 0x72AE1687, 1, 0x0397E46F, 0xE618E4D8, 0x0397E46F, 1}};
                    int i, j;
                    (*l_573) |= (safe_unary_minus_func_int32_t_s((p_102 != func_110((l_572 != (g_275[0] , &l_538))))));
                    for (l_559 = 0; (l_559 <= 1); l_559 += 1)
                    {
                        int32_t ****l_575 = &l_508;
                        l_575 = l_574;
                    }
                    if (((((safe_sub_func_uint16_t_u_u((0xEA8F78DC & p_102), ((~p_102) && l_579))) < p_103) | ((safe_rshift_func_int8_t_s_s((p_102 || 0x6705BC0D), (g_31 | 0x99))) != g_582)) | p_102))
                    {
                        uint8_t l_583 = 1U;
                        int32_t *l_585 = &l_557;
                        int32_t *l_586[4][2][8] = {{{&g_39, &l_555, &g_39, &l_495, &l_537[1], &l_565, &g_38, &l_537[1]}, {&g_39, &l_555, &g_39, &l_495, &l_537[1], &l_565, &g_38, &l_537[1]}}, {{&g_39, &l_555, &g_39, &l_495, &l_537[1], &l_565, &g_38, &l_537[1]}, {&g_39, &l_555, &g_39, &l_495, &l_537[1], &l_565, &g_38, &l_537[1]}}, {{&g_39, &l_555, &g_39, &l_495, &l_537[1], &l_565, &g_38, &l_537[1]}, {&g_39, &l_555, &g_39, &l_495, &l_537[1], &l_565, &g_38, &l_537[1]}}, {{&g_39, &l_555, &g_39, &l_495, &l_537[1], &l_565, &g_38, &l_537[1]}, {&g_39, &l_555, &g_39, &l_495, &l_537[1], &l_565, &g_38, &l_537[1]}}};
                        int i, j, k;
                        l_583 = (p_102 || (p_102 != p_102));
                        (*l_573) = (func_110(p_102) , (l_584 != &g_47));
                        --l_591;
                        (*l_585) &= (safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((-1), 7U)), 7));
                    }
                    else
                    {
                        l_495 = (((void*)0 != l_598) ^ (*l_573));
                        --g_599;
                        (*l_573) = p_103;
                    }
                }
                ++l_623;
                (*l_605) = p_103;
            }
        }
        else
        {
            int16_t l_626[3];
            int32_t *l_628 = &l_547[1][3];
            int32_t l_669[8][7][2] = {{{0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}}, {{0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}}, {{0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}}, {{0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}}, {{0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}}, {{0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}}, {{0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}}, {{0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}, {0x10EE8567, 0}}};
            int16_t l_701 = 1;
            int32_t l_752 = 0xD81B2E04;
            int16_t l_762 = 2;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_626[i] = (-1);
            l_626[1] |= p_103;
            for (g_582 = 0; (g_582 <= 0); g_582 += 1)
            {
                int32_t ***l_627[6][8] = {{&g_188[1][0], &g_188[2][0], &g_188[1][0], &g_188[2][0], &g_188[1][0], &g_188[2][0], &g_188[1][0], &g_188[2][0]}, {&g_188[1][0], &g_188[2][0], &g_188[1][0], &g_188[2][0], &g_188[1][0], &g_188[2][0], &g_188[1][0], &g_188[2][0]}, {&g_188[1][0], &g_188[2][0], &g_188[1][0], &g_188[2][0], &g_188[1][0], &g_188[2][0], &g_188[1][0], &g_188[2][0]}, {&g_188[1][0], &g_188[2][0], &g_188[1][0], &g_188[2][0], &g_188[1][0], &g_188[2][0], &g_188[1][0], &g_188[2][0]}, {&g_188[1][0], &g_188[2][0], &g_188[1][0], &g_188[2][0], &g_188[1][0], &g_188[2][0], &g_188[1][0], &g_188[2][0]}, {&g_188[1][0], &g_188[2][0], &g_188[1][0], &g_188[2][0], &g_188[1][0], &g_188[2][0], &g_188[1][0], &g_188[2][0]}};
                int i, j;
                if (g_275[g_582])
                    break;
                if ((l_627[3][5] != (((*l_496) == l_628) , &g_188[2][0])))
                {
                    int32_t l_629 = 0xF6FBA62F;
                    const int32_t ****l_638 = &l_584;
                    uint8_t l_645 = 0x51;
                    for (g_546 = 0; (g_546 >= 0); g_546 -= 1)
                    {
                        int i, j;
                        l_547[(g_546 + 1)][(g_546 + 3)] = p_102;
                        l_628 = func_126(g_275[0]);
                        if (l_629)
                            break;
                        (*l_628) = ((0 <= (safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((void*)0 == l_638), p_103)), 12)), g_195)), (g_275[0] , (((&l_547[1][6] != ((p_103 && (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(g_269, (*l_538))), p_103))) , (*l_496))) || 0U) ^ g_41[2][2]))))) != 0x82);
                    }
                    (*l_496) = (*l_496);
                    l_646 = func_115((func_110((g_599 >= ((p_103 , p_103) <= (safe_mod_func_int8_t_s_s((((g_490 < ((l_645 <= (((*l_496) != &l_547[2][5]) , (0x3EC92004 <= (p_102 || p_103)))) > p_102)) != p_103) && g_275[0]), p_103))))) , (*l_628)), g_188[1][0]);
                    (*l_628) = (safe_lshift_func_uint8_t_u_s((g_31 && 0xE6), (safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u((1U == g_490), (func_110((safe_rshift_func_int8_t_s_u((((p_102 & p_102) > (0 >= (__builtin_ctzl(p_103) | 0))) , 0xB2), 0))) >= 247U))), 0x23885C91))));
                }
                else
                {
                    uint32_t l_655[9] = {4294967291U, 4294967295U, 4294967291U, 4294967295U, 4294967291U, 4294967295U, 4294967291U, 4294967295U, 4294967291U};
                    int32_t **** const l_668 = &g_316;
                    int i;
                    for (g_195 = 0; (g_195 >= 0); g_195 -= 1)
                    {
                        int32_t ****l_664 = &l_627[0][4];
                        (*l_628) = l_655[5];
                        l_669[1][3][1] &= (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(0xD9, (safe_rshift_func_uint16_t_u_s((l_664 != &g_316), 14)))), 15)), ((&l_646 == ((+(safe_rshift_func_uint16_t_u_u((l_668 != (void*)0), p_102))) , func_118((**l_664), &l_547[2][0], g_269, g_31, g_490))) > 0x2354B884)));
                        (*l_628) = (((safe_add_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s((((*l_538) <= g_3) != (p_103 || ((*l_538) | p_102))), (((p_103 , (((0U != (*l_628)) & 0) >= 0x933F)) | g_275[0]) != g_3))) ^ g_490) , p_102), 0xF8EA)) ^ g_220) != p_102);
                    }
                    return (*l_496);
                }
                if ((*l_628))
                    continue;
            }
            for (l_499 = 0; (l_499 != 24); l_499++)
            {
                uint8_t l_684 = 6U;
                const int32_t **l_692 = &g_494;
                int32_t l_708 = 0xC26BBEDE;
                int32_t l_710 = (-5);
                int32_t l_711 = (-9);
                int32_t l_712 = 5;
                int32_t l_713 = (-1);
                int32_t * const *l_721 = &g_189[6];
                uint8_t l_730 = 246U;
                int32_t l_736 = 0x421AD925;
                uint8_t l_737 = 255U;
                int32_t l_745 = 0x4A5DC99F;
                int32_t l_746[4][9][5] = {{{1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}}, {{1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}}, {{1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}}, {{1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}, {1, 0x4667EFD5, 1, 0x4667EFD5, 1}}};
                int32_t l_753 = 0x005E7C37;
                int32_t *l_768 = &l_693[1][0];
                int i, j, k;
                if (((safe_rshift_func_uint8_t_u_u((((*l_628) , &g_316) != (g_599 , &g_316)), 3)) <= (((safe_mod_func_int16_t_s_s(g_41[1][2], (safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((l_684 | (safe_lshift_func_int16_t_s_u((p_102 <= (p_103 < ((g_31 > p_103) | 0x6B))), p_103))), 0)) >= 3U), g_31)))) ^ g_41[2][2]) || (*l_538))))
                {
                    uint32_t l_689 = 4294967291U;
                    l_693[1][0] |= ((*l_496) == (((g_687 != &g_316) < ((!(((l_689 <= (((safe_rshift_func_int8_t_s_s(((p_103 && ((*l_538) && (l_692 == (void*)0))) < (*l_628)), g_546)) || 0x24D71C2B) || p_102)) , 0x91106CDD) , p_103)) != 0xE1)) , (void*)0));
                }
                else
                {
                    int32_t *l_702 = &l_547[2][0];
                    int32_t *l_703 = &g_41[0][2];
                    int32_t *l_704 = &l_669[4][2][0];
                    int32_t *l_705 = &g_41[2][2];
                    int32_t *l_706 = &l_547[2][0];
                    int32_t *l_707[2];
                    int8_t l_709 = 6;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_707[i] = &l_537[1];
                    if (g_220)
                        goto lbl_694;
                    for (l_570 = 3; (l_570 <= 9); l_570 += 1)
                    {
                        int32_t ***l_695 = &g_188[1][0];
                        int i;
                        l_701 |= (((g_582 , l_695) == ((((p_103 < 0x65) == (&g_189[l_570] == &g_189[l_570])) | ((p_102 | ((*l_628) >= (safe_lshift_func_int16_t_s_u((~(((safe_lshift_func_int16_t_s_s(g_195, g_41[2][2])) == p_102) , 0xFD)), g_490)))) & 0x46F2BA09)) , (void*)0)) > p_103);
                        (*l_628) = p_103;
                    }
                    ++l_714;
                }
                if (p_102)
                {
                    uint16_t l_722 = 65533U;
                    int32_t l_741 = 0x24C0B5E3;
                    int32_t l_742 = 7;
                    int32_t l_743 = 0x0697C6C4;
                    int32_t l_744 = 0xE194263E;
                    int32_t l_747 = 0x984694EA;
                    int8_t l_748 = 4;
                    int32_t l_749 = (-1);
                    int32_t l_750 = 0x6D127881;
                    int32_t l_751[1][6];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_751[i][j] = (-4);
                    }
                    if ((safe_rshift_func_int16_t_s_s(((1U ^ (p_103 && g_490)) && (((((0x7190 != (safe_lshift_func_uint8_t_u_s(p_103, 1))) , (void*)0) == (g_269 , (p_103 , func_118(l_721, &l_669[2][5][0], l_722, g_490, (*l_628))))) != g_41[2][2]) ^ g_582)), 11)))
                    {
                        uint8_t l_725[8] = {0xC3, 5U, 0xC3, 5U, 0xC3, 5U, 0xC3, 5U};
                        int i;
                        (*l_628) ^= (g_490 || g_275[0]);
                        l_737 ^= (safe_lshift_func_uint8_t_u_s(l_725[6], (safe_add_func_int8_t_s_s(((((safe_sub_func_int32_t_s_s((l_730 , p_103), (((p_102 > ((~__builtin_popcountl((safe_sub_func_uint32_t_u_u(l_722, ((!(!((p_102 > g_31) | ((*l_628) > (g_195 ^ (*l_628)))))) && l_736))))) , l_725[5])) > p_102) , 9))) , (void*)0) == (void*)0) >= (*l_628)), 0x56))));
                        l_738 = (p_102 & l_722);
                    }
                    else
                    {
                        (*l_692) = func_115(p_103, &l_538);
                        if (p_102)
                            break;
                        l_628 = func_126(g_195);
                    }
                    if (((4294967292U < p_103) >= p_102))
                    {
                        if (p_103)
                            break;
                    }
                    else
                    {
                        int32_t *l_739 = &l_713;
                        int32_t *l_740[1];
                        int32_t *l_766[10] = {&l_711, &l_711, (void*)0, &l_711, &l_711, (void*)0, &l_711, &l_711, (void*)0, &l_711};
                        int i;
                        for (i = 0; i < 1; i++)
                            l_740[i] = (void*)0;
                        l_754--;
                        (*l_496) = (((safe_rshift_func_int8_t_s_s(g_38, (safe_unary_minus_func_uint32_t_u(((((((safe_rshift_func_uint8_t_u_s((*l_739), ((void*)0 == (*l_496)))) <= l_762) && ((3U == ((((((&l_646 == ((safe_sub_func_uint32_t_u_u((p_102 == (((void*)0 == l_765) || p_103)), p_103)) , (void*)0)) || p_103) , (-1)) && 65535U) > (*l_765)) , p_102)) || (*l_739))) || 0x79447F18) <= 0x5C) >= 1U))))) | (*l_628)) , l_766[3]);
                        l_747 |= 0xDDFCCF46;
                        (*l_692) = func_115((p_102 < p_102), &l_739);
                    }
                }
                else
                {
                    int32_t *l_767 = &l_736;
                    return g_769;
                }
                return l_770;
            }
            (*l_496) = (*l_496);
        }
    }
    return (*l_496);
}
static uint32_t func_104(int8_t p_105, int32_t ** p_106, const int32_t p_107, uint32_t p_108, uint32_t p_109)
{
    int32_t *l_363 = &g_41[2][2];
    int32_t *l_364 = &g_41[0][6];
    int32_t *l_365 = &g_195;
    int32_t *l_366 = &g_195;
    int32_t *l_367[10][6] = {{&g_41[1][4], &g_41[2][2], (void*)0, &g_39, &g_41[2][2], &g_195}, {&g_41[1][4], &g_41[2][2], (void*)0, &g_39, &g_41[2][2], &g_195}, {&g_41[1][4], &g_41[2][2], (void*)0, &g_39, &g_41[2][2], &g_195}, {&g_41[1][4], &g_41[2][2], (void*)0, &g_39, &g_41[2][2], &g_195}, {&g_41[1][4], &g_41[2][2], (void*)0, &g_39, &g_41[2][2], &g_195}, {&g_41[1][4], &g_41[2][2], (void*)0, &g_39, &g_41[2][2], &g_195}, {&g_41[1][4], &g_41[2][2], (void*)0, &g_39, &g_41[2][2], &g_195}, {&g_41[1][4], &g_41[2][2], (void*)0, &g_39, &g_41[2][2], &g_195}, {&g_41[1][4], &g_41[2][2], (void*)0, &g_39, &g_41[2][2], &g_195}, {&g_41[1][4], &g_41[2][2], (void*)0, &g_39, &g_41[2][2], &g_195}};
    uint16_t l_368[8] = {2U, 65530U, 2U, 65530U, 2U, 65530U, 2U, 65530U};
    int32_t ***l_376[3][4] = {{(void*)0, (void*)0, &g_188[1][0], (void*)0}, {(void*)0, (void*)0, &g_188[1][0], (void*)0}, {(void*)0, (void*)0, &g_188[1][0], (void*)0}};
    uint32_t l_387 = 4294967290U;
    uint32_t l_405 = 0xE5FF07B8;
    uint32_t l_430 = 0x3D52B50D;
    int i, j;
    l_368[0]++;
    (*l_365) = ((__builtin_ffsll((safe_rshift_func_int16_t_s_s(p_107, 1))) == (p_109 , ((*l_366) ^ (*l_366)))) <= (&p_106 != &p_106));
    if ((*l_366))
    {
        int16_t l_373 = 0x462E;
        int32_t * const *l_385 = &l_367[0][1];
        uint16_t l_404 = 0xCD95;
        (*l_365) ^= ((*l_364) <= ((l_373 , &g_47) != &p_106));
        if (l_373)
        {
            int32_t l_383 = 0xB1B08B26;
            int32_t ** const l_384 = &l_363;
            int32_t l_386[2];
            uint32_t l_390 = 0U;
            int i;
            for (i = 0; i < 2; i++)
                l_386[i] = 1;
            (**l_384) = (((((safe_rshift_func_int8_t_s_u(0xB5, 7)) | (0U | (((void*)0 != l_376[2][3]) , func_110((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((((safe_add_func_int32_t_s_s((((__builtin_bswap32(l_383) && (*l_366)) , ((&g_189[6] != l_384) , g_31)) && 0xF213), p_107)) , (void*)0) != l_385), p_108)), p_105)))))) == (-1)) > p_105) || 1U);
            ++l_387;
            l_390--;
            (*l_384) = (*l_385);
        }
        else
        {
            int32_t *l_399 = &g_41[2][2];
            (*l_363) = ((safe_rshift_func_uint16_t_u_u(g_275[0], 6)) | ((safe_add_func_int8_t_s_s(((p_109 && (*l_364)) != ((((safe_sub_func_uint32_t_u_u(((void*)0 == l_399), (safe_mod_func_int8_t_s_s((((((p_105 > p_105) ^ (g_31 != (safe_sub_func_int16_t_s_s(g_275[0], l_404)))) | p_107) != p_107) ^ (-3)), g_220)))) >= l_405) , (void*)0) == p_106)), 0x6E)) ^ (*l_399)));
        }
        for (p_109 = 26; (p_109 >= 48); p_109 = safe_add_func_uint8_t_u_u(p_109, 8))
        {
            int32_t l_411 = 0x0B57C875;
            uint16_t l_418 = 1U;
            (*l_366) |= (__builtin_ctzl(p_108) , (!((safe_sub_func_uint32_t_u_u((g_31 >= (l_411 > __builtin_bswap64(((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((safe_add_func_int16_t_s_s(((l_418 < (safe_mod_func_int32_t_s_s((g_31 > (((safe_rshift_func_uint16_t_u_u(g_3, (safe_add_func_int8_t_s_s(g_38, (g_31 == l_404))))) || g_39) , p_108)), (-6)))) >= 0xD908), (-9))) && (-1)) < l_404), p_105)), g_39)) , g_41[2][1])))), l_418)) != p_107)));
            if (p_105)
                break;
        }
    }
    else
    {
        int32_t * const l_427 = (void*)0;
        int32_t *l_428 = &g_195;
        int32_t l_468 = (-7);
        int32_t l_470 = (-6);
        int32_t l_471 = 0;
        int32_t l_472 = 0xA7E8C4BE;
        int32_t l_475 = 2;
        uint32_t l_476 = 0x242D2264;
        const int32_t **l_493 = (void*)0;
        (*l_366) = (safe_add_func_int16_t_s_s(0, (&g_188[1][0] != (void*)0)));
        l_428 = l_427;
        if (p_105)
        {
            int16_t l_429 = 1;
            l_430++;
            for (l_430 = 27; (l_430 >= 45); l_430 = safe_add_func_int16_t_s_s(l_430, 8))
            {
                int32_t *l_435 = &g_38;
                (*p_106) = l_435;
                (*l_363) = ((0x9BF6 >= (safe_add_func_uint8_t_u_u(func_110(g_195), (((void*)0 == &p_106) | (((safe_rshift_func_uint8_t_u_s(p_109, 4)) > (((safe_sub_func_int16_t_s_s(((p_107 , (*l_435)) , (0x90C7 < g_442)), (*l_435))) | (*l_435)) | 0xB6A3)) & g_269))))) , p_105);
            }
            (*p_106) = (void*)0;
        }
        else
        {
            int32_t l_443[6][8] = {{0x98F1CF0C, (-1), 0x158F9E6A, 0xD80616FD, 0xCAE00610, 0, 0x6C48DF39, (-1)}, {0x98F1CF0C, (-1), 0x158F9E6A, 0xD80616FD, 0xCAE00610, 0, 0x6C48DF39, (-1)}, {0x98F1CF0C, (-1), 0x158F9E6A, 0xD80616FD, 0xCAE00610, 0, 0x6C48DF39, (-1)}, {0x98F1CF0C, (-1), 0x158F9E6A, 0xD80616FD, 0xCAE00610, 0, 0x6C48DF39, (-1)}, {0x98F1CF0C, (-1), 0x158F9E6A, 0xD80616FD, 0xCAE00610, 0, 0x6C48DF39, (-1)}, {0x98F1CF0C, (-1), 0x158F9E6A, 0xD80616FD, 0xCAE00610, 0, 0x6C48DF39, (-1)}};
            int32_t *l_464[6] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
            int16_t l_487[8][5] = {{0xFAB9, (-6), 0xFD6E, (-6), 0xFAB9}, {0xFAB9, (-6), 0xFD6E, (-6), 0xFAB9}, {0xFAB9, (-6), 0xFD6E, (-6), 0xFAB9}, {0xFAB9, (-6), 0xFD6E, (-6), 0xFAB9}, {0xFAB9, (-6), 0xFD6E, (-6), 0xFAB9}, {0xFAB9, (-6), 0xFD6E, (-6), 0xFAB9}, {0xFAB9, (-6), 0xFD6E, (-6), 0xFAB9}, {0xFAB9, (-6), 0xFD6E, (-6), 0xFAB9}};
            int i, j;
            if (l_443[4][6])
            {
                l_428 = (*p_106);
                (*p_106) = (*p_106);
            }
            else
            {
                uint8_t l_447 = 255U;
                int32_t l_467 = 0x5F6CB8F7;
                int32_t l_473 = 0xB770FFAF;
                for (p_109 = 0; (p_109 > 4); p_109 = safe_add_func_uint8_t_u_u(p_109, 8))
                {
                    int32_t l_448 = 0x614B63D4;
                    int16_t l_455 = 0x8BA3;
                    (*l_364) = ((g_269 ^ (+((l_447 | (4294967295U < l_448)) != (safe_rshift_func_uint16_t_u_s((~((((((safe_sub_func_int32_t_s_s(((safe_unary_minus_func_uint16_t_u(((l_455 || ((safe_rshift_func_int16_t_s_s((0x7372 || __builtin_ia32_crc32qi(g_39, (*l_366))), p_108)) && g_442)) <= (*l_365)))) <= (-1)), l_447)) == p_105) || p_109) , &l_427) == &l_427) >= (*l_363))), p_105))))) & g_31);
                }
                (*l_363) = ((safe_add_func_uint8_t_u_u((func_110((((l_443[3][5] , &l_443[4][6]) != ((((safe_lshift_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(l_443[4][6], __builtin_popcountl((*l_366)))) <= g_220), (l_443[4][6] ^ (g_39 && g_41[0][6])))) > g_275[0]) , g_220) , l_464[5])) == (-3))) || 0x7F), 0xC5)) == g_442);
                for (g_269 = (-9); (g_269 >= 57); ++g_269)
                {
                    int32_t l_469 = 0;
                    int32_t l_474 = 0x619A722B;
                    ++l_476;
                    for (g_220 = 0; (g_220 == (-2)); g_220 = safe_sub_func_int16_t_s_s(g_220, 7))
                    {
                        uint32_t l_481[10][8][3] = {{{1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}}, {{1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}}, {{1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}}, {{1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}}, {{1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}}, {{1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}}, {{1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}}, {{1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}}, {{1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}}, {{1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}, {1U, 0xA9C87E83, 0x10A0A911}}};
                        int32_t * const *l_482[6][1][1];
                        const int32_t *l_484 = &l_474;
                        const int32_t **l_483 = &l_484;
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_482[i][j][k] = &l_367[3][0];
                            }
                        }
                        (*l_483) = func_115(l_481[5][0][0], func_118(l_482[3][0][0], &l_443[4][6], ((((__builtin_parityl((p_108 , p_109)) < 1) <= p_109) || (((p_108 & p_107) && p_107) , p_109)) , l_467), l_473, p_107));
                        return g_275[0];
                    }
                    (*l_365) |= ((((void*)0 == (*p_106)) && (((l_469 && p_108) , 5U) ^ l_467)) , ((((void*)0 == &g_188[1][0]) < (safe_mod_func_uint16_t_u_u((((l_474 >= 0x32) > 65535U) > 1U), p_108))) || l_474));
                }
            }
            l_487[2][0] ^= ((void*)0 != p_106);
        }
        g_494 = func_115((safe_mod_func_uint16_t_u_u(((((0x06B7622B >= (((*l_364) < ((*l_364) , g_39)) , (*l_366))) < g_490) || (g_41[2][6] , p_105)) ^ ((safe_rshift_func_uint16_t_u_s((*l_364), 6)) ^ g_31)), p_108)), p_106);
    }
    return p_107;
}
static uint8_t func_110(int16_t p_111)
{
    int32_t l_114[3][5] = {{0x59850BAF, (-4), 0x59850BAF, (-4), 0x59850BAF}, {0x59850BAF, (-4), 0x59850BAF, (-4), 0x59850BAF}, {0x59850BAF, (-4), 0x59850BAF, (-4), 0x59850BAF}};
    int32_t *l_125[7] = {&g_41[0][0], &g_41[0][0], &g_41[2][2], &g_41[0][0], &g_41[0][0], &g_41[2][2], &g_41[0][0]};
    int32_t * const *l_124 = &l_125[3];
    const int32_t *l_362[8][9][3] = {{{&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}}, {{&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}}, {{&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}}, {{&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}}, {{&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}}, {{&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}}, {{&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}}, {{&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}, {&g_31, &g_195, (void*)0}}};
    const int32_t **l_361 = &l_362[3][6][0];
    int i, j, k;
    for (p_111 = 27; (p_111 >= (-7)); --p_111)
    {
        return l_114[0][3];
    }
    (*l_361) = func_115(p_111, func_118(l_124, func_126(g_41[2][2]), p_111, ((safe_rshift_func_uint16_t_u_u((__builtin_parityl(p_111) , (p_111 == p_111)), g_41[2][2])) , 1U), p_111));
    return g_41[2][2];
}
static const int32_t * func_115(int32_t p_116, int32_t ** p_117)
{
    int32_t l_199 = 0xD08088E2;
    int32_t l_238 = 0x1F8B39ED;
    int32_t l_242 = 0xDE95D9E2;
    int32_t l_244 = 0x382A1690;
    int32_t l_247 = (-6);
    int32_t l_251 = 0;
    uint32_t l_255[1][9] = {{0xE3811A58, 0U, 0xE3811A58, 0U, 0xE3811A58, 0U, 0xE3811A58, 0U, 0xE3811A58}};
    int32_t **l_268 = (void*)0;
    const int8_t l_306 = 0xA7;
    uint32_t l_321[10][5][5] = {{{0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}}, {{0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}}, {{0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}}, {{0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}}, {{0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}}, {{0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}}, {{0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}}, {{0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}}, {{0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}}, {{0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}, {0xE89CEA37, 5U, 0xE89CEA37, 5U, 0xE89CEA37}}};
    int8_t l_326 = 1;
    uint32_t l_337 = 1U;
    const int32_t *l_360 = &g_41[2][3];
    int i, j, k;
    for (p_116 = 6; (p_116 >= 0); p_116 -= 1)
    {
        int16_t l_217 = (-5);
        int32_t l_226[10] = {0xB185C60F, 0x26397436, 0xB185C60F, 0x26397436, 0xB185C60F, 0x26397436, 0xB185C60F, 0x26397436, 0xB185C60F, 0x26397436};
        int32_t l_248 = (-9);
        int16_t l_253 = 0x695D;
        const int32_t *l_259[3];
        uint32_t l_292 = 0U;
        uint32_t l_312 = 4294967295U;
        int i;
        for (i = 0; i < 3; i++)
            l_259[i] = &l_244;
        if (p_116)
        {
            int32_t *l_190 = &g_41[0][5];
            int32_t l_227 = 0x24E79B49;
            int32_t l_232 = 0;
            int32_t l_236 = 0x210E2D0E;
            int32_t l_237[3][4] = {{0x0A872E3F, 0x0A872E3F, 0x1889A858, 0x0A872E3F}, {0x0A872E3F, 0x0A872E3F, 0x1889A858, 0x0A872E3F}, {0x0A872E3F, 0x0A872E3F, 0x1889A858, 0x0A872E3F}};
            int i, j;
            (*l_190) |= (-1);
            if ((__builtin_clzll(p_116) | ((safe_rshift_func_uint8_t_u_u(g_3, 5)) || g_39)))
            {
                int32_t *l_193 = &g_39;
                int32_t *l_194 = &g_195;
                uint16_t l_202 = 3U;
                (*l_194) ^= __builtin_parityll(((l_193 != l_193) , g_41[0][5]));
                (*p_117) = (*p_117);
                (*l_190) = (!(((((g_31 , ((safe_mod_func_int16_t_s_s((l_199 && ((safe_sub_func_int32_t_s_s(l_202, ((safe_rshift_func_int16_t_s_s((g_41[2][2] || (((g_41[0][6] , (safe_rshift_func_int8_t_s_u((l_193 != (void*)0), 3))) | (((safe_rshift_func_uint16_t_u_s((p_116 | p_116), l_199)) == p_116) <= g_39)) | g_41[2][2])), 2)) >= 3U))) != p_116)), g_31)) <= p_116)) ^ 0xEDDB) < 9) || l_199) >= 0xEFD1AA81));
            }
            else
            {
                uint8_t l_218 = 0xAE;
                int32_t l_231[9] = {0x7836A358, (-3), 0x7836A358, (-3), 0x7836A358, (-3), 0x7836A358, (-3), 0x7836A358};
                int i;
                for (g_195 = 0; (g_195 <= 1); g_195 += 1)
                {
                    uint32_t l_221 = 0x9FA68571;
                    int32_t l_225 = 0x8B1BC0AB;
                    int32_t l_228 = 0xD460D4B3;
                    int32_t l_229 = 1;
                    int32_t l_230 = 0xB6AAB484;
                    int32_t l_233 = 4;
                    int32_t l_234 = (-8);
                    int32_t l_235 = 0x956B4470;
                    int32_t l_239 = 0x7AD862C6;
                    int32_t l_240 = 0;
                    int32_t l_241 = 0xEA799C36;
                    int32_t l_243 = (-1);
                    int32_t l_246 = 0;
                    int16_t l_249 = 0xA62E;
                    int32_t l_250 = 8;
                    int32_t l_252 = 0x258023A8;
                    int32_t l_254[8] = {0, 0, 0xA5B00148, 0, 0, 0xA5B00148, 0, 0};
                    int i, j;
                    for (l_199 = 1; (l_199 >= 0); l_199 -= 1)
                    {
                        int32_t *l_219[7] = {&g_195, &g_220, &g_195, &g_220, &g_195, &g_220, &g_195};
                        int i, j;
                        l_221 &= ((safe_mod_func_int32_t_s_s((0xFA74C0A3 != g_41[g_195][(p_116 + 2)]), 4294967286U)) || ((safe_sub_func_uint32_t_u_u(__builtin_parityll((g_195 | (((safe_mod_func_uint32_t_u_u(((0 | ((__builtin_ia32_crc32qi(p_116, ((safe_mod_func_int32_t_s_s(((1 != (p_116 >= ((p_116 <= 0x6996) != p_116))) | p_116), p_116)) <= l_217)) > g_41[0][2]) , 5)) == 0x57B8), p_116)) <= g_195) >= 0xC527838C))), p_116)) == l_218));
                        return (*p_117);
                    }
                    (*p_117) = (void*)0;
                    for (l_221 = 0; (l_221 <= 1); l_221 += 1)
                    {
                        int32_t *l_222 = &g_220;
                        int32_t *l_223 = &g_41[2][0];
                        int32_t *l_224[5];
                        int32_t l_245 = 0x926A0A94;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_224[i] = &g_41[0][5];
                        --l_255[0][5];
                        (*p_117) = (void*)0;
                    }
                }
            }
        }
        else
        {
            const int32_t *l_258 = &l_248;
            return (*p_117);
        }
        for (l_217 = 1; (l_217 >= 0); l_217 -= 1)
        {
            int32_t l_265[9] = {0x4576960F, (-2), 0x4576960F, (-2), 0x4576960F, (-2), 0x4576960F, (-2), 0x4576960F};
            int i, j;
        }
    }
    return l_360;
}
static int32_t ** func_118(int32_t * const * p_119, int32_t * p_120, uint8_t p_121, uint32_t p_122, uint32_t p_123)
{
    int8_t l_163 = 0x8B;
    int32_t l_164 = 0x27B1E6F4;
    int32_t l_165[10];
    int8_t l_166 = 0xD0;
    int16_t l_168[9][2] = {{(-1), (-1)}, {(-1), (-1)}, {(-1), (-1)}, {(-1), (-1)}, {(-1), (-1)}, {(-1), (-1)}, {(-1), (-1)}, {(-1), (-1)}, {(-1), (-1)}};
    int16_t l_169 = 0xF1C6;
    int16_t l_179 = 0xED1C;
    int8_t l_184 = 1;
    uint8_t l_185 = 253U;
    int32_t *l_187 = &g_41[1][7];
    int32_t **l_186 = &l_187;
    int i, j;
    for (i = 0; i < 10; i++)
        l_165[i] = 0x45322D53;
    for (p_122 = 0; (p_122 < 47); p_122++)
    {
        int32_t *l_162[9] = {&g_31, &g_31, &g_41[1][5], &g_31, &g_31, &g_41[1][5], &g_31, &g_31, &g_41[1][5]};
        int8_t l_167[5][7] = {{0x40, 0x2B, (-10), 0x2B, 0x40, 1, 0x40}, {0x40, 0x2B, (-10), 0x2B, 0x40, 1, 0x40}, {0x40, 0x2B, (-10), 0x2B, 0x40, 1, 0x40}, {0x40, 0x2B, (-10), 0x2B, 0x40, 1, 0x40}, {0x40, 0x2B, (-10), 0x2B, 0x40, 1, 0x40}};
        uint32_t l_170 = 0x58EA8642;
        int i, j;
        ++l_170;
    }
    (*p_120) = ((safe_rshift_func_uint8_t_u_u((l_169 ^ ((p_121 < (((safe_mod_func_int32_t_s_s(((((safe_add_func_uint8_t_u_u(g_41[2][2], p_123)) < ((l_168[3][0] != ((((l_179 , &g_47) != &g_47) & ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((p_121 , l_164) || l_184), 3)), g_3)) < g_31)) , g_41[1][1])) , p_122)) , l_185) >= p_121), 1U)) > 7U) , g_41[2][2])) , 3)), l_168[5][0])) >= p_123);
    l_164 ^= (*p_120);
    return g_188[1][0];
}
static int32_t * func_126(uint8_t p_127)
{
    int32_t * const **l_128 = (void*)0;
    int32_t l_141 = 1;
    int32_t l_142 = 0xE7FB8437;
    int32_t l_143 = 2;
    int32_t l_144 = 0x7536633C;
    int32_t l_145 = 0x3A23D7F4;
    int32_t l_146 = 0x4B8A10D3;
    int32_t l_147 = 0;
    int32_t l_148 = 7;
    int32_t l_149 = 0x94B4543C;
    int32_t l_150 = 0xB24C0330;
    int32_t l_151 = 3;
    int8_t l_152 = 0xAE;
    int32_t l_153[9][2] = {{(-9), 0}, {(-9), 0}, {(-9), 0}, {(-9), 0}, {(-9), 0}, {(-9), 0}, {(-9), 0}, {(-9), 0}, {(-9), 0}};
    int16_t l_154[10][8] = {{0x0F2E, 0x0560, 0x0F2E, 0x0560, 0x0F2E, 0x0560, 0x0F2E, 0x0560}, {0x0F2E, 0x0560, 0x0F2E, 0x0560, 0x0F2E, 0x0560, 0x0F2E, 0x0560}, {0x0F2E, 0x0560, 0x0F2E, 0x0560, 0x0F2E, 0x0560, 0x0F2E, 0x0560}, {0x0F2E, 0x0560, 0x0F2E, 0x0560, 0x0F2E, 0x0560, 0x0F2E, 0x0560}, {0x0F2E, 0x0560, 0x0F2E, 0x0560, 0x0F2E, 0x0560, 0x0F2E, 0x0560}, {0x0F2E, 0x0560, 0x0F2E, 0x0560, 0x0F2E, 0x0560, 0x0F2E, 0x0560}, {0x0F2E, 0x0560, 0x0F2E, 0x0560, 0x0F2E, 0x0560, 0x0F2E, 0x0560}, {0x0F2E, 0x0560, 0x0F2E, 0x0560, 0x0F2E, 0x0560, 0x0F2E, 0x0560}, {0x0F2E, 0x0560, 0x0F2E, 0x0560, 0x0F2E, 0x0560, 0x0F2E, 0x0560}, {0x0F2E, 0x0560, 0x0F2E, 0x0560, 0x0F2E, 0x0560, 0x0F2E, 0x0560}};
    uint16_t l_155 = 0xBF5B;
    int i, j;
    g_47 = g_47;
    for (p_127 = 24; (p_127 > 9); p_127 = safe_sub_func_int32_t_s_s(p_127, 1))
    {
        int32_t *l_131 = &g_41[2][2];
        int32_t *l_132 = &g_41[2][2];
        int32_t *l_133 = &g_41[2][2];
        int32_t *l_134 = &g_41[2][2];
        int32_t l_135 = 0x2DCCA579;
        int32_t *l_136 = &g_41[2][1];
        int32_t *l_137 = &g_41[2][2];
        int32_t *l_138 = (void*)0;
        int32_t *l_139 = &l_135;
        int32_t *l_140[4];
        int i;
        for (i = 0; i < 4; i++)
            l_140[i] = &g_41[2][2];
        --l_155;
    }
    return &g_41[0][4];
}
int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    func_29();
    csmith_sink_ = g_3;
    csmith_sink_ = g_31;
    csmith_sink_ = g_38;
    csmith_sink_ = g_39;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            csmith_sink_ = g_41[i][j];
        }
    }
    csmith_sink_ = g_195;
    csmith_sink_ = g_220;
    csmith_sink_ = g_269;
    for (i = 0; i < 1; i++)
    {
        csmith_sink_ = g_275[i];
    }
    csmith_sink_ = g_442;
    csmith_sink_ = g_490;
    csmith_sink_ = g_546;
    csmith_sink_ = g_582;
    csmith_sink_ = g_599;
    platform_main_end(0,0);
    return 0;
}
