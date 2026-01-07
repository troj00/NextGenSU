#ifndef MANAGER_SIGN_H
#define MANAGER_SIGN_H

// troj00/NextGenSU
#define EXPECTED_SIZE_NEXTGENSU 0x2e8
#define EXPECTED_HASH_NEXTGENSU                                                \
    "56086aea5e32d56cceccd828c7665e37c448b6c0acbe513329ba3bbeb89034ca"

typedef struct {
    u32 size;
    const char *sha256;
} apk_sign_key_t;

#endif /* MANAGER_SIGN_H */
