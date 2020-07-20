Day 1:  Add uCOS-III to STM32L433RC MCU
		  
        Since STM32L433RC is pretty similar to STM32L476, download the examples from micrium website for start point.
		The micrium examples does not include STM32 device driver library. But I do want to have the library for quick development!
		Thus a few extra steps needs to be implemented..
		Prior to everything, I need to use CubeMX generate the project. 
		A. copy uC-CPU, uC-LIB, uCOS-III folders to $PROJ_DIR/../Thirdparty/uCOSIII
		B. copy BSP folder to $PROJ_DIR/../
		   Note that not all the files are needed. As in my application, cpu_bsp.c is mandatory (no need to modify) and bsp.c is required and must be modified. 
		   I also added a file name bsp_hal.c in which I can copy&paste the auto generated driver code by CubeMX.
		C. copy app.c os_app_hooks.c to $PROJ_DIR/../Src folder and other head files to $PROJ_zDIR/../Inc folder
		D. remove main.c from project and add app.c instead. 
		E. add HAL_Init() below BSP_IntDisAll()
		F. add HAL_InitTick() function in bsp.c and returns directly. Since system tick will be configured later by bsp.
		G. add FPU->FPCCR &= ~(FPU_FPCCR_ASPEN_Msk | FPU_FPCCR_LSPEN_Msk); to SystemInit() FPU settings.
		H. change startup_stm32l433xx.s PendSV handler and Systick handler to OS_CPU_PendSVHandler and OS_CPU_SysTickHandler.
		
		