#include <nitro.h>
#include <string.h>

#include "struct_decls/struct_02013B10_decl.h"
#include "struct_decls/struct_0201CD38_decl.h"

#include "struct_defs/struct_0205AA50.h"
#include "overlay104/struct_ov104_0223E9EC.h"
#include "overlay104/struct_ov104_0223EA38.h"
#include "overlay104/struct_ov104_0223F094.h"
#include "overlay104/struct_ov104_0223F1B4.h"

#include "unk_0200D9E8.h"
#include "unk_02013B10.h"
#include "unk_02017E74.h"
#include "unk_02018340.h"
#include "overlay104/ov104_0223E894.h"

typedef struct {
    int unk_00;
    u32 unk_04;
    int unk_08;
    int unk_0C;
    u32 unk_10;
    u32 unk_14;
    UnkStruct_ov104_0223E9EC unk_18;
    UnkStruct_ov104_0223E9EC unk_30;
    BOOL * unk_48;
} UnkStruct_ov104_0223E894;

typedef struct UnkStruct_ov104_0223EA84_t {
    UnkStruct_ov104_0223EA38 unk_00;
    UnkStruct_ov104_0223EA38 unk_14;
    UnkStruct_0205AA50 * unk_28;
    u8 unk_2C;
    u8 unk_2D;
    u8 unk_2E;
    u8 unk_2F;
} UnkStruct_ov104_0223EA84;

typedef struct UnkStruct_ov104_0223EBD0_t {
    UnkStruct_0205AA50 * unk_00;
    UnkStruct_ov104_0223EA84 * unk_04[96];
    u8 unk_184;
    u8 unk_185;
    u8 unk_186;
    u8 unk_187;
    u8 unk_188;
    u8 unk_189;
    u8 unk_18A;
    s8 unk_18B;
    u8 unk_18C;
    u8 unk_18D;
    u8 unk_18E[1];
} UnkStruct_ov104_0223EBD0;

typedef void (* UnkFuncPtr_ov104_0223F110)(void *);

typedef struct {
    UnkStruct_0201CD38 * unk_00;
    UnkStruct_0201CD38 * unk_04;
    BOOL unk_08;
    BOOL unk_0C;
    UnkFuncPtr_ov104_0223F110 unk_10;
    UnkFuncPtr_ov104_0223F110 unk_14;
    void * unk_18;
} UnkStruct_ov104_0223F0D8;

typedef struct UnkStruct_ov104_0223F174_t {
    UnkStruct_ov104_0223F0D8 unk_00;
    UnkStruct_02013B10 * unk_1C;
    UnkStruct_ov104_0223F1B4 unk_20[192];
    UnkStruct_ov104_0223F1B4 unk_1820[192];
    u32 unk_3020;
} UnkStruct_ov104_0223F174;

static void ov104_0223EA14(UnkStruct_0201CD38 * param0, void * param1);
static void ov104_0223E8D8(UnkStruct_0201CD38 * param0, void * param1);
static void ov104_0223EB44(UnkStruct_0205AA50 * param0, s32 param1, s32 param2, s32 param3, s32 param4, u8 param5);
static UnkStruct_0201CD38 * ov104_0223F05C(UnkStruct_ov104_0223F094 * param0);
static void ov104_0223F070(UnkStruct_0201CD38 * param0, void * param1);

void ov104_0223E894 (int param0, u32 param1, u32 param2, BOOL * param3, u32 param4)
{
    UnkStruct_0201CD38 * v0;
    UnkStruct_ov104_0223E894 * v1;

    v1 = sub_02018144(11, sizeof(UnkStruct_ov104_0223E894));
    memset(v1, 0, sizeof(UnkStruct_ov104_0223E894));

    sub_0200D9E8(ov104_0223E8D8, v1, 5);

    v1->unk_48 = param3;

    if (v1->unk_48 != NULL) {
        *(v1->unk_48) = 0;
    }

    v1->unk_0C = param0;
    v1->unk_10 = param1;
    v1->unk_14 = param2;
    v1->unk_04 = param4;
}

static void ov104_0223E8D8 (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov104_0223E894 * v0 = param1;

    switch (v0->unk_00) {
    case 0:
        if (v0->unk_0C == 1) {
            ov104_0223E9EC(&v0->unk_30, 0, v0->unk_14, 2, 8);
        } else {
            if (v0->unk_0C == 2) {
                ov104_0223E9EC(&v0->unk_30, 0, v0->unk_14, 1, 8);
            }
        }

        v0->unk_00++;
        break;
    case 1:
        ov104_0223E9EC(&v0->unk_18, 0, v0->unk_10, v0->unk_0C, 3);
        v0->unk_00++;
        break;
    case 2:
        if (ov104_0223E9F8(&v0->unk_18)) {
            v0->unk_00++;
        }
        break;
    case 3:
        ov104_0223E9EC(&v0->unk_18, v0->unk_10, 0, v0->unk_0C, 3);
        v0->unk_00++;
        break;
    case 4:
        if (ov104_0223E9F8(&v0->unk_18)) {
            v0->unk_08++;

            if (v0->unk_08 == v0->unk_04) {
                v0->unk_00 = 5;
            } else {
                v0->unk_00 = 1;
            }
        }
        break;
    case 5:
        v0->unk_00 = 0;
        v0->unk_08 = 0;

        if (v0->unk_48 != NULL) {
            *(v0->unk_48) = 1;
        }

        sub_0200DA58(param0);
        sub_020181C4(v0);

        return;
    }

    ov104_0223E9F8(&v0->unk_30);
}

void ov104_0223E9CC (int param0, int param1)
{
    if (param0 == 1) {
        GX_SetMasterBrightness(param1);
    } else {
        GXS_SetMasterBrightness(param1);
    }
}

void ov104_0223E9EC (UnkStruct_ov104_0223E9EC * param0, int param1, int param2, int param3, int param4)
{
    param0->unk_14 = param3;
    ov104_0223EA28(&param0->unk_00, param1, param2, param4);
}

BOOL ov104_0223E9F8 (UnkStruct_ov104_0223E9EC * param0)
{
    BOOL v0;

    v0 = ov104_0223EA38(&param0->unk_00);
    sub_0200DA3C(ov104_0223EA14, param0, 10);

    return v0;
}

static void ov104_0223EA14 (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov104_0223E9EC * v0 = param1;

    ov104_0223E9CC(v0->unk_14, v0->unk_00.unk_00);
    sub_0200DA58(param0);
}

void ov104_0223EA28 (UnkStruct_ov104_0223EA38 * param0, int param1, int param2, int param3)
{
    param0->unk_00 = param1;
    param0->unk_04 = param1;
    param0->unk_08 = param2 - param1;
    param0->unk_10 = param3;
    param0->unk_0C = 0;
}

BOOL ov104_0223EA38 (UnkStruct_ov104_0223EA38 * param0)
{
    int v0;

    v0 = param0->unk_08 * param0->unk_0C;
    v0 = v0 / param0->unk_10;

    param0->unk_00 = v0 + param0->unk_04;

    if ((param0->unk_0C + 1) <= param0->unk_10) {
        param0->unk_0C++;
        return 0;
    }

    param0->unk_0C = param0->unk_10;
    return 1;
}

UnkStruct_ov104_0223EA84 * ov104_0223EA64 (u32 param0)
{
    UnkStruct_ov104_0223EA84 * v0;

    v0 = sub_02018144(param0, sizeof(UnkStruct_ov104_0223EA84));
    memset(v0, 0, sizeof(UnkStruct_ov104_0223EA84));

    return v0;
}

void ov104_0223EA7C (UnkStruct_ov104_0223EA84 * param0)
{
    sub_020181C4(param0);
}

void ov104_0223EA84 (UnkStruct_ov104_0223EA84 * param0, int param1, int param2, int param3, int param4, int param5, UnkStruct_0205AA50 * param6, u32 param7, u32 param8, u8 param9)
{
    GF_ASSERT(param0->unk_2E == 0);

    ov104_0223EA28(&param0->unk_00, param1, param2, param5);
    ov104_0223EA28(&param0->unk_14, param3, param4, param5);

    param0->unk_28 = param6;
    param0->unk_2C = param7;
    param0->unk_2D = param8;
    param0->unk_2F = param9;
    param0->unk_2E = 1;
}

BOOL ov104_0223EADC (UnkStruct_ov104_0223EA84 * param0)
{
    BOOL v0;
    s16 v1, v2, v3, v4;

    if (param0->unk_2E == 0) {
        return 1;
    }

    v3 = param0->unk_00.unk_00 - (param0->unk_2C / 2);
    v1 = param0->unk_14.unk_00 - (param0->unk_2D / 2);
    v4 = v3 + param0->unk_2C;
    v2 = v1 + param0->unk_2D;

    v0 = ov104_0223EA38(&param0->unk_00);
    ov104_0223EA38(&param0->unk_14);

    v3 = param0->unk_00.unk_00 - (param0->unk_2C / 2);
    v1 = param0->unk_14.unk_00 - (param0->unk_2D / 2);
    v4 = v3 + param0->unk_2C;
    v2 = v1 + param0->unk_2D;

    ov104_0223EB44(param0->unk_28, v1, v2, v3, v4, param0->unk_2F);

    return v0;
}

static void ov104_0223EB44 (UnkStruct_0205AA50 * param0, s32 param1, s32 param2, s32 param3, s32 param4, u8 param5)
{
    if ((param4 <= 0) || (param2 <= 0)) {
        return;
    }

    if ((param3 == param4) || (param1 == param2)) {
        return;
    }

    if (param3 < 0) {
        param3 = 0;
    }

    if (param4 > 256) {
        param4 = 256;
    }

    if (param1 < 0) {
        param1 = 0;
    }

    if (param2 > 256) {
        param2 = 256;
    }

    sub_0201AE78(param0, param5, param3, param1, param4 - param3, param2 - param1);
}

UnkStruct_ov104_0223EBD0 * ov104_0223EBA0 (u32 param0)
{
    UnkStruct_ov104_0223EBD0 * v0;
    int v1;

    v0 = sub_02018144(param0, sizeof(UnkStruct_ov104_0223EBD0));
    memset(v0, 0, sizeof(UnkStruct_ov104_0223EBD0));

    for (v1 = 0; v1 < ((256 / 16) * (192 / 32)); v1++) {
        v0->unk_04[v1] = ov104_0223EA64(param0);
    }

    return v0;
}

void ov104_0223EBD0 (UnkStruct_ov104_0223EBD0 * param0)
{
    int v0;

    for (v0 = 0; v0 < ((256 / 16) * (192 / 32)); v0++) {
        ov104_0223EA7C(param0->unk_04[v0]);
    }

    sub_020181C4(param0);
}

void ov104_0223EBF0 (UnkStruct_ov104_0223EBD0 * param0, u8 param1, u8 param2, UnkStruct_0205AA50 * param3, u8 param4)
{
    param0->unk_00 = param3;
    param0->unk_18C = param4;
    param0->unk_189 = param1;
    param0->unk_18A = param2;
    param0->unk_184 = 0;
    param0->unk_185 = 0;
    param0->unk_186 = 0;
    param0->unk_187 = 0;
    param0->unk_188 = 0;
    param0->unk_18B = 0;
    param0->unk_18D = 1;
}

static const u8 Unk_ov104_02241970[][(256 / 16)] = {
    {0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7},
    {0x7, 0x6, 0x5, 0x4, 0x3, 0x2, 0x1, 0x0}
};

BOOL ov104_0223EC34 (UnkStruct_ov104_0223EBD0 * param0)
{
    int v0, v1, v2, v3;
    int v4;
    BOOL v5;

    if (param0->unk_18D == 0) {
        return 1;
    }

    if (param0->unk_184 < ((256 / 16) * (192 / 32))) {
        param0->unk_18B--;

        if (param0->unk_18B <= 0) {
            param0->unk_18B = param0->unk_18A;

            v0 = 32 * (Unk_ov104_02241970[param0->unk_187][param0->unk_185] * 1);
            v1 = v0 + 32;
            v2 = param0->unk_186;
            v3 = (16 / 2) + (v2 * 16);

            ov104_0223EA84(param0->unk_04[param0->unk_184], v0, v1, v3, v3, param0->unk_189, param0->unk_00, 32, 16, param0->unk_18C);

            v0 = 32 * (Unk_ov104_02241970[param0->unk_187 ^ 1][param0->unk_185] * 1);
            v1 = v0 + 32;
            v2 = ((192 / 16) / 2) - param0->unk_186 - 1;
            v3 = (16 / 2) + (v2 * 16);

            ov104_0223EA84(param0->unk_04[param0->unk_184 + 1], v0, v1, v3, v3, param0->unk_189, param0->unk_00, 32, 16, param0->unk_18C);

            v0 = 32 * (Unk_ov104_02241970[param0->unk_187][param0->unk_185] * 1);
            v1 = v0 + 32;
            v2 = ((192 / 16) / 2) + param0->unk_186;
            v3 = (16 / 2) + (v2 * 16);

            ov104_0223EA84(param0->unk_04[param0->unk_184 + 2], v0, v1, v3, v3, param0->unk_189, param0->unk_00, 32, 16, param0->unk_18C);

            v0 = 32 * (Unk_ov104_02241970[param0->unk_187 ^ 1][param0->unk_185] * 1);
            v1 = v0 + 32;
            v2 = (192 / 16) - param0->unk_186 - 1;
            v3 = (16 / 2) + (v2 * 16);

            ov104_0223EA84(param0->unk_04[param0->unk_184 + 3], v0, v1, v3, v3, param0->unk_189, param0->unk_00, 32, 16, param0->unk_18C);

            param0->unk_184 += 4;
            param0->unk_185++;

            if ((param0->unk_185 % (256 / 32)) == 0) {
                param0->unk_187 ^= 1;
                param0->unk_186++;
                param0->unk_185 = 0;
            }
        }
    }

    for (v4 = param0->unk_188; v4 < param0->unk_184; v4++) {
        v5 = ov104_0223EADC(param0->unk_04[v4]);

        if (v5 == 1) {
            param0->unk_188++;
        }
    }

    if ((param0->unk_188 >= ((256 / 16) * (192 / 32))) && (v5 == 1)) {
        param0->unk_18D = 0;
        return 1;
    }

    return 0;
}

static const u8 Unk_ov104_02241964[][(192 / 32)] = {
    {0x0, 0x1, 0x2, 0x3, 0x4, 0x5},
    {0x5, 0x4, 0x3, 0x2, 0x1, 0x0}
};

BOOL ov104_0223EE44 (UnkStruct_ov104_0223EBD0 * param0)
{
    int v0, v1, v2;
    int v3;
    BOOL v4;

    if (param0->unk_18D == 0) {
        return 1;
    }

    if (param0->unk_184 < ((256 / 16) * (192 / 32))) {
        param0->unk_18B--;

        if (param0->unk_18B <= 0) {
            param0->unk_18B = param0->unk_18A;

            v0 = param0->unk_185;
            v0 = (16 / 2) + (v0 * 16);
            v1 = 32 * (Unk_ov104_02241964[param0->unk_187][param0->unk_186] * 1);
            v2 = v1 + 32;

            ov104_0223EA84(param0->unk_04[param0->unk_184], v0, v0, v1, v2, param0->unk_189, param0->unk_00, 16, 32, param0->unk_18C);

            v0 = ((256 / 16) / 2) - param0->unk_185 - 1;
            v0 = (16 / 2) + (v0 * 16);
            v1 = 32 * (Unk_ov104_02241964[param0->unk_187 ^ 1][param0->unk_186] * 1);
            v2 = v1 + 32;

            ov104_0223EA84(param0->unk_04[param0->unk_184 + 1], v0, v0, v1, v2, param0->unk_189, param0->unk_00, 16, 32, param0->unk_18C);

            v0 = ((256 / 16) / 2) + param0->unk_185;
            v0 = (16 / 2) + (v0 * 16);
            v1 = 32 * (Unk_ov104_02241964[param0->unk_187][param0->unk_186] * 1);
            v2 = v1 + 32;

            ov104_0223EA84(param0->unk_04[param0->unk_184 + 2], v0, v0, v1, v2, param0->unk_189, param0->unk_00, 16, 32, param0->unk_18C);

            v0 = (256 / 16) - param0->unk_185 - 1;
            v0 = (16 / 2) + (v0 * 16);
            v1 = 32 * (Unk_ov104_02241964[param0->unk_187 ^ 1][param0->unk_186] * 1);
            v2 = v1 + 32;

            ov104_0223EA84(param0->unk_04[param0->unk_184 + 3], v0, v0, v1, v2, param0->unk_189, param0->unk_00, 16, 32, param0->unk_18C);

            param0->unk_184 += 4;
            param0->unk_186++;

            if ((param0->unk_186 % (192 / 32)) == 0) {
                param0->unk_187 ^= 1;
                param0->unk_185++;
                param0->unk_186 = 0;
            }
        }
    }

    for (v3 = param0->unk_188; v3 < param0->unk_184; v3++) {
        v4 = ov104_0223EADC(param0->unk_04[v3]);

        if (v4 == 1) {
            param0->unk_188++;
        }
    }

    if ((param0->unk_188 >= ((256 / 16) * (192 / 32))) && (v4 == 1)) {
        param0->unk_18D = 0;
        return 1;
    }

    return 0;
}

static UnkStruct_0201CD38 * ov104_0223F05C (UnkStruct_ov104_0223F094 * param0)
{
    return sub_0200DA04(ov104_0223F070, param0, 1024);
}

static void ov104_0223F070 (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov104_0223F094 * v0 = param1;

    if (v0->unk_08 >= 2) {
        sub_02013DA4(v0->unk_00);
        v0->unk_08 = 0;
    }

    sub_02013DDC(v0->unk_00);
    v0->unk_08++;
}

void ov104_0223F094 (UnkStruct_ov104_0223F094 * param0, u32 param1)
{
    param0->unk_00 = sub_02013BE0(param1);
    param0->unk_08 = 0;
    param0->unk_04 = ov104_0223F05C(param0);
}

void ov104_0223F0B0 (UnkStruct_ov104_0223F094 * param0, u8 param1, u8 param2, u16 param3, fx32 param4, s16 param5, u32 param6, u32 param7, u32 param8)
{
    sub_02013C10(param0->unk_00, param1, param2, param3, param4, param5, param6, param7, param8);
}

static void ov104_0223F0D8 (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov104_0223F0D8 * v0 = param1;

    if (v0->unk_08) {
        v0->unk_0C = 1;

        v0->unk_10(v0->unk_18);
    } else {
        sub_02013BA8();
    }
}

static void ov104_0223F0F4 (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov104_0223F0D8 * v0 = param1;

    if (v0->unk_08 && v0->unk_0C) {
        v0->unk_14(v0->unk_18);

        v0->unk_0C = 0;
    }
}

static void ov104_0223F110 (UnkStruct_ov104_0223F0D8 * param0, void * param1, UnkFuncPtr_ov104_0223F110 param2, UnkFuncPtr_ov104_0223F110 param3)
{
    GF_ASSERT(param0);

    param0->unk_08 = 1;
    param0->unk_0C = 0;
    param0->unk_18 = param1;
    param0->unk_10 = param2;
    param0->unk_14 = param3;
    param0->unk_04 = sub_0200DA3C(ov104_0223F0D8, param0, 0);
    param0->unk_00 = sub_0200DA04(ov104_0223F0F4, param0, 0);
}

static void ov104_0223F150 (UnkStruct_ov104_0223F0D8 * param0)
{
    GF_ASSERT(param0);

    if (param0->unk_04 != NULL) {
        sub_0200DA58(param0->unk_04);
    }

    if (param0->unk_00 != NULL) {
        sub_0200DA58(param0->unk_00);
    }

    sub_02013BA8();
}

static void ov104_0223F174 (UnkStruct_ov104_0223F174 * param0)
{
    const void * v0;

    v0 = sub_02013B68(param0->unk_1C);

    sub_02013BA8();
    sub_02013BB8(v0, (void *)param0->unk_3020, (sizeof(UnkStruct_ov104_0223F1B4)), 1);
}

static void ov104_0223F198 (void * param0)
{
    UnkStruct_ov104_0223F174 * v0 = param0;

    sub_02013B94(v0->unk_1C);
    ov104_0223F174(v0);
}

static void ov104_0223F1AC (void * param0)
{
    UnkStruct_ov104_0223F174 * v0 = param0;
    ov104_0223F174(v0);
}

UnkStruct_ov104_0223F174 * ov104_0223F1B4 (u32 param0, UnkStruct_ov104_0223F1B4 * param1, int param2)
{
    UnkStruct_ov104_0223F174 * v0;
    int v1;

    v0 = sub_02018144(param2, sizeof(UnkStruct_ov104_0223F174));
    memset(v0, 0, sizeof(UnkStruct_ov104_0223F174));

    GF_ASSERT(v0);
    v0->unk_1C = sub_02013B10(param2, v0->unk_20, v0->unk_1820);

    GF_ASSERT(v0->unk_1C);
    v0->unk_3020 = param0;

    for (v1 = 0; v1 < 192; v1++) {
        v0->unk_20[v1] = *param1;
        v0->unk_1820[v1] = *param1;
    }

    ov104_0223F110(&v0->unk_00, v0, ov104_0223F198, ov104_0223F1AC);
    return v0;
}

void ov104_0223F258 (UnkStruct_ov104_0223F174 * param0)
{
    GF_ASSERT(param0);

    ov104_0223F150(&param0->unk_00);

    if (param0->unk_1C != NULL) {
        sub_02013B40(param0->unk_1C);
    }

    sub_020181C4(param0);
}

void * ov104_0223F27C (const UnkStruct_ov104_0223F174 * param0)
{
    GF_ASSERT(param0);

    return sub_02013B54(param0->unk_1C);
}
