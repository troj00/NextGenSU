#ifndef MANAGER_SIGN_H
#define MANAGER_SIGN_H

// troj00/NextGenSU
#define EXPECTED_SIZE_NEXTGENSU 0x2e8
#define EXPECTED_HASH_NEXTGENSU                                                \
    "a3af1db3fc535c64e3b20ff2d9f9be8ebd89e2d81e19d10c7d044c3bc03b60af"

typedef struct {
    u32 size;
    const char *sha256;
} apk_sign_key_t;

#endif /* MANAGER_SIGN_H */
