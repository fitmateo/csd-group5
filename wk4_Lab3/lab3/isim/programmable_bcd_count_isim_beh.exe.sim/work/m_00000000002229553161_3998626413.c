/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Mateo/Google Drive/USF_Course_Docs/2017_SP_CDA4203L Computer System Design Lab/CDA4203L_wk4_Lab3/tylersimoni_lab3.4/proj_bcd_count.v";
static int ng1[] = {0, 0};
static int ng2[] = {99, 0};
static int ng3[] = {1, 0};
static int ng4[] = {10, 0};



static void Always_20_0(char *t0)
{
    char t17[8];
    char t21[8];
    char t37[8];
    char t41[8];
    char t49[8];
    char t91[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    int t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t92;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21, ng0);

LAB5:    xsi_set_current_line(23, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 7);
    xsi_set_current_line(26, ng0);

LAB6:    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t17, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t23 = (t9 ^ t10);
    t24 = (t8 | t23);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 | t26);
    t30 = (~(t27));
    t31 = (t24 & t30);
    if (t31 != 0)
        goto LAB42;

LAB39:    if (t27 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t17) = 1;

LAB42:    t12 = (t17 + 4);
    t32 = *((unsigned int *)t12);
    t43 = (~(t32));
    t44 = *((unsigned int *)t17);
    t45 = (t44 & t43);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB43;

LAB44:
LAB45:    goto LAB2;

LAB7:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 3504);
    *((int *)t4) = 1;
    t5 = (t0 + 3200);
    *((char **)t5) = t4;
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(27, ng0);

LAB10:    xsi_set_current_line(28, ng0);
    t11 = (t0 + 2088);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 2248);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t18 = (t13 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB12;

LAB11:    t19 = (t16 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB12;

LAB15:    if (*((unsigned int *)t13) < *((unsigned int *)t16))
        goto LAB13;

LAB14:    memset(t21, 0, 8);
    t22 = (t17 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t17);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t22) != 0)
        goto LAB18;

LAB19:    t29 = (t21 + 4);
    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB20;

LAB21:    memcpy(t49, t21, 8);

LAB22:    t81 = (t49 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t49);
    t85 = (t84 & t83);
    t86 = (t85 != 0);
    if (t86 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB6;

LAB12:    t20 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB14;

LAB13:    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB16:    *((unsigned int *)t21) = 1;
    goto LAB19;

LAB18:    t28 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB19;

LAB20:    t33 = (t0 + 2088);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng2)));
    memset(t37, 0, 8);
    t38 = (t35 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB24;

LAB23:    t39 = (t36 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB24;

LAB27:    if (*((unsigned int *)t35) < *((unsigned int *)t36))
        goto LAB25;

LAB26:    memset(t41, 0, 8);
    t42 = (t37 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (~(t43));
    t45 = *((unsigned int *)t37);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t42) != 0)
        goto LAB30;

LAB31:    t50 = *((unsigned int *)t21);
    t51 = *((unsigned int *)t41);
    t52 = (t50 & t51);
    *((unsigned int *)t49) = t52;
    t53 = (t21 + 4);
    t54 = (t41 + 4);
    t55 = (t49 + 4);
    t56 = *((unsigned int *)t53);
    t57 = *((unsigned int *)t54);
    t58 = (t56 | t57);
    *((unsigned int *)t55) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 != 0);
    if (t60 == 1)
        goto LAB32;

LAB33:
LAB34:    goto LAB22;

LAB24:    t40 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB26;

LAB25:    *((unsigned int *)t37) = 1;
    goto LAB26;

LAB28:    *((unsigned int *)t41) = 1;
    goto LAB31;

LAB30:    t48 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB31;

LAB32:    t61 = *((unsigned int *)t49);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t49) = (t61 | t62);
    t63 = (t21 + 4);
    t64 = (t41 + 4);
    t65 = *((unsigned int *)t21);
    t66 = (~(t65));
    t67 = *((unsigned int *)t63);
    t68 = (~(t67));
    t69 = *((unsigned int *)t41);
    t70 = (~(t69));
    t71 = *((unsigned int *)t64);
    t72 = (~(t71));
    t73 = (t66 & t68);
    t74 = (t70 & t72);
    t75 = (~(t73));
    t76 = (~(t74));
    t77 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t77 & t75);
    t78 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t78 & t76);
    t79 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t79 & t75);
    t80 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t80 & t76);
    goto LAB34;

LAB35:    xsi_set_current_line(29, ng0);

LAB38:    xsi_set_current_line(30, ng0);
    t87 = (t0 + 2088);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    t90 = ((char*)((ng3)));
    memset(t91, 0, 8);
    xsi_vlog_unsigned_add(t91, 32, t89, 7, t90, 32);
    t92 = (t0 + 2088);
    xsi_vlogvar_assign_value(t92, t91, 0, 0, 7);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_mod(t17, 32, t4, 7, t5, 32);
    t11 = (t0 + 1768);
    xsi_vlogvar_assign_value(t11, t17, 0, 0, 4);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_divide(t17, 32, t4, 7, t5, 32);
    t11 = (t0 + 1928);
    xsi_vlogvar_assign_value(t11, t17, 0, 0, 4);
    goto LAB37;

LAB41:    t11 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(37, ng0);

LAB46:    xsi_set_current_line(38, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 2088);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 7);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 7);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB45;

}


extern void work_m_00000000002229553161_3998626413_init()
{
	static char *pe[] = {(void *)Always_20_0};
	xsi_register_didat("work_m_00000000002229553161_3998626413", "isim/programmable_bcd_count_isim_beh.exe.sim/work/m_00000000002229553161_3998626413.didat");
	xsi_register_executes(pe);
}
