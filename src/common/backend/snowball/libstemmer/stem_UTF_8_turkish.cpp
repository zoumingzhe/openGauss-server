
/* This file was generated automatically by the Snowball to ANSI C compiler */

#include "header.h"
#include "snowball/libstemmer/stem_UTF_8_turkish.h"

#ifdef __cplusplus
extern "C" {
#endif
extern int turkish_UTF_8_stem(struct SN_env* z);
extern struct SN_env* turkish_UTF_8_create_env(void);
extern void turkish_UTF_8_close_env(struct SN_env* z);
#ifdef __cplusplus
}
#endif

extern int turkish_UTF_8_stem(struct SN_env* z)
{
    ereport(ERROR,
        (errmodule(MOD_TS),
            errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
            errmsg("Text search for Turkish is not supported!")));
    return 1;
}

extern struct SN_env* turkish_UTF_8_create_env(void)
{
    ereport(ERROR,
        (errmodule(MOD_TS),
            errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
            errmsg("Text search for Turkish is not supported!")));
    return NULL;
}

extern void turkish_UTF_8_close_env(struct SN_env* z)
{
    ereport(ERROR,
        (errmodule(MOD_TS),
            errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
            errmsg("Text search for Turkish is not supported!")));
}