#include "my_main.h"
uint16_t i=0;  //用来记录外部中断触发的次数
void setup()	
{
	/*OLED初始化*/
	OLED_Init();
	
	/*在(0, 0)位置显示字符'A'，字体大小为8*16点阵*/
	OLED_ShowChar(0, 0, 'i', OLED_8X16);
	
	
	OLED_Update();
	
	/*延时1000ms，观察现象*/
	HAL_Delay(1000);
	
}

void loop()
{

		OLED_ShowNum(10, 0, i, 5, OLED_8X16);  	//显示变量 i 的值
		OLED_Update();
		HAL_Delay(10);/*延时10ms，观察现象*/

}
