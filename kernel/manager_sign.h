#ifndef MANAGER_SIGN_H
#define MANAGER_SIGN_H

// troj00/NextGenSU
#define EXPECTED_SIZE_NEXTGENSU 0x2e8
#define EXPECTED_HASH_NEXTGENSU                                                \
    "0f68387d37ffbc054e8427dcc37666a5df799dfcd971d841dd9a02c236db95f2"

typedef struct {
    u32 size;
    const char *sha256;
} apk_sign_key_t;

#endif /* MANAGER_SIGN_H */
