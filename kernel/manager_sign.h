#ifndef MANAGER_SIGN_H
#define MANAGER_SIGN_H

// troj00/NextGenSU
#define EXPECTED_SIZE_NEXTGENSU 0x398
#define EXPECTED_HASH_NEXTGENSU                                                \
    "a2614759857fdec9625ae81764bc0e10b8d7cd29fbb390f230601a84c99fd07e"

typedef struct {
    u32 size;
    const char *sha256;
} apk_sign_key_t;

#endif /* MANAGER_SIGN_H */
