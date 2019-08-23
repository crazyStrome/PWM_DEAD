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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    unisims_ver_m_00000000001946988858_2297623829_init();
    unisims_ver_m_00000000004091665089_2910873410_init();
    unisims_ver_m_00000000003084551676_3411265611_init();
    work_m_00000000002539312484_3705373671_init();
    work_m_00000000000715006671_0515817617_init();
    work_m_00000000003888242718_0097133789_init();
    work_m_00000000003766443007_2809250096_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003766443007_2809250096");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
