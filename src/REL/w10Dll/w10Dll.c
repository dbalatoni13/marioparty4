#include "include/REL/w10Dll.h"
#include "game/data.h"

#include "math.h"

//BSS
s16 lbl_1_bss_22[11];
s16 lbl_1_bss_20;
s16 lbl_1_bss_1E;
s16 lbl_1_bss_1C;
Process* lbl_1_bss_18;
s16 lbl_1_bss_10[4];
s16 lbl_1_bss_E;
s16 lbl_1_bss_C;
void* lbl_1_bss_8;
s32 lbl_1_bss_4_pad;
W10State* lbl_1_bss_0;

//DATA
unkw10Dll lbl_1_data_0[1] = {
    3300.0f, 100.0f, -900.0f,
    0.0f, 0.0f, 0.0f,
    1.0f, 1.0f, 1.0f,
    MAKE_DATA_NUM(DATADIR_W10, 3)
};


s16 lbl_1_data_28 = -1;
s16 lbl_1_data_2A = -1;
s16 lbl_1_data_2C = -1;
s16 lbl_1_data_2E = -1;
s16 lbl_1_data_30 = -1;
s16 lbl_1_data_32 = -1;

//unused?
s32 lbl_1_data_34[] = {
0x005F0000, 0x001A0000,
0x006D0000, 0x008A0000,
0x00850000, 0x00110000,
0x000D0000, 0x00810000,
};

s32 lbl_1_data_54[2] = {
    MAKE_DATA_NUM(DATADIR_W10, 18),
    DATA_NUM_LISTEND
};

s32 lbl_1_data_5C[2] = {
    MAKE_DATA_NUM(DATADIR_BGUEST, 9),
    DATA_NUM_LISTEND
};

s32 lbl_1_data_64[2] = {
    MAKE_DATA_NUM(DATADIR_BGUEST, 24),
    DATA_NUM_LISTEND
};

s32 lbl_1_data_6C[2] = {
    MAKE_DATA_NUM(DATADIR_BGUEST, 14),
    DATA_NUM_LISTEND
};

// function is probably global. only inlined in rels?
inline s32 get_current_board(void) {
    return GWSystem.board;
}

void fn_1_E0(void) {
    f32 sp10;
    f32 spC;
    s32 sp8;
    
    s32 i;
    unkw10Dll* temp_r30;
    s32 temp;
    s32 temp2;

    temp2 = get_current_board();
    lbl_1_bss_0 = (W10State *)&GWSystem.board_data;
    lbl_1_bss_0->unk0 = 0;
    lbl_1_bss_0->unk4 = 0;
    lbl_1_bss_0->unk6 = 0;
    fn_800B3FD8(&fn_1_1AAC);
    fn_1_AEC();
    fn_1_1D68();
    lbl_1_bss_C = 0;
    fn_800772EC(MAKE_DATA_NUM(DATADIR_W10, 0));
    temp = fn_800745F0(0, 1);
    fn_800B4274(temp, 1);
    lbl_1_data_28 = fn_8006D9A4(MAKE_DATA_NUM(DATADIR_W10, 1), NULL, 0);
    fn_8006DDE8(lbl_1_data_28, -1.0f);
    fn_8006F1A8(lbl_1_data_28, 0.0f, 0.0f, 0.0f);
    fn_8006E2B8(lbl_1_data_28, 0, 0x40000001);
    fn_8006E878(lbl_1_data_28, 1.0f);
    lbl_1_data_2A = fn_8006D9A4(MAKE_DATA_NUM(DATADIR_W10, 2), NULL, 0);
    fn_8006DDE8(lbl_1_data_2A, -1.0f);
    fn_8006F1A8(lbl_1_data_2A, 0.0f, 0.0f, 0.0f);
    fn_8006E2B8(lbl_1_data_2A, 0, 0x40000001);
    lbl_1_data_2C = fn_8006D9A4(MAKE_DATA_NUM(DATADIR_W10, 17), lbl_1_data_54, 0);
    fn_8006F1A8(lbl_1_data_2C, 0.0f, 0.0f, 0.0f);
    fn_8006E2B8(lbl_1_data_2C, 1, 0x40000001);
    lbl_1_data_2E = fn_8006D9A4(MAKE_DATA_NUM(DATADIR_BGUEST, 5), lbl_1_data_5C, 0);
    fn_8006E2B8(lbl_1_data_2E, 1, 0x40000001);
    lbl_1_data_32 = fn_8006D9A4(MAKE_DATA_NUM(DATADIR_BGUEST, 18), lbl_1_data_64, 0);
    fn_8006E2B8(lbl_1_data_32, 1, 0x40000001);
    lbl_1_data_30 = fn_8006D9A4(MAKE_DATA_NUM(DATADIR_BGUEST, 13), lbl_1_data_6C, 0);
    fn_8006E2B8(lbl_1_data_30, 1, 0x40000001);
    fn_8005D10C(&fn_1_8C0, &fn_1_904);
    for (i = 0; i < ARRAY_COUNT(lbl_1_data_0); i++) {
        temp_r30 = &lbl_1_data_0[i];
        if (temp_r30->unk24 != -1) {
            lbl_1_bss_8 = NULL;
            lbl_1_bss_10[i] = fn_8006D9A4(temp_r30->unk24, lbl_1_bss_8, 0);
            fn_8006F158(lbl_1_bss_10[i], temp_r30);
            fn_8006F220(lbl_1_bss_10[i], &temp_r30->unk0C);
            fn_8006F2E8(lbl_1_bss_10[i], &temp_r30->unk18);
            fn_8006F50C(lbl_1_bss_10[i], 1);
            if (lbl_1_bss_8 != NULL) {
                fn_8006E2B8(lbl_1_bss_10[i], 0, 0x40000001);
            }
        }
    }
    fn_8006F50C(lbl_1_bss_10[0], 0);
    lbl_1_bss_0->unk8 = fn_8006D9A4(0x7000A, NULL, 0);
    fn_8006F50C(lbl_1_bss_0->unk8, 0);
    fn_80073FF4(&fn_1_90C);
    fn_80073FFC(&fn_1_91C);
    fn_80074004(&fn_1_908);
    fn_80083EDC(lbl_1_data_2C);
    fn_800A4F6C(lbl_1_data_32);
    fn_80077AAC(lbl_1_data_2E);
    fn_8007A83C(lbl_1_data_30);
    HuWinMesMaxSizeGet(1, &spC, 0x2E003A);
    lbl_1_bss_E = HuWinCreate(-10000.0f, 390.0f, spC, sp10, 1);
    HuWinMesSet(lbl_1_bss_E, 0x2E003A);
    HuWinMesSpeedSet(lbl_1_bss_E, 0);
    HuWinPriSet(lbl_1_bss_E, 1);
    HuWinMesPalSet(lbl_1_bss_E, 7, 0, 0, 0);
}

void fn_1_6D8(void) {
    s32 i;
    for (i = 0; i < 1; i++) {
        if (lbl_1_bss_10[i] != 0) {
            fn_8006DB90(lbl_1_bss_10[i]);
            lbl_1_bss_10[i] = 0;
        }   
    }
    if (lbl_1_data_32 != -1) {
        fn_8006DB90(lbl_1_data_32);
        lbl_1_data_32 = -1;
    }
    if (lbl_1_data_2E != -1) {
        fn_8006DB90(lbl_1_data_2E);
        lbl_1_data_2E = -1;
    }
    if (lbl_1_data_30 != -1) {
        fn_8006DB90(lbl_1_data_30);
        lbl_1_data_30 = -1;
    }
    if (lbl_1_data_2C != -1) {
        fn_8006DB90(lbl_1_data_2C);
        lbl_1_data_2C = -1;
    }
    if (lbl_1_data_28 != -1) {
        fn_8006DB90(lbl_1_data_28);
        lbl_1_data_28 = -1;
    }
    if (lbl_1_data_2A != -1) {
        fn_8006DB90(lbl_1_data_2A);
        lbl_1_data_2A = -1;
    }
    fn_8006DB90(lbl_1_bss_0->unk8);
    fn_1_1DEC();
    HuWinKill(lbl_1_bss_E);
    fn_80077A3C();
}

void fn_1_8C0(void) {
    s32 temp = fn_8006DBD4(lbl_1_data_28);
    Hu3DModelLightInfoSet(temp, 1);
}

void fn_1_904(void) {
}

void fn_1_908(void) {
}

s32 fn_1_90C(void) {
    return 0;
}

void fn_1_914(void) {
}

void fn_1_918(void) {
}

void fn_1_91C(void) {
}

s32 fn_1_920(s32 arg0, f32 arg8, f32 arg9) {
    s32 var_r31;
    f32 var_f29;
    f32 var_f31;

    var_r31 = 0;
    var_f31 = fn_8006F128(arg0);
    arg8 = fmod(arg8, 360.0);
    if (var_f31 < 0.0f) {
        var_f31 += 360.0f;
    }
    if (arg8 < 0.0f) {
        arg8 += 360.0f;
    }
    if (var_f31 != arg8) {
        var_f29 = arg8 - var_f31;
        if (var_f29 < 0.0f) {
            var_f29 += 360.0f;
        }
        if (var_f29 < 180.0f) {
            if (var_f29 > arg9) {
                var_f31 = var_f31 + arg9;
            } else {
                var_f31 = arg8;
            }
        } else if ((360.0f - var_f29) > arg9) {
            var_f31 = var_f31 - arg9;
        } else {
            var_f31 = arg8;
        }
        if (var_f31 < 0.0f) {
            var_f31 += 360.0f;
        }
        if (var_f31 >= 360.0f) {
            var_f31 -= 360.0f;
        }
        fn_8006F0D4(arg0, var_f31);
    } else {
        var_r31 = 1;
    }
    return var_r31;
}
