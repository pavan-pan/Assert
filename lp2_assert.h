#ifndef LP2_ASSERT_H_INCLUDED
#define LP2_ASSERT_H_INCLUDED


#define FILENUM(num)\
    enum { F_NUM = num }; \
    void _dummy##num(void) {}

#define LP2_ASSERT(expr, error_code) \
    if (expr) \
        {} \
    else \
        aFailed(F_NUM, __LINE__, error_code)

#define LP2_BREAKPOINT __asm__("BKPT 0");
		
void aFailed(int file, int line, int error_code);

#endif // LP2_ASSERT_H_INCLUDED
