// https://github.com/Snaipe/Criterion

#include <criterion/criterion.h>
#include <stddef.h>

char *decode(const unsigned char *code, size_t n, unsigned key);

Test(Sample_Test, should_return_the_decoded_message)
{
    cr_assert_str_eq(decode((const unsigned char[]){ 20, 12, 18, 30, 21 }, 5u, 1939), "scout");
    cr_assert_str_eq(decode((const unsigned char[]){ 14, 10, 22, 29, 6, 27, 19, 18, 6, 12, 8 }, 11u, 1939), "masterpiece");
}