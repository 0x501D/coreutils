/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf -m 10 -D -t -L ANSI-C -E -I -C -K ext -N get_icon icons.gperf  */
/* Computed positions: -k'1,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 1 "icons.gperf"

#include <stddef.h>
#include <stdlib.h>

#if defined(__clang__) && defined(__has_warning)
# if __has_warning("-Wimplicit-fallthrough")
#  pragma clang diagnostic ignored "-Wimplicit-fallthrough"
# endif
# if __has_warning("-Wsuggest-attribute=pure")
#  pragma clang diagnostic ignored "-Wsuggest-attribute=pure"
# endif
#elif defined(__GNUC__)
# if (__GNUC__ >= 7)
#  pragma GCC diagnostic ignored "-Wimplicit-fallthrough"
# endif
# pragma GCC diagnostic ignored "-Wsuggest-attribute=pure"
#endif

const struct icon *get_icon(const char *, size_t);
/* Command-line:
    gperf -m 10 -D -t -L ANSI-C -E -I -C -K ext -N get_icon icons.gperf  */
#line 23 "icons.gperf"
struct icon {
    const char *ext;
    const char *symbol;
};
#include <string.h>
/* maximum key range = 46, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (register const char *str, register size_t len)
{
  static const unsigned char asso_values[] =
    {
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      21, 12, 11, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 23,  0, 24,
      10,  4,  1,  6,  1, 21, 21,  1, 17, 15,
      32, 40,  9,  9, 38,  9, 35,  2, 17, 49,
      28, 14, 23, 17, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49
    };
  return len + asso_values[(unsigned char)str[len - 1]] + asso_values[(unsigned char)str[0]+1];
}

const struct icon *
get_icon (register const char *str, register size_t len)
{
  enum
    {
      TOTAL_KEYWORDS = 46,
      MIN_WORD_LENGTH = 1,
      MAX_WORD_LENGTH = 10,
      MIN_HASH_VALUE = 3,
      MAX_HASH_VALUE = 48
    };

  static const struct icon wordlist[] =
    {
#line 54 "icons.gperf"
      {"aab", "\uf17b"},
#line 53 "icons.gperf"
      {"apk", "\uf17b"},
#line 58 "icons.gperf"
      {"epub", "\ue28a"},
#line 37 "icons.gperf"
      {"db", "\uf1c0"},
#line 52 "icons.gperf"
      {"deb", "\uf306"},
#line 36 "icons.gperf"
      {"exe", "\uf17a"},
#line 38 "icons.gperf"
      {"diff", "\uf440"},
#line 42 "icons.gperf"
      {"jpg", "\uf1c5"},
#line 41 "icons.gperf"
      {"jpeg", "\uf1c5"},
#line 61 "icons.gperf"
      {"js", "\uf81d"},
#line 40 "icons.gperf"
      {"pdf", "\uf1c1"},
#line 66 "icons.gperf"
      {"gitignore", "\uf408"},
#line 39 "icons.gperf"
      {"patch", "\uf440"},
#line 65 "icons.gperf"
      {"gitconfig", "\uf408"},
#line 51 "icons.gperf"
      {"ebuild", "\uf30d"},
#line 43 "icons.gperf"
      {"png", "\uf1c5"},
#line 68 "icons.gperf"
      {"cfg", "\uf423"},
#line 67 "icons.gperf"
      {"gitmodules", "\uf408"},
#line 34 "icons.gperf"
      {"php", "\uf81e"},
#line 29 "icons.gperf"
      {"cpp", "\ue51d"},
#line 30 "icons.gperf"
      {"h", "\ue51e"},
#line 62 "icons.gperf"
      {"log", "\uf18d"},
#line 35 "icons.gperf"
      {"py", "\uf81f"},
#line 48 "icons.gperf"
      {"gz", "\uf410"},
#line 63 "icons.gperf"
      {"pem", "\uf2bc"},
#line 59 "icons.gperf"
      {"java", "\ue638"},
#line 50 "icons.gperf"
      {"zip", "\uf410"},
#line 73 "icons.gperf"
      {"puml", "\uf0e8"},
#line 55 "icons.gperf"
      {"doc", "\uf1c2"},
#line 71 "icons.gperf"
      {"hs", "\ue677"},
#line 31 "icons.gperf"
      {"hpp", "\ue51d"},
#line 70 "icons.gperf"
      {"key", "\ue50a"},
#line 28 "icons.gperf"
      {"c", "\ue51e"},
#line 56 "icons.gperf"
      {"docx", "\uf1c2"},
#line 72 "icons.gperf"
      {"uml", "\uf0e8"},
#line 46 "icons.gperf"
      {"sh", "\ue695"},
#line 47 "icons.gperf"
      {"xz", "\uf410"},
#line 57 "icons.gperf"
      {"txt", "\uf15c"},
#line 32 "icons.gperf"
      {"lua", "\ue520"},
#line 60 "icons.gperf"
      {"jar", "\uee638"},
#line 33 "icons.gperf"
      {"go", "\uf40d"},
#line 64 "icons.gperf"
      {"md", "\uf48a"},
#line 69 "icons.gperf"
      {"ini", "\uf423"},
#line 44 "icons.gperf"
      {"mp4", "\uf03d"},
#line 45 "icons.gperf"
      {"mp3", "\uf001"},
#line 49 "icons.gperf"
      {"bz2", "\uf410"}
    };

  static const signed char lookup[] =
    {
      -1, -1, -1,  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10,
      11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
      25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
      39, 40, 41, 42, 43, 44, 45
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist[index].ext;

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &wordlist[index];
            }
        }
    }
  return 0;
}
