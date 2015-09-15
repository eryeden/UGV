extern "C"{
#include "Clock.h"
#include "stm32f4xx_nucleo.h"
}

//EXTERNCはヘッダファイル群にてすでに記述済なので囲む必要はない
#include "main.h"

int main(void)
{
   
   /* STM32F4xx HAL library initialization:
      - Configure the Flash prefetch, Flash preread and Buffer caches
      - Systick timer is configured by default as source of time base, but user 
      can eventually implement his proper time base source (a general purpose 
      timer for example or other time source), keeping in mind that Time base 
      duration should be kept 1ms since PPP_TIMEOUT_VALUEs are defined and 
      handled in milliseconds basis.
      - Low Level Initialization
   */
   HAL_Init();
   
        
   /* Configure the System clock to 84 MHz */
   SystemClock_Config();

   //LED initialization
   BSP_LED_Init(LED2);
//   BSP_LED_Init(LED3);

   long i = 0;
   while (1){
      BSP_LED_Toggle(LED2);
      for(i = 0; i < 0xFFFFFF; i++){
         ;
      }
//      BSP_LED_On(LED3);
   }
}

#ifdef  USE_FULL_ASSERT
/**
 * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
{ 
        /* User can add his own implementation to report the file name and line number,
           ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

        /* Infinite loop */
        while (1)
  {
  }
}
#endif
