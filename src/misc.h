
#ifndef __MISC_H__
#define __MISC_H__

#include <stdint.h>

int
safe_atoi32(const char *str, int32_t *val);

int
safe_atou32(const char *str, uint32_t *val);

int
safe_hextou32(const char *str, uint32_t *val);

int
safe_atoi64(const char *str, int64_t *val);

int
safe_atou64(const char *str, uint64_t *val);

int
safe_hextou64(const char *str, uint64_t *val);

char *
m_realpath(const char *pathname);

char *
unicode_fixup_string(char *str);

uint32_t
djb_hash(void *data, size_t len);

char *
b64_decode(const char *b64);

char *
b64_encode(uint8_t *in, size_t len);

uint64_t
murmur_hash64(const void *key, int len, uint32_t seed);

#endif /* !__MISC_H__ */
