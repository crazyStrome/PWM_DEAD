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
static const char *ng0 = "C:/Users/14154/Desktop/PWM_DEAD-master/pwm.v";
static unsigned int ng1[] = {800U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {16U, 0U};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {1, 0};
static int ng6[] = {0, 0};
static int ng7[] = {2, 0};



static void Initial_73_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(74, ng0);

LAB2:    xsi_set_current_line(75, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 24, 0LL);
    xsi_set_current_line(76, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 5, 0LL);
    xsi_set_current_line(77, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 8, 0LL);
    xsi_set_current_line(78, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 24, 0LL);
    xsi_set_current_line(79, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_87_1(char *t0)
{
    char t13[8];
    char t15[8];
    char t18[8];
    char t44[8];
    char t88[8];
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
    unsigned int t14;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t89;

LAB0:    t1 = (t0 + 5176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 7232);
    *((int *)t2) = 1;
    t3 = (t0 + 5208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(88, ng0);

LAB5:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 0);
    t14 = (t10 & 1);
    *((unsigned int *)t5) = t14;
    t12 = (t0 + 3368);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 0);
    t26 = (t25 & 1);
    *((unsigned int *)t19) = t26;
    memset(t15, 0, 8);
    t27 = (t18 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t18);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t27) == 0)
        goto LAB10;

LAB12:    t33 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t33) = 1;

LAB13:    t34 = (t15 + 4);
    t35 = (t18 + 4);
    t36 = *((unsigned int *)t18);
    t37 = (~(t36));
    *((unsigned int *)t15) = t37;
    *((unsigned int *)t34) = 0;
    if (*((unsigned int *)t35) != 0)
        goto LAB15;

LAB14:    t42 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t42 & 1U);
    t43 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t43 & 1U);
    t45 = *((unsigned int *)t13);
    t46 = *((unsigned int *)t15);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t13 + 4);
    t49 = (t15 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB16;

LAB17:
LAB18:    t76 = (t44 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 0);
    t14 = (t10 & 1);
    *((unsigned int *)t5) = t14;
    memset(t13, 0, 8);
    t12 = (t15 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t15);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t12) == 0)
        goto LAB23;

LAB25:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;

LAB26:    t17 = (t13 + 4);
    t19 = (t15 + 4);
    t26 = *((unsigned int *)t15);
    t28 = (~(t26));
    *((unsigned int *)t13) = t28;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB28;

LAB27:    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & 1U);
    t37 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t37 & 1U);
    t20 = (t0 + 3368);
    t27 = (t20 + 56U);
    t33 = *((char **)t27);
    memset(t18, 0, 8);
    t34 = (t18 + 4);
    t35 = (t33 + 4);
    t38 = *((unsigned int *)t33);
    t39 = (t38 >> 0);
    t40 = (t39 & 1);
    *((unsigned int *)t18) = t40;
    t41 = *((unsigned int *)t35);
    t42 = (t41 >> 0);
    t43 = (t42 & 1);
    *((unsigned int *)t34) = t43;
    t45 = *((unsigned int *)t13);
    t46 = *((unsigned int *)t18);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t13 + 4);
    t49 = (t18 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB29;

LAB30:
LAB31:    t76 = (t44 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 1);
    t14 = (t10 & 1);
    *((unsigned int *)t5) = t14;
    t12 = (t0 + 3368);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 1);
    t23 = (t22 & 1);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 1);
    t26 = (t25 & 1);
    *((unsigned int *)t19) = t26;
    memset(t15, 0, 8);
    t27 = (t18 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t18);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB39;

LAB37:    if (*((unsigned int *)t27) == 0)
        goto LAB36;

LAB38:    t33 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t33) = 1;

LAB39:    t34 = (t15 + 4);
    t35 = (t18 + 4);
    t36 = *((unsigned int *)t18);
    t37 = (~(t36));
    *((unsigned int *)t15) = t37;
    *((unsigned int *)t34) = 0;
    if (*((unsigned int *)t35) != 0)
        goto LAB41;

LAB40:    t42 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t42 & 1U);
    t43 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t43 & 1U);
    t45 = *((unsigned int *)t13);
    t46 = *((unsigned int *)t15);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t13 + 4);
    t49 = (t15 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB42;

LAB43:
LAB44:    t76 = (t44 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 1);
    t14 = (t10 & 1);
    *((unsigned int *)t5) = t14;
    memset(t13, 0, 8);
    t12 = (t15 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t15);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB52;

LAB50:    if (*((unsigned int *)t12) == 0)
        goto LAB49;

LAB51:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;

LAB52:    t17 = (t13 + 4);
    t19 = (t15 + 4);
    t26 = *((unsigned int *)t15);
    t28 = (~(t26));
    *((unsigned int *)t13) = t28;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB54;

LAB53:    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & 1U);
    t37 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t37 & 1U);
    t20 = (t0 + 3368);
    t27 = (t20 + 56U);
    t33 = *((char **)t27);
    memset(t18, 0, 8);
    t34 = (t18 + 4);
    t35 = (t33 + 4);
    t38 = *((unsigned int *)t33);
    t39 = (t38 >> 1);
    t40 = (t39 & 1);
    *((unsigned int *)t18) = t40;
    t41 = *((unsigned int *)t35);
    t42 = (t41 >> 1);
    t43 = (t42 & 1);
    *((unsigned int *)t34) = t43;
    t45 = *((unsigned int *)t13);
    t46 = *((unsigned int *)t18);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t13 + 4);
    t49 = (t18 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB55;

LAB56:
LAB57:    t76 = (t44 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 2);
    t14 = (t10 & 1);
    *((unsigned int *)t5) = t14;
    t12 = (t0 + 3368);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 2);
    t23 = (t22 & 1);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 2);
    t26 = (t25 & 1);
    *((unsigned int *)t19) = t26;
    memset(t15, 0, 8);
    t27 = (t18 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t18);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB65;

LAB63:    if (*((unsigned int *)t27) == 0)
        goto LAB62;

LAB64:    t33 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t33) = 1;

LAB65:    t34 = (t15 + 4);
    t35 = (t18 + 4);
    t36 = *((unsigned int *)t18);
    t37 = (~(t36));
    *((unsigned int *)t15) = t37;
    *((unsigned int *)t34) = 0;
    if (*((unsigned int *)t35) != 0)
        goto LAB67;

LAB66:    t42 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t42 & 1U);
    t43 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t43 & 1U);
    t45 = *((unsigned int *)t13);
    t46 = *((unsigned int *)t15);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t13 + 4);
    t49 = (t15 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB68;

LAB69:
LAB70:    t76 = (t44 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 2);
    t14 = (t10 & 1);
    *((unsigned int *)t5) = t14;
    memset(t13, 0, 8);
    t12 = (t15 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t15);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB78;

LAB76:    if (*((unsigned int *)t12) == 0)
        goto LAB75;

LAB77:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;

LAB78:    t17 = (t13 + 4);
    t19 = (t15 + 4);
    t26 = *((unsigned int *)t15);
    t28 = (~(t26));
    *((unsigned int *)t13) = t28;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB80;

LAB79:    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & 1U);
    t37 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t37 & 1U);
    t20 = (t0 + 3368);
    t27 = (t20 + 56U);
    t33 = *((char **)t27);
    memset(t18, 0, 8);
    t34 = (t18 + 4);
    t35 = (t33 + 4);
    t38 = *((unsigned int *)t33);
    t39 = (t38 >> 2);
    t40 = (t39 & 1);
    *((unsigned int *)t18) = t40;
    t41 = *((unsigned int *)t35);
    t42 = (t41 >> 2);
    t43 = (t42 & 1);
    *((unsigned int *)t34) = t43;
    t45 = *((unsigned int *)t13);
    t46 = *((unsigned int *)t18);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t13 + 4);
    t49 = (t18 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB81;

LAB82:
LAB83:    t76 = (t44 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 3);
    t14 = (t10 & 1);
    *((unsigned int *)t5) = t14;
    t12 = (t0 + 3368);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 3);
    t23 = (t22 & 1);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 3);
    t26 = (t25 & 1);
    *((unsigned int *)t19) = t26;
    memset(t15, 0, 8);
    t27 = (t18 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t18);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB91;

LAB89:    if (*((unsigned int *)t27) == 0)
        goto LAB88;

LAB90:    t33 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t33) = 1;

LAB91:    t34 = (t15 + 4);
    t35 = (t18 + 4);
    t36 = *((unsigned int *)t18);
    t37 = (~(t36));
    *((unsigned int *)t15) = t37;
    *((unsigned int *)t34) = 0;
    if (*((unsigned int *)t35) != 0)
        goto LAB93;

LAB92:    t42 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t42 & 1U);
    t43 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t43 & 1U);
    t45 = *((unsigned int *)t13);
    t46 = *((unsigned int *)t15);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t13 + 4);
    t49 = (t15 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB94;

LAB95:
LAB96:    t76 = (t44 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 3);
    t14 = (t10 & 1);
    *((unsigned int *)t5) = t14;
    memset(t13, 0, 8);
    t12 = (t15 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t15);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB104;

LAB102:    if (*((unsigned int *)t12) == 0)
        goto LAB101;

LAB103:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;

LAB104:    t17 = (t13 + 4);
    t19 = (t15 + 4);
    t26 = *((unsigned int *)t15);
    t28 = (~(t26));
    *((unsigned int *)t13) = t28;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB106;

LAB105:    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & 1U);
    t37 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t37 & 1U);
    t20 = (t0 + 3368);
    t27 = (t20 + 56U);
    t33 = *((char **)t27);
    memset(t18, 0, 8);
    t34 = (t18 + 4);
    t35 = (t33 + 4);
    t38 = *((unsigned int *)t33);
    t39 = (t38 >> 3);
    t40 = (t39 & 1);
    *((unsigned int *)t18) = t40;
    t41 = *((unsigned int *)t35);
    t42 = (t41 >> 3);
    t43 = (t42 & 1);
    *((unsigned int *)t34) = t43;
    t45 = *((unsigned int *)t13);
    t46 = *((unsigned int *)t18);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t13 + 4);
    t49 = (t18 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB107;

LAB108:
LAB109:    t76 = (t44 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB110;

LAB111:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t21 = (t8 | t14);
    t22 = *((unsigned int *)t11);
    t23 = *((unsigned int *)t12);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB117;

LAB114:    if (t24 != 0)
        goto LAB116;

LAB115:    *((unsigned int *)t13) = 1;

LAB117:    t17 = (t13 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t30 = *((unsigned int *)t13);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB118;

LAB119:
LAB120:
LAB112:
LAB99:
LAB86:
LAB73:
LAB60:
LAB47:
LAB34:
LAB21:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(90, ng0);

LAB9:    xsi_set_current_line(91, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 24, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t15) = 1;
    goto LAB13;

LAB15:    t38 = *((unsigned int *)t15);
    t39 = *((unsigned int *)t35);
    *((unsigned int *)t15) = (t38 | t39);
    t40 = *((unsigned int *)t34);
    t41 = *((unsigned int *)t35);
    *((unsigned int *)t34) = (t40 | t41);
    goto LAB14;

LAB16:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t13 + 4);
    t59 = (t15 + 4);
    t60 = *((unsigned int *)t13);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t15);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB18;

LAB19:    xsi_set_current_line(95, ng0);

LAB22:    xsi_set_current_line(96, ng0);
    t82 = (t0 + 3528);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    t85 = (t0 + 3688);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    memset(t88, 0, 8);
    xsi_vlog_unsigned_minus(t88, 24, t84, 24, t87, 5);
    t89 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t89, t88, 0, 0, 24, 0LL);
    goto LAB21;

LAB23:    *((unsigned int *)t13) = 1;
    goto LAB26;

LAB28:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t29 | t30);
    t31 = *((unsigned int *)t17);
    t32 = *((unsigned int *)t19);
    *((unsigned int *)t17) = (t31 | t32);
    goto LAB27;

LAB29:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t13 + 4);
    t59 = (t18 + 4);
    t60 = *((unsigned int *)t13);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t18);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB31;

LAB32:    xsi_set_current_line(99, ng0);

LAB35:    xsi_set_current_line(100, ng0);
    t82 = (t0 + 3528);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    t85 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t85, t84, 0, 0, 24, 0LL);
    goto LAB34;

LAB36:    *((unsigned int *)t15) = 1;
    goto LAB39;

LAB41:    t38 = *((unsigned int *)t15);
    t39 = *((unsigned int *)t35);
    *((unsigned int *)t15) = (t38 | t39);
    t40 = *((unsigned int *)t34);
    t41 = *((unsigned int *)t35);
    *((unsigned int *)t34) = (t40 | t41);
    goto LAB40;

LAB42:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t13 + 4);
    t59 = (t15 + 4);
    t60 = *((unsigned int *)t13);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t15);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB44;

LAB45:    xsi_set_current_line(103, ng0);

LAB48:    xsi_set_current_line(104, ng0);
    t82 = (t0 + 3528);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    t85 = (t0 + 3688);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    memset(t88, 0, 8);
    xsi_vlog_unsigned_add(t88, 24, t84, 24, t87, 5);
    t89 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t89, t88, 0, 0, 24, 0LL);
    goto LAB47;

LAB49:    *((unsigned int *)t13) = 1;
    goto LAB52;

LAB54:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t29 | t30);
    t31 = *((unsigned int *)t17);
    t32 = *((unsigned int *)t19);
    *((unsigned int *)t17) = (t31 | t32);
    goto LAB53;

LAB55:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t13 + 4);
    t59 = (t18 + 4);
    t60 = *((unsigned int *)t13);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t18);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB57;

LAB58:    xsi_set_current_line(107, ng0);

LAB61:    xsi_set_current_line(108, ng0);
    t82 = (t0 + 3528);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    t85 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t85, t84, 0, 0, 24, 0LL);
    goto LAB60;

LAB62:    *((unsigned int *)t15) = 1;
    goto LAB65;

LAB67:    t38 = *((unsigned int *)t15);
    t39 = *((unsigned int *)t35);
    *((unsigned int *)t15) = (t38 | t39);
    t40 = *((unsigned int *)t34);
    t41 = *((unsigned int *)t35);
    *((unsigned int *)t34) = (t40 | t41);
    goto LAB66;

LAB68:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t13 + 4);
    t59 = (t15 + 4);
    t60 = *((unsigned int *)t13);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t15);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB70;

LAB71:    xsi_set_current_line(111, ng0);

LAB74:    xsi_set_current_line(112, ng0);
    t82 = (t0 + 3688);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    t85 = ((char*)((ng5)));
    memset(t88, 0, 8);
    xsi_vlog_unsigned_lshift(t88, 5, t84, 5, t85, 32);
    t86 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t86, t88, 0, 0, 5, 0LL);
    goto LAB73;

LAB75:    *((unsigned int *)t13) = 1;
    goto LAB78;

LAB80:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t29 | t30);
    t31 = *((unsigned int *)t17);
    t32 = *((unsigned int *)t19);
    *((unsigned int *)t17) = (t31 | t32);
    goto LAB79;

LAB81:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t13 + 4);
    t59 = (t18 + 4);
    t60 = *((unsigned int *)t13);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t18);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB83;

LAB84:    xsi_set_current_line(115, ng0);

LAB87:    xsi_set_current_line(116, ng0);
    t82 = (t0 + 3688);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    t85 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t85, t84, 0, 0, 5, 0LL);
    goto LAB86;

LAB88:    *((unsigned int *)t15) = 1;
    goto LAB91;

LAB93:    t38 = *((unsigned int *)t15);
    t39 = *((unsigned int *)t35);
    *((unsigned int *)t15) = (t38 | t39);
    t40 = *((unsigned int *)t34);
    t41 = *((unsigned int *)t35);
    *((unsigned int *)t34) = (t40 | t41);
    goto LAB92;

LAB94:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t13 + 4);
    t59 = (t15 + 4);
    t60 = *((unsigned int *)t13);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t15);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB96;

LAB97:    xsi_set_current_line(119, ng0);

LAB100:    xsi_set_current_line(120, ng0);
    t82 = (t0 + 3688);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    t85 = ((char*)((ng5)));
    memset(t88, 0, 8);
    xsi_vlog_unsigned_rshift(t88, 5, t84, 5, t85, 32);
    t86 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t86, t88, 0, 0, 5, 0LL);
    goto LAB99;

LAB101:    *((unsigned int *)t13) = 1;
    goto LAB104;

LAB106:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t29 | t30);
    t31 = *((unsigned int *)t17);
    t32 = *((unsigned int *)t19);
    *((unsigned int *)t17) = (t31 | t32);
    goto LAB105;

LAB107:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t13 + 4);
    t59 = (t18 + 4);
    t60 = *((unsigned int *)t13);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t18);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB109;

LAB110:    xsi_set_current_line(123, ng0);

LAB113:    xsi_set_current_line(124, ng0);
    t82 = (t0 + 3688);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    t85 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t85, t84, 0, 0, 5, 0LL);
    goto LAB112;

LAB116:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB117;

LAB118:    xsi_set_current_line(127, ng0);

LAB121:    xsi_set_current_line(128, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 5, 0LL);
    goto LAB120;

}

static void Always_132_2(char *t0)
{
    char t11[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 5424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 7248);
    *((int *)t2) = 1;
    t3 = (t0 + 5456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(133, ng0);

LAB5:    xsi_set_current_line(134, ng0);
    t4 = (t0 + 4008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3528);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng5)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t9, 24, t10, 32);
    memset(t12, 0, 8);
    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB7;

LAB6:    t14 = (t11 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t11))
        goto LAB9;

LAB8:    *((unsigned int *)t12) = 1;

LAB9:    t16 = (t12 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 24, t5, 32);
    t6 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t6, t11, 0, 0, 24, 0LL);

LAB13:    goto LAB2;

LAB7:    t15 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(135, ng0);
    t22 = ((char*)((ng6)));
    t23 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 24, 0LL);
    goto LAB13;

}

static void Always_141_3(char *t0)
{
    char t8[8];
    char t32[8];
    char t33[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 7264);
    *((int *)t2) = 1;
    t3 = (t0 + 5704);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(142, ng0);

LAB5:    xsi_set_current_line(143, ng0);
    t4 = (t0 + 4008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_divide(t8, 32, t7, 24, t9, 32);
    t10 = (t0 + 3848);
    t23 = (t10 + 56U);
    t24 = *((char **)t23);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_minus(t32, 32, t8, 32, t24, 8);
    t30 = ((char*)((ng5)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_minus(t33, 32, t32, 32, t30, 32);
    memset(t34, 0, 8);
    t31 = (t4 + 4);
    t35 = (t33 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t33);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t35);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t31);
    t19 = *((unsigned int *)t35);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB16;

LAB13:    if (t20 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t34) = 1;

LAB16:    t37 = (t34 + 4);
    t25 = *((unsigned int *)t37);
    t26 = (~(t25));
    t27 = *((unsigned int *)t34);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_divide(t8, 32, t7, 24, t9, 32);
    t10 = ((char*)((ng5)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_minus(t32, 32, t8, 32, t10, 32);
    memset(t33, 0, 8);
    t23 = (t4 + 4);
    t24 = (t32 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t32);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t23);
    t15 = *((unsigned int *)t24);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t23);
    t19 = *((unsigned int *)t24);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB23;

LAB20:    if (t20 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t33) = 1;

LAB23:    t31 = (t33 + 4);
    t25 = *((unsigned int *)t31);
    t26 = (~(t25));
    t27 = *((unsigned int *)t33);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t0 + 3848);
    t10 = (t9 + 56U);
    t23 = *((char **)t10);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t7, 24, t23, 8);
    t24 = ((char*)((ng5)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_minus(t32, 32, t8, 32, t24, 32);
    memset(t33, 0, 8);
    t30 = (t4 + 4);
    t31 = (t32 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t32);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t30);
    t15 = *((unsigned int *)t31);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t30);
    t19 = *((unsigned int *)t31);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB30;

LAB27:    if (t20 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t33) = 1;

LAB30:    t36 = (t33 + 4);
    t25 = *((unsigned int *)t36);
    t26 = (~(t25));
    t27 = *((unsigned int *)t33);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB31;

LAB32:
LAB33:
LAB26:
LAB19:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(144, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    t36 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(146, ng0);
    t38 = ((char*)((ng4)));
    t39 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t39, t38, 0, 0, 1, 0LL);
    goto LAB19;

LAB22:    t30 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(148, ng0);
    t35 = ((char*)((ng2)));
    t36 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 1, 0LL);
    goto LAB26;

LAB29:    t35 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(150, ng0);
    t37 = ((char*)((ng4)));
    t38 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t38, t37, 0, 0, 1, 0LL);
    goto LAB33;

}

static void Always_154_4(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 5920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 7280);
    *((int *)t2) = 1;
    t3 = (t0 + 5952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(155, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    *((unsigned int *)t4) = t9;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB5:    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 15U);
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t15 & 15U);
    t16 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t16, t4, 0, 0, 4, 0LL);
    goto LAB2;

LAB6:    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    *((unsigned int *)t4) = (t10 | t11);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t5) = (t12 | t13);
    goto LAB5;

}

static void Always_158_5(char *t0)
{
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

LAB0:    t1 = (t0 + 6168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 7296);
    *((int *)t2) = 1;
    t3 = (t0 + 6200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(159, ng0);

LAB5:    xsi_set_current_line(160, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(166, ng0);

LAB10:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(161, ng0);

LAB9:    xsi_set_current_line(162, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB8;

}

static void Cont_172_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7424);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 7312);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_173_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7488);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 7328);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_175_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 6912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 7552);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 7344);
    *((int *)t16) = 1;

LAB1:    return;
}


extern void work_m_00000000003888242718_0097133789_init()
{
	static char *pe[] = {(void *)Initial_73_0,(void *)Always_87_1,(void *)Always_132_2,(void *)Always_141_3,(void *)Always_154_4,(void *)Always_158_5,(void *)Cont_172_6,(void *)Cont_173_7,(void *)Cont_175_8};
	xsi_register_didat("work_m_00000000003888242718_0097133789", "isim/pwmtest_isim_beh.exe.sim/work/m_00000000003888242718_0097133789.didat");
	xsi_register_executes(pe);
}
