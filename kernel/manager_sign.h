#ifndef MANAGER_SIGN_H
#define MANAGER_SIGN_H

// troj00/NextGenSU
#define EXPECTED_SIZE_NEXTGENSU 0x2e8
#define EXPECTED_HASH_NEXTGENSU                                                \
    "746e4ea77ec6b9f1adb2cd5ece0ae3bca9dc8cb6620ddfce7984c3a976039064"

typedef struct {
    u32 size;
    const char *sha256;
} apk_sign_key_t;

#endif /* MANAGER_SIGN_H */
